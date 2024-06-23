// Bazi.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "windows.h"
#include<iostream>
using namespace std;

void Usage()
{
	cout << "Usage:\tBazi.exe -q <����������֮ǰ����> -t hh" << endl;
	cout <<"\tBazi.exe -e <��������>" << endl;
	return;
}

bool CheckBazi(_TCHAR *bazi);
_TCHAR *ComputeTimeGan(_TCHAR *bazi, int hour);
_TCHAR *EvalBazi(_TCHAR *bazi);

int _tmain(int argc, _TCHAR* argv[])
{
	_TCHAR *subCmd, *paraStr;
	if (argc != 5 && argc !=3) {
		Usage();
		return 0;
	}

	subCmd = argv[1];
	paraStr = argv[2];
	if (argc ==5) {
		// Parsing the part of"-q <����������֮ǰ����>"
		if (!(wcslen(subCmd)==1&& subCmd[0] == 'q' || wcslen(subCmd)==2 && subCmd[0]=='-'&& subCmd[1]=='q')) {
			Usage();
			return 0;
		}

		if (wcslen(paraStr)!=6 ||!CheckBazi(paraStr)) {
			cout <<"-q��������������յĸ�֧�����Բ�ѯ���������������߰汾 http://www.nongli.net/" << endl;
			Usage();
			return 0;
		}

		// Parsing the part of"-t hh:mm"
		subCmd = argv[3];
		paraStr = argv[4];

		if (!(wcslen(subCmd)==1&& subCmd[0] == 't' || wcslen(subCmd)==2 && subCmd[0]=='-'&& subCmd[1]=='t')) {
			Usage();
			return 0;
		}

		int hour = -1;
		swscanf(paraStr,L"%d", &hour);
		if (hour <0 || hour>23) {
			cout <<"Error: ʱ����������ȷ��ӦΪ0~23֮���һ����������" << endl;
			Usage();
			return 0;
		}

		_TCHAR * result =ComputeTimeGan(argv[2], hour);
		if (result == 0) {
			cout << "��ѯ���ɹ���"<< endl;
		} else {
			char tmpBuf[128];
			WideCharToMultiByte( CP_ACP, 0, result, -1,tmpBuf, 127, NULL, NULL );

			cout << "��ѯ���ֵĽ���ǣ�"<< tmpBuf << endl;
			cout << "��������������-e�������˰��ֵ�����ƽ����Ϣ��" << endl;
		}
		return 0;
	}

	if (argc ==3) {
		// Parsingthe part of "-q <����������֮ǰ����>"
		if (!(wcslen(subCmd)==1&& subCmd[0] == 'e' || wcslen(subCmd)==2 && subCmd[0]=='-'&& subCmd[1]=='e')) {
			Usage();
			return 0;
		}

		if (wcslen(paraStr)!=8 ||!CheckBazi(paraStr)) {
			cout <<"-e�����������������" << endl;
			Usage();
			return 0;
		}

		_TCHAR *result =EvalBazi(paraStr);

		if (result == 0) {
			cout << "���㲻�ɹ������������"<< endl;
		} else {
			char tmpBuf[1024];
			WideCharToMultiByte( CP_ACP, 0, result, -1,tmpBuf, 1024, NULL, NULL );

			cout <<"\n�˰��ֵ�����ƽ�����������£�\n\n" << tmpBuf << endl;
		}
		return 0;
	}

	Usage();

	return 0;
}

