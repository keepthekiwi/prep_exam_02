
// kleine Matheaufgabe
// arg1 +-*/ arg2



#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int a;
	int b;
	int result;
	char op;					// char

	result = 0;
	if (ac == 4)				// !
	{
		a = atoi(av[1]);		// atoi
		op = av[2][0];			// warum [0]?
		b = atoi(av[3]);
		if (op == '+')			// ' '
			result = a + b;
		else if (op == '-')
			result = a - b;
		else if (op == '*')
			result = a * b;
		else if (op == '/')
			result = a / b;
		else if (op == '%')		// modolo auch
			result = a % b;
		printf("%d\n", result);	//printf
	}
	else
		write(1, "\n", 1);
	return (0);
}
