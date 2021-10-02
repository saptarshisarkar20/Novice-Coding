
# Magic Permutations 
### Problem Code: MAGPER

## Problem link : https://www.codechef.com/problems/MAGPER

## Statement
Saeed bought two magic permutations of integers 1
through N

and gave them to his grandsons Rami and Ghoda to encourage them to train in problem solving.

Rami found out that he can only cyclically shift his permutation, i.e. choose any number of elements from the beginning and move them to the end without changing their order. On the other hand, Ghoda found out that he can only swap elements of his permutation.

The distance between two permutations P1,P2,…,PN
and R1,R2,…,RN is the sum of |i−j| over all pairs of valid indices i,j such that Pi=Rj

You should process Q

queries. In each query, one of Saeed's grandsons plays with his permutation (performs an operation described above), and afterwards, you should tell Saeed the distance between his grandsons' current permutations. Note that the queries are cumulative — the changes made in one query remain in subsequent queries.

## Input

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and Q.
The second line contains N space-separated integers A1,A2,…,AN denoting Rami's initial permutation.
The third line contains N space-separated integers B1,B2,…,BN denoting Ghoda's initial permutation.
Each of the next Q lines describes a query in one of the following formats:
1 z: Rami moves z
elements from the beginning of his permutation to the end.
2 x y: Ghoda swaps the x -th and y -th element of his permutation.

## Output

For each query, print a single line containing one integer — the current distance between the permutations.

## Constraints
1≤T≤100

2≤N,Q≤105

1≤x,y≤N

x≠y

1≤z≤N−1

1≤Ai,Bi≤N


for each valid i A and B are permutations the sum of N over all test cases does not exceed 105 the sum of Q over all test cases does not exceed 105

## Sample Input 1

```
1
4 3
1 3 2 4
4 3 2 1
1 1
2 3 1
1 2
```

## Sample Output 1
```
4
2
8
```

## Explanation

**Example case 1:**

Rami's permutation is (1,3,2,4)→(3,2,4,1)→(3,2,4,1)→(4,1,3,2)


Ghoda's permutation is (4,3,2,1)→(4,3,2,1)→(2,3,4,1)→(2,3,4,1)


