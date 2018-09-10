/*
1967年，美国著名的社会学家斯坦利·米尔格兰姆提出了一个名为“小世界现象(small world phenomenon)”的著名假说，
大意是说，任何2个素不相识的人中间最多只隔着6个人，即只用6个人就可以将他们联系在一起，因此他的理论也被称为“六度分离”理论(six degrees of separation)。
虽然米尔格兰姆的理论屡屡应验，一直也有很多社会学家对其兴趣浓厚，但是在30多年的时间里，它从来就没有得到过严谨的证明，只是一种带有传奇色彩的假说而已。 
Lele对这个理论相当有兴趣，于是，他在HDU里对N个人展开了调查。他已经得到了他们之间的相识关系，现在就请你帮他验证一下“六度分离”是否成立吧。

Input
本题目包含多组测试，请处理到文件结束。
对于每组测试，第一行包含两个整数N,M(0<N<100,0<M<200),分别代表HDU里的人数（这些人分别编成0~N-1号)，以及他们之间的关系。
接下来有M行，每行两个整数A,B(0<=A,B<N)表示HDU里编号为A和编号B的人互相认识。
除了这M组关系，其他任意两人之间均不相识。
Output
对于每组测试，如果数据符合“六度分离”理论就在一行里输出"Yes"，否则输出"No"。
 
Input
8 7
0 1
1 2
2 3
3 4
4 5
5 6
6 7
8 8
0 1
1 2
2 3
3 4
4 5
5 6
6 7
7 0
Output
Yes
Yes
*/
