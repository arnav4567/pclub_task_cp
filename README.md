## Name of the problem : Alice and tokens\
### Time limit : 1 second\
### Memory limit : 256 MB\
### input : standard input\
### output : standard output


Alice is on a visit to a strange place named Orzyn. During her visit, she has collected n numbers a<sub>1</sub>, a<sub>2</sub> .. a<sub>n</sub>. Now, she wants to use these numbers to buy a rare artifact.

This artifact can only be bought via special tokens. Orzyn has a strange way to trade numbers for tokens : For each number m that Alice gives in to trade, the employee counts the number of i such that 1<=i<=m and m%i = 0. Let this number obtained be x. After this, the employee hands over x tokens to Alice.

The artifact costs b tokens. Since Alice has spent considerable effort to collect the n numbers, she wishes to spend only the least number of numbers required to buy the artifact. Your task is to help her identify the numbers that she should trade for the tokens.

Input:
The input consists of t(1≤t≤10<sup>5</sup>) test cases. Each test case admits an integer 1≤n≤10<sup>5</sup>, which is the count of numbers present with Alice.\
The next line consists of n+1 integers - firstly the integers a1,a2 ... an (1≤a<sub>i</sub>≤10<sup>7</sup> where 1≤i≤n), and then the integer b(1≤b≤10<sup>10</sup>) (cost of the artifact)

Output:
For each test case, output an integer k in the first line - the number of numbers Alice should trade. If it is not possible for Alice to
buy the artifact, output -1.\
The next line should consist of k integers that Alice should trade in.\ 
If there are multiple answers, output any of them.\

Example:

Input :
```
2
3
4 5 6 8
4
4 8 24 48 20
```

Output :
```
-1
3
4 24 48
```
Explanation:

In the first case, it can be shown that Alice can't buy the artifact.\
In the second case if Alice trades the numbers 4, 24, 48, she can buy the artifact. It can be shown that it is not possible to do so with less than 3 numbers.