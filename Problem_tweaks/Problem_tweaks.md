This problem can be subtly modified to create some harder versions. Some things that can be tweaked are -

1. Instead of having >=b tokens just before buying the artifact, we can impose the condition that at this stage, there must be exactly b tokens with Alice. The output would be modified as :\
Output "yes" (without quotes) if it is possible for Alice to buy the Artifact, and "no" otherwise.\
(we can do it in a similar fashion as before i.e. printing the numbers , but for simplicity we'll just see whether it is possible or not :P).\

 Then, we would have to look at the array containing the number of factors of the numbers with Alice and check whether there exists a subsequence of this array with has sum **exactly** equal to b. If yes, then we simply output "yes", else "no". It should be noted that we would have to lighten the constraints on values(or atleast the solution I thought of required so :P).\
[This](https://github.com/arnav4567/pclub_task_cp/blob/master/solcode.cpp) solution works for 1≤b≤10<sup>8</sup>./


2. In the original problem, I mentioned that there can be multiple correct outputs possible.(For example - sample testcase #2) i.e.
```
1
5
4 8 24 48 20
```
Both (48,24,8) and (48,24,4) are correct.
So, another modification that can be made is that we count the number of such possible answers and output them. Then, if we consider the sample testcases :
```
3
3
4 5 6 13
4
4 8 24 48 20
6
5 2 3 7 11 24 10
```
The output should be :
```
0
2
5
```
(In the last testcase we can take 24 with any of the other numbers and get a correct answer, which gives 5 possible optimal answers).
