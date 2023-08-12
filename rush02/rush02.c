// #include <stdio.h>
#include <unistd.h>

// rush関数、引数はint x, int y
void rush(int x, int y) {
	// printf("x=%d, y=%d \n", x, y);
	// xかyが0だった場合は何もしないでreturn
    if (x <= 0 || y <= 0) {
        return;
    }

    int i = 1;
    while (i <= y) {
        int j = 1;
        while (j <= x) {
			// printf("i=%d, j=%d, \n", i, j);
			// 4つ端を表すif文。これを元にほかの問題も考えていく
            // if ((i == 1 && j == 1) || (i == 1 && j == x) || (i == y && j == 1) || (i == y && j == x))
			 if ((i == 1 && j == 1) || (i == 1 && j == x)){
                // write(1, "A", 1);
                ft_putchar('A');
            } else if ((i == y && j == x) || (i == y && j == 1)) {
                // write(1, "C", 1);
                ft_putchar('C');
            } else if ((i == 1 || i == y) || (j == 1 || j == x)) {
                // write(1, "B", 1);
                ft_putchar('B');
            } else {
                // write(1, " ", 1);
                ft_putchar(' ');
            }
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}