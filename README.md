BaziEval
========

计算生辰八字五行属性的算法
Algorithm for calculating the attributes of birth date, horoscope and five elements
在这里看到的算法。感谢原作者。
See the algorithm here. Thanks to the original author.
http://blog.csdn.net/panaimin/article/details/8544489

仅仅是弄个工程方便在外面想看的时候用。
It's just a project that can be used when you want to take a look outside.
原文：original:

计算生辰八字五行属性的算法
Algorithm for calculating the attributes of birth date, horoscope and five elements
潘爱民Pan Aimin

2013/1/26

**缘起：**几年前，小儿出生的几天之内，我需要为他起名字。人生难得接一两回这样的任务，更是格外珍惜。我调研了几种起名字的思路，最终确定按照五行阴阳平衡的道理来确定生辰八字的五行属性，然后选取恰当的字。
**Origin:** A few years ago, within a few days of my baby’s birth, I needed to name him. It is rare to receive such a task once or twice in life, and I cherish it even more. I researched several ideas for naming, and finally decided to determine the five-element attributes of the birth date and horoscope based on the balance of yin and yang among the five elements, and then selected the appropriate characters.
 

**说明：**本文描述的算法是根据Internet上的资料整理而得到，并非我原创，但个别地方我做过修改。其中经验值的出处已无法找到。
**Note:** The algorithm described in this article is based on information on the Internet. It is not my original creation, but I have made modifications in some places. The source of the experience value cannot be found.
算法的高度足够，我是坐在飞机上写下这一算法描述的，上万米高空俯瞰大地，感觉到一种静默的平衡J。在过去几年中，我用这一算法测算过十多个生辰八字，也碰到过一两个极端的情形，与现实中的表现比较吻合。因此，我相信这算法的结果有参考意义。但是，因使用该算法引起的任何意外事故，我概不负责，请谨慎使用。
The altitude of the algorithm is sufficient. I wrote this description of the algorithm while sitting on a plane. Overlooking the earth at an altitude of tens of thousands of meters, I felt a kind of silent balanceJ. In the past few years, I have used this algorithm to calculate more than ten birthdays and horoscopes, and I have also encountered one or two extreme situations, which are relatively consistent with the actual performance. Therefore, I believe that the results of this algorithm are of reference significance. However, I am not responsible for any accidents caused by using this algorithm, so please use it with caution.
 

算法的过程如下所述：The algorithm process is as follows

**1.       根据出生年月日和时辰，确定八个字，即生辰八字。**
**1. According to the year, month, day and hour of birth, eight characters are determined, namely the birth date. **
查万年历（比如www.nongli.net），确定前六个字。比如1968年8月8日，查到的结果是：
Check the perpetual calendar (such as www.nongli.net) to determine the first six characters. For example, on August 8, 1968, the results found were:
**戊申辛酉壬寅****Wu Shen Xin You Ren Yin**

这六个字分别是年份的天干、地支，月份的天干、地支，和日子的天干、地支。These six characters are respectively the Heavenly Stems and Earthly Branches of the year, the Heavenly Stems and Earthly Branches of the month, and the Heavenly Stems and Earthly Branches of the days.

接下来确定时辰的天干和地支，查下表：Next, determine the heavenly stems and earthly branches of the time, check the table below:

 

| 出生钟点 | 时辰地支 | 日干（即第5个字）Hour of Birth | Time and Earthly Branches | Day Stem (i.e. the 5th character) |       |       |       |       |
| -------- | -------- | ----------------- | ----- | ----- | ----- | ----- |
|          |          | 甲 己             | 乙 庚 | 丙 辛 | 丁 壬 | 戊 癸 |
| 23－1    | 子       | 甲子              | 丙子  | 戊子  | 庚子  | 壬子  |
| 1－3     | 丑       | 乙丑              | 丁丑  | 己丑  | 辛丑  | 癸丑  |
| 3－5     | 寅       | 丙寅              | 戊寅  | 庚寅  | 壬寅  | 甲寅  |
| 5－7     | 卯       | 丁卯              | 己卯  | 辛卯  | 癸卯  | 乙卯  |
| 7－9     | 辰       | 戊辰              | 庚辰  | 壬辰  | 甲辰  | 丙辰  |
| 9－11    | 巳       | 己巳              | 辛巳  | 癸巳  | 己巳  | 丁巳  |
| 11－13   | 午       | 庚午              | 壬午  | 甲午  | 丙午  | 戊午  |
| 13－15   | 未       | 辛未              | 癸未  | 乙未  | 丁未  | 己未  |
| 15－17   | 申       | 壬申              | 甲申  | 丙申  | 戊申  | 庚申  |
| 17－19   | 酉       | 癸酉              | 乙酉  | 丁酉  | 己酉  | 辛酉  |
| 19－21   | 戊       | 甲戌              | 丙戌  | 戊戌  | 庚戌  | 壬戌  |
| 21－23   | 亥       | 乙亥              | 丁亥  | 己亥  | 辛亥  | 癸亥  |

 

首先根据出生钟点找到相应的行数，再根据第5个字（日干），在右边5列中定位到相应的列，即可得到时辰的天干、地支，即第7、8两个字。譬如，1968年8月8日8点钟，在“7-9”这一行，“丁壬”这一列，得到时辰的干支为“甲辰”，所以，最终的八字为：
First, find the corresponding row number based on the hour of birth, and then locate the corresponding column in the 5 columns on the right based on the 5th character (day stem), and you can get the celestial stem and earthly branch of the hour, that is, the 7th and 8th characters. For example, at 8 o'clock on August 8, 1968, in the row "7-9" and the column "Ding Ren", the stem and branch of the hour are "Jia Chen", so the final horoscope is
**戊申辛酉壬寅甲辰****Wu Shen Xin You Ren Yin Jia Chen**

 

**2.       计算八字的五行属性。**Calculate the five elements attributes of the horoscope.

首先，每个天干和地支都有对应的五行属性，如下面两表所示：
First of all, each heavenly stem and earthly branch has a corresponding five-element attribute, as shown in the following two tables.
 

天干属性：Heavenly stem attributes

| 天干 | 属性 | 天干 | 属性 | 天干 | 属性 |
| ---- | ---- | ---- | ---- | ---- | ---- |
| 甲   | 木   | 戊   | 土   | 壬   | 水   |
| 乙   | 木   | 己   | 土   | 癸   | 水   |
| 丙   | 火   | 庚   | 金   |      |      |
| 丁   | 火   | 辛   | 金   |      |      |

 

地支属性：Earthly branch attributes

| 地支 | 属性 | 地支 | 属性 | 地支 | 属性 |
| ---- | ---- | ---- | ---- | ---- | ---- |
| 子   | 水   | 辰   | 土   | 申   | 金   |
| 丑   | 土   | 巳   | 火   | 酉   | 金   |
| 寅   | 木   | 午   | 火   | 戌   | 土   |
| 卯   | 木   | 未   | 土   | 亥   | 水   |

 

接下来，计算五行“金木水火土”的强度值。对于五行中的每一行，其强度值包括两部分：Next, calculate the intensity value of the five elements "metal, wood, water, fire, and earth". For each of the five rows, its intensity value consists of two parts:

l  天干强度：即八字中的4个天干，若其五行属性恰好是这一行，那么就有相应的贡献值，可查表如下：Heavenly Stem Strength: That is, the 4 Heavenly Stems in the Bazi. If the five-element attribute happens to be in this row, then there will be a corresponding contribution value. You can check the table as follows:

 
  mth  day    A     B      C      D      E      F     G      H      I      J
| 生月\天干 | 甲   | 乙   | 丙   | 丁   | 戊   | 己   | 庚   | 辛   | 壬   | 癸   |
| --------- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 子月      | 1.2  | 1.2  | 1.0  | 1.0  | 1.0  | 1.0  | 1.0  | 1.0  | 1.2  | 1.2  |
| 丑月      | 1.06 | 1.06 | 1.0  | 1.0  | 1.1  | 1.1  | 1.14 | 1.14 | 1.1  | 1.1  |
| 寅月      | 1.14 | 1.14 | 1.2  | 1.2  | 1.06 | 1.06 | 1.0  | 1.0  | 1.0  | 1.0  |
| 卯月      | 1.2  | 1.2  | 1.2  | 1.2  | 1.0  | 1.0  | 1.0  | 1.0  | 1.0  | 1.0  |
| 辰月      | 1.1  | 1.1  | 1.06 | 1.06 | 1.1  | 1.1  | 1.1  | 1.1  | 1.04 | 1.04 |
| 巳月      | 1.0  | 1.0  | 1.14 | 1.14 | 1.14 | 1.14 | 1.06 | 1.06 | 1.06 | 1.06 |
| 午月      | 1.0  | 1.0  | 1.2  | 1.2  | 1.2  | 1.2  | 1.0  | 1.0  | 1.0  | 1.0  |
| 未月      | 1.04 | 1.04 | 1.1  | 1.1  | 1.16 | 1.16 | 1.1  | 1.1  | 1.0  | 1.0  |
| 申月      | 1.06 | 1.06 | 1.0  | 1.0  | 1.0  | 1.0  | 1.14 | 1.14 | 1.2  | 1.2  |
| 酉月      | 1.0  | 1.0  | 1.0  | 1.0  | 1.0  | 1.0  | 1.2  | 1.2  | 1.2  | 1.2  |
| 戌月      | 1.0  | 1.0  | 1.04 | 1.04 | 1.14 | 1.14 | 1.16 | 1.16 | 1.06 | 1.06 |
| 亥月      | 1.2  | 1.2  | 1.0  | 1.0  | 1.0  | 1.0  | 1.0  | 1.0  | 1.14 | 1.14 |

 

l  地支强度：即八字中的4个地支，它们可能会藏了这一五行对应的天干，比如，“丑”藏了“癸、辛、己”，而癸、辛、己的五行属性分别是水、金、土。所以，地支“丑”对水、金、土都有强度贡献，而强度值的大小则取决于相应的月份。下面的表格涵盖了地支所藏的五行强度值。Earthly branch strength: The four earthly branches in the horoscope may hide the heavenly stem corresponding to the five elements. For example, "Chou" hides "Gui, Xin, and Ji", and the attributes of the five elements of Gui, Xin, and Ji are water respectively. , metal, earth. Therefore, the earthly branch "Chou" contributes strength to water, metal, and earth, and the strength value depends on the corresponding month. The table below covers the strength values ​​of the Five Elements contained in the Earthly Branches.

 

 
  earth  hide   mth  6th char
| 地支 | 支藏 | 月支（即第6个字） |       |       |       |       |       |       |       |       |       |       |       |
| ---- | ---- | ----------------- | ----- | ----- | ----- | ----- | ----- | ----- | ----- | ----- | ----- | ----- | ----- |
| 子   | 丑   | 寅                | 卯    | 辰    | 巳    | 午    | 未    | 申    | 酉    | 戌    | 亥    |       |       |
| 子   | 癸   | 1.2               | 1.1   | 1.0   | 1.0   | 1.04  | 1.06  | 1.0   | 1.0   | 1.2   | 1.2   | 1.06  | 1.14  |
| 丑   | 癸   | 0.36              | 0.33  | 0.3   | 0.3   | 0.312 | 0.318 | 0.3   | 0.3   | 0.36  | 0.36  | 0.318 | 0.342 |
| 辛   | 0.2  | 0.228             | 0.2   | 0.2   | 0.23  | 0.212 | 0.2   | 0.22  | 0.228 | 0.248 | 0.232 | 0.2   |       |
| 己   | 0.5  | 0.55              | 0.53  | 0.5   | 0.55  | 0.57  | 0.6   | 0.58  | 0.5   | 0.5   | 0.57  | 0.5   |       |
| 寅   | 丙   | 0.3               | 0.3   | 0.36  | 0.36  | 0.318 | 0.342 | 0.36  | 0.33  | 0.3   | 0.3   | 0.342 | 0.318 |
| 甲   | 0.84 | 0.742             | 0.798 | 0.84  | 0.77  | 0.7   | 0.7   | 0.728 | 0.742 | 0.7   | 0.7   | 0.84  |       |
| 卯   | 乙   | 1.2               | 1.06  | 1.14  | 1.2   | 1.1   | 1.0   | 1.0   | 1.04  | 1.06  | 1.0   | 1.0   | 1.2   |
| 辰   | 乙   | 0.36              | 0.318 | 0.342 | 0.36  | 0.33  | 0.3   | 0.3   | 0.312 | 0.318 | 0.3   | 0.3   | 0.36  |
| 癸   | 0.24 | 0.22              | 0.2   | 0.2   | 0.208 | 0.2   | 0.2   | 0.2   | 0.24  | 0.24  | 0.212 | 0.228 |       |
| 戊   | 0.5  | 0.55              | 0.53  | 0.5   | 0.55  | 0.6   | 0.6   | 0.58  | 0.5   | 0.5   | 0.57  | 0.5   |       |
| 巳   | 庚   | 0.3               | 0.342 | 0.3   | 0.3   | 0.33  | 0.3   | 0.3   | 0.33  | 0.342 | 0.36  | 0.348 | 0.3   |
| 丙   | 0.7  | 0.7               | 0.84  | 0.84  | 0.742 | 0.84  | 0.84  | 0.798 | 0.7   | 0.7   | 0.728 | 0.742 |       |
| 午   | 丁   | 1.0               | 1.0   | 1.2   | 1.2   | 1.06  | 1.14  | 1.2   | 1.1   | 1.0   | 1.0   | 1.04  | 1.06  |
| 未   | 丁   | 0.3               | 0.3   | 0.36  | 0.36  | 0.318 | 0.342 | 0.36  | 0.33  | 0.3   | 0.3   | 0.312 | 0.318 |
| 乙   | 0.24 | 0.212             | 0.228 | 0.24  | 0.22  | 0.2   | 0.2   | 0.208 | 0.212 | 0.2   | 0.2   | 0.24  |       |
| 己   | 0.5  | 0.55              | 0.53  | 0.5   | 0.55  | 0.57  | 0.6   | 0.58  | 0.5   | 0.5   | 0.57  | 0.5   |       |
| 申   | 壬   | 0.36              | 0.33  | 0.3   | 0.3   | 0.312 | 0.318 | 0.3   | 0.3   | 0.36  | 0.36  | 0.318 | 0.342 |
| 庚   | 0.7  | 0.798             | 0.7   | 0.7   | 0.77  | 0.742 | 0.7   | 0.77  | 0.798 | 0.84  | 0.812 | 0.7   |       |
| 酉   | 辛   | 1.0               | 1.14  | 1.0   | 1.0   | 1.1   | 1.06  | 1.0   | 1.1   | 1.14  | 1.2   | 1.16  | 1.0   |
| 戌   | 辛   | 0.3               | 0.342 | 0.3   | 0.3   | 0.33  | 0.318 | 0.3   | 0.33  | 0.342 | 0.36  | 0.348 | 0.3   |
| 丁   | 0.2  | 0.2               | 0.24  | 0.24  | 0.212 | 0.228 | 0.24  | 0.22  | 0.2   | 0.2   | 0.208 | 0.212 |       |
| 戊   | 0.5  | 0.55              | 0.53  | 0.5   | 0.55  | 0.57  | 0.6   | 0.58  | 0.5   | 0.5   | 0.57  | 0.5   |       |
| 亥   | 甲   | 0.36              | 0.318 | 0.342 | 0.36  | 0.33  | 0.3   | 0.3   | 0.312 | 0.318 | 0.3   | 0.3   | 0.36  |
| 壬   | 0.84 | 0.77              | 0.7   | 0.7   | 0.728 | 0.742 | 0.7   | 0.7   | 0.84  | 0.84  | 0.724 | 0.798 |       |

 

回到前面的例子，八字“戊申辛酉壬寅甲辰”，查以上两表，可以得到五行强度为：Going back to the previous example, the eight characters "Wu Shen Xin You Ren Yin Jia Chen", check the above two tables, you can get the strength of the five elements as

金：0.84 (年支藏庚) + 1.2 (月干) + 1.2 (月支藏辛) = 3.24

木：0.7 (日支藏甲) + 1.0 (时干) + 0.3 (时支藏乙) = 2.0

水：0.36 (年支藏壬) + 1.2 (日干) + 0.24 (时支藏癸) = 1.8

火：0.3 (日支藏丙) = 0.3

土：1.0 (年干) + 0.5 (时支藏戊) = 1.5

 

**3.       给出起名指示。**Give naming instructions

首先确定八字的命里属性。只需查日干的五行属性，即代表了该八字的五行属性。譬如“戊申辛酉壬寅甲辰”的日干“壬”的属性为水，故该八字对应的命里属性为水。First determine the fortune attributes of the horoscope. Just look up the five-element attributes of Rigan, which represents the five-element attributes of the horoscope. For example, the attribute of the day stem "Ren" in "Wu Shen Xin You Ren Yin Jia Chen" is water, so the fortune attribute corresponding to this horoscope is water.

再计算同类和异类的强度值。所谓同类是指，该八字的五行属性，以及生该五行属性的那个属性，譬如八字的五行属性为水，则水和金合起来称为同类，其他三个：木、火和土合起来称为异类。Then calculate the intensity values ​​of the same type and different types. The so-called "similar" refers to the five-element attribute of the horoscope and the attribute that generates the five-element attribute. For example, if the five-element attribute of the horoscope is water, then water and metal together are called the same type, and the other three: wood, fire and earth are collectively called "the same type". Alien.

五行的相生关系为：金生水，水生木，木生火，火生土，土生金。
The relationship between the five elements is: metal generates water, water generates wood, wood generates fire, fire generates earth, and earth generates metal.

得到了同类和异类的强度值以后，一个基本的判断是，若两者的数值比较接近，则说明该八字比较平衡，也暗示人生平顺；若两者数值相差较大（比如，大于1，甚至大于2），则说明五行不平衡，可以通过名字来弥补，或者将来找对象时候通过婚姻来补平。After getting the strength values ​​of the same type and the different type, a basic judgment is that if the two values ​​​​are relatively close, it means that the horoscope is relatively balanced, which also implies a smooth life; if the difference between the two values ​​is large (for example, greater than 1, or even Greater than 2), it means that the five elements are unbalanced, which can be compensated through the name, or through marriage when looking for a partner in the future.

因此，得到同类和异类数值以后，如何确定“用神”或“喜神”，或者，如何在名字中补平，需要一点点人脑智能，目前尚未量化到算法或程序中。回到前面的例子：Therefore, after obtaining similar and heterogeneous values, how to determine the "Yongshen" or "Happiness God", or how to fill in the name, requires a little bit of human brain intelligence, which has not yet been quantified into algorithms or programs. Back to the previous example:

*日干为壬，属水，故命属水*The day stem is Ren, which belongs to water, so the zodiac sign belongs to water*

*“同类”数值：5.04*similar" value: 5.04

*“异类”数值：3.8*Heterogeneous" value: 3.8*

*“同类”比“异类”数值大，日主强，以火为用神。宜补火。*Same type" has larger numerical value than "different type", the sun is stronger, and fire is used as the god. It is advisable to replenish the fire. *

最后，定下怎么补五行属性以后，剩下就是挑字了，这可以自由发挥了。康熙字典上每个字都有五行属性，可以在Internet上查到。
Finally, after deciding how to supplement the five elements attributes, the only thing left is to choose the words, which can be freely used. Each character in the Kangxi dictionary has five elements attributes, which can be found on the Internet.