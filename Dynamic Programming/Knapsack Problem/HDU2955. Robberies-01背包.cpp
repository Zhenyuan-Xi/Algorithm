/*
The aspiring Roy the Robber has seen a lot of American movies, and knows that the bad guys usually gets caught in the end, 
often because they become too greedy. He has decided to work in the lucrative business of bank robbery only for a short while, 
before retiring to a comfortable job at a university.
For a few months now, Roy has been assessing the security of various banks and the amount of cash they hold. 
He wants to make a calculated risk, and grab as much money as possible.
His mother, Ola, has decided upon a tolerable probability of getting caught. 
She feels that he is safe enough if the banks he robs together give a probability less than this.

Input
The first line of input gives T, the number of cases. 
For each scenario, the first line of input gives a floating point number P, the probability Roy needs to be below, 
and an integer N, the number of banks he has plans for. Then follow N lines, where line j gives an integer Mj and a floating point number Pj . 
Bank j contains Mj millions, and the probability of getting caught from robbing it is Pj .
Output
For each test case, output a line with the maximum number of millions he can expect to get while the probability of getting caught is less than the limit set.

Notes and Constraints
0 < T <= 100
0.0 <= P <= 1.0
0 < N <= 100
0 < Mj <= 100
0.0 <= Pj <= 1.0
A bank goes bankrupt if it is robbed, and you may assume that all probabilities are independent as the police have very low funds.

Sample Input
3
0.04 3
1 0.02
2 0.03
3 0.05
0.06 3
2 0.03
2 0.03
3 0.05
0.10 3
1 0.03
2 0.02
3 0.05

Sample Output
2
4
6
*/
