/*
10.1o Rank from Stream: Imagine you are reading in a stream ofintegers.Periodically, youwish to be able
to look up the rank of a number x (the number of values less than or equal tox).lmplement the data
structures and algorithms to support these operations.That is, implementthe methodtrack(int
x), which is called when each number is generated, and the method getRankOfNumber(int
x), which returns the number of values less than or equal tox (not includingx itself).
EXAMPLE
Stream (in order of appearance): 5, 1, 4, 4, 5, 9, 7, 13, 3
getRankOfNumber(l) 0
getRankOfNumber(3) = 1
getRankOfNumber(4) 3
*/