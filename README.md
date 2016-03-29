# 360-Online-Judge
2 oj of 360 Intern Online Test in Mar.29th.
1. Replacement

time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output

Daniel has a string s, consisting of lowercase English letters and period signs (characters '.'). Let's define the operation of replacement as the following sequence of steps: find a substring ".." (two consecutive periods) in string s, of all occurrences of the substring let's choose the first one, and replace this substring with string ".". In other words, during the replacement operation, the first two consecutive periods are replaced by one. If string s contains no two consecutive periods, then nothing happens.

Let's define f(s) as the minimum number of operations of replacement to perform, so that the string does not have any two consecutive periods left.

You need to process m queries, the i-th results in that the character at position xi (1 ≤ xi ≤ n) of string s is assigned value ci. After each operation you have to calculate and output the value of f(s).

Help Daniel to process all queries.



Input
The first line contains two integers n and m (1 ≤ n, m ≤ 300 000) the length of the string and the number of queries.

The second line contains string s, consisting of n lowercase English letters and period signs.

The following m lines contain the descriptions of queries. The i-th line contains integer xi and ci (1 ≤ xi ≤ n, ci — a lowercas English letter or a period sign), describing the query of assigning symbol ci to position xi.

Output
Print m numbers, one per line, the i-th of these numbers must be equal to the value of f(s) after performing the i-th assignment.

Examples input
10 3
.b..bz....
1 h
3 c
9 f
Examples output
4
3
1

2. 数值游戏

Time Limit: 2000/1000
MS (Java/Others)
Memory Limit: 65536/65536 K (Java/Others)
Problem Description:

为考验各自的数学能力，小B和小A经常在一起玩各种数值游戏，这一次他们又有了一种新玩法。每人从指定的数值范围中各自选择一个整数，记小A选择的数值为n，小B选择的数值为b。他们用一个均匀分布的随机数发生器在该数值范围中随机生成一个整数c，定义制胜的游戏规则为谁选的数离c近则谁取得胜利。由于小B是女生，特别定义当两人的数与c之间的差值相等时，小B获胜。

由于先前的游戏中，小A为表现绅士风度总是输多赢少，因此他特别渴望这次能够给小B比较深刻的映像，所以向你求助。你事先已经知道了小B所选的数值和指定的数值范围，小A希望你帮他选择一个数值使得他获胜的概率最大。

Input
输入有若干行，每行为一组数据，包含两个正整数n和b，分别表示数值范围和小B所需的数，其中1<=b<=n<=10^9

Output
对每组输入，在单独的行中输出一个数，为小A所选的数，使得小A获胜的概率最大。若存在多个这样的数，则输出最小的那个

Examples input
3 1
4 3
Examples output
2
2

