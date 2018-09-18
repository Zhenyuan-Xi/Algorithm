/*
Farmer John is constructing a new milking machine and wishes to keep it secret as long as possible. 
He has hidden in it deep within his farm and needs to be able to get to the machine without being detected. 
He must make a total of T (1 <= T <= 200) trips to the machine during its construction. 
He has a secret tunnel that he uses only for the return trips. 
The farm comprises N (2 <= N <= 200) landmarks (numbered 1..N) connected by P (1 <= P <= 40,000) bidirectional trails (numbered 1..P) 
and with a positive length that does not exceed 1,000,000. Multiple trails might join a pair of landmarks. 
To minimize his chances of detection, FJ knows he cannot use any trail on the farm more than once and that he should try to use the shortest trails. 
Help FJ get from the barn (landmark 1) to the secret milking machine (landmark N) a total of T times. 
Find the minimum possible length of the longest single trail that he will have to use, subject to the constraint that he use no trail more than once. 
(Note well: The goal is to minimize the length of the longest trail, not the sum of the trail lengths.) 
It is guaranteed that FJ can make all T trips without reusing a trail.

Input
* Line 1: Three space-separated integers: N, P, and T 
* Lines 2..P+1: Line i+1 contains three space-separated integers, A_i, B_i, and L_i, 
indicating that a trail connects landmark A_i to landmark B_i with length L_i.
Output
* Line 1: A single integer that is the minimum possible length of the longest segment of Farmer John's route.

Input
7 9 2
1 2 2
2 3 5
3 7 5
1 4 1
4 3 1
4 5 7
5 7 1
1 6 3
6 7 3
Output
5
*/
