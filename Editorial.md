## Editorial

The first thing to notice is that for each number Alice trades, she will get tokens equal to the number of factors of it. Next, we notice that we want to minimise the number of numbers that we use. Hence, it makes sense to implement a greedy approach which will trade the numbers in the decreasing order of their number of factors. Now, we keep track of the numbers with the most factors, and of course the tokens that we would get from trading them. When the tokens exceeds the cost of the artifact, we break from the loop.\
\
A naive way would be to take the array of each test case, then find out the number of factors of each number(in O(√a<sub>i</sub>)) and finally sort them in the decreasing order of the number of factors. However it is easy to see that this won't pass the time limit.\
\
Hence, we make use of precomputation. We make an array which stores the number of factors of each number. After this, there are multiple ways of implementation, and one of them is given [here](https://github.com/arnav4567/pclub_task_cp/blob/master/solcode.cpp).\
\
Time complexity of the given solution is O(A×log(A)+n×log(n)).
