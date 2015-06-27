// 1
This question is pretty straightforward.

Because all trailing 0 is from factors 5 * 2.

But sometimes one number may have several 5 factors, for example, 25 have two 5 factors, 125 have three 5 factors. In the n! operation, factors 2 is always ample. So we just count how many 5 factors in all number from 1 to n.

One line code:

Java:

    return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
C++:

    return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
Python:

    return 0 if n == 0 else n / 5 + self.trailingZeroes(n / 5)
