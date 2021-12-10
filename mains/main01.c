#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"


int		main (void)
{
	//int		d = 123456789;
	//int		d = -12345678;
	//int	 	d = -196;
	//int 		d = 196;
	//int		return_value;
	//int		d = -23242;
	//int		d = 23242;
	//int		d = 2147483647;
	//int		d = -2147483648;
	//int		d = 0;
	//int		d = 0;
	//char 	c = '\0';
	//void 	*p = &c;
	char	*str = "C";
	//char 	*str = "Hello";
	
	//printf("%.*d\n", -5, 0);
	//ft_printf("%.*d\n", -5, 0);
	//printf("test de LEAKS :\n");
	//system("leaks a.out");
	//printf("%.*X%0.*d\n", 6, 1115768101, -4, 0);
	//ft_printf("%.*X%0.*d", 6, 1115768101, -4, 0);

//ft_printf("test 97 %*.*d\n", -1, 0, 0);


//printf("test 76 %*.*d\n", -2, 0, 0);
/*
ft_printf("fake test stella 76 %*.*d\n", -5, -2, 0);
ft_printf("fake test digits 76 %-5.2d\n", 0);
printf("real test stella 76 %*.*d\n", -5, -2, 0);
printf("real test digits 76 %-5.2d\n", 0);
*/
//ft_printf("fake test 181 %*.*d\n", 3, 0, 0);
//ft_printf("fake test 160 %*.*d\n", 2, 0, 0);
//printf("test 181 %*.*d\n", 3, 0, 0);
//printf("test 160 %*.*d\n", 2, 0, 0);
//ft_printf("test  %1.d\n", 0);
//printf("test 160 %1.d\n", 0);
printf("%001d\n", -12);
ft_printf("real%001d\n", -12);


/*
ft_printf("fake test 181 %3.0d\n", 0);
ft_printf("fake test 160 %2.0d\n", 0);

printf("test 181 %3.0d\n", 0);
printf("test 160 %2.0d\n", 0);
//system("leaks a.out"); 

printf("test 22 : %00d\n", -12); //-12345678, -2147483648);
printf("test 53 %.*d\n", 0, 0);
printf("test 77 %-*.*d\n", -2, 0, 0);
printf("test 97 %*.*d\n", -1, 0, 0);
printf("test 98 %-*.*d\n", -1, 0, 0);
printf("test 99 %0*.*d\n", -1, 0, 0);
printf("test 118 %-*.*d\n", 0, 0, 0);
printf("test 119 %-*.*d\n", 0, 0, 0);
printf("test 120 %0*.*d\n", 0, 0, 0); //return diff de 1 60 et 59
printf("test 139 %*.*d\n", 1, 0, 0);
printf("test 140 %-*.*d\n", 1, 0, 0);
printf("test 156 %0*.*d\n", 2, -2, 0);
printf("test 159 %0*.*d\n", 2, -1, 0);
printf("test 161 %-*.*d\n", 2, 0, 0);
printf("test 175 %*.*d\n", 3, -2, 0);
printf("test 176 %-*.*d\n", 3, -2, 0);
printf("test 177 %0*.*d\n", 3, -2, 0);
printf("test 180 %0*.*d\n", 3, -1, 0);
printf("test 182 %-*.*d\n", 3, 0, 0);
printf("test 183 %0*.*d\n", 3, 0, 0);
printf("test 196 %*.*d\n", 4, -2, -12); //-12345678
printf("test 197 %-*.*d\n", 4, 2, -12); // un espace de diff de retour de 1
printf("test 198 %0*.*d\n", 4, -2, -12);
printf("test 198 bis %0*.*d\n", 4, -2, 0);
printf("test 199 %*.*d\n", 4, -2, -12);
printf("test 201 %0*.*d\n", 4, -1, 0);
printf("test 201 bis %0*.*d\n", 4, -1, -12);
printf("test 471 %*.*u\n", 4, 0, 0);
printf("test 472 %0*.*u\n", 4, 0, 0);
printf("test 473 %-*.*u\n", 4, 0, 0);


	printf("real %-*.*s\n", -7, -3, "yolo");
	ft_printf("fake %-*.*s\n", -7, -3, "yolo");

	printf("real %09d\n", -50);
	ft_printf("fake %09d\n", -50);

	printf("real %07i\n", -54);
	ft_printf("fake %07i\n", -54);

	printf("real %.*i\n", -6, -3);
	ft_printf("fake %.*i\n", -6, -3);

	printf("real %.*d\n", 6, -3);
	ft_printf("fake %.*d\n", 6, -3);

	printf("real %.6i\n", -3);
	ft_printf("fake %.6i\n", -3);

	printf("real %7.10x\n", -3);
	ft_printf("fake %7.10x\n", -3);


	
	return_value = ft_printf("affiche moi p: %p\n", &p);
	printf("\nreturn value : %d\n", return_value);
	return_value = printf("affiche moi p: %p\n", &p);
	printf("\nreturn value : %d\n", return_value);

	ft_printf("%.5s--%7s\n", "yo", "boi");
	printf("printf : %.5s--%7s\n\n\n\n\n\n\n", "yo", "boi");
	

	ft_printf("10.7s :\n%10.7s\n", "hello boy");
	printf("REAL printf : \n%10.7s\n\n", "hello boy");

	ft_printf("10s :\n%10s\n", "hello boy");
	printf("REAL printf : \n%10s\n\n", "hello boy");

	ft_printf(".7s :\n%.7s\n", "hello boy");
	printf("REAL printf : \n%.7s\n\n", "hello boy");

	ft_printf("%-3.s", NULL);
	printf("REAL printf : \n%-3.s", NULL);
	

	Test 127 (s_undefbehav_0_zero_lj_zero) : FAILED.
    First line of code: {return test("%0-0s", s_hidden);}
      expected return value : 6
      your return value     : 0
      expected output : "hi low"
      your output     : ""
      expected (nonprintable as hex) : "hi low"
      actual   (nonprintable as hex) : ""


	ft_printf("%0*.*d", -5, -5);
	printf("REAL printf : \n%0*.*d", -5, -5);

	ft_printf("%08.7s", "hello");
	printf("REAL printf : \n%08.7s", "hello");
	*/

	//printf("printf : %7s\n", "boi");
	//"%7.5s", "bombastic"

	//printf("%5%");

	/*

	ft_printf("affiche moi i: %i\n", i);
	printf("affiche moi i: %i\n", i);

	ft_printf("affiche moi d: %d et la taille de len : %d\n", i);
	printf("affiche moi d: %d\n", i);

	return_value = ft_printf("affiche moi u: %u\n", i);
	printf("\nreturn value : %d\n", return_value);
	return_value = printf("affiche moi u: %u\n", i);
	printf("\nreturn value : %d\n", return_value);

	return_value = ft_printf("affiche moi u: %x\n", i);
	printf("\nreturn value : %d\n", return_value);
	return_value = printf("affiche moi u: %x\n", i);
	printf("\nreturn value : %d\n", return_value);

	return_value = ft_printf("affiche moi u: %X\n", i);
	printf("\nreturn value : %d\n", return_value);
	return_value = printf("affiche moi u: %X\n", i);
	printf("\nreturn value : %d\n", return_value);


	ft_printf("je ne suis pas sure de %.5d ou vous voulez en %.-7d mais j'essaie quand meme\n", 35161, 254);*/
/*
	ft_printf("pourcentage etoile %%s: %-*d, pourcentage s: oups\n",42, 42);
	ft_printf("pourcentage etoile s: %42d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %-d, pourcentage: %d oups\n", 42, 42);
	ft_printf("pourcentage etoile s: %d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %010d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %011d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %012d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %013d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %014d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %015d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %016d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %017d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %018d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %019d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %020d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %021d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %022d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %023d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %024d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %025d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %026d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %027d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %028d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %029d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %030d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %031d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %032d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %033d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %034d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %035d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %036d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %037d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %038d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %039d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %040d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %041d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %042d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %043d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %044d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %045d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %046d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %047d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %048d, pourcentage s: oups\n", 42);
	ft_printf("pourcentage etoile s: %049d, pourcentage s: oups\n", 42);
}

Test 130 (s_undefbehav_0_width_9) : FAILED.
    First line of code: {return test("%09s", s_hidden);}
      expected return value : 9
      your return value     : 9
      expected output : "000hi low"
      your output     : "   hi low"
      expected (nonprintable as hex) : "000hi low"
      actual   (nonprintable as hex) : "   hi low"

Test 433 (p_ftfc_literal_2w_prec9_undefbehav) : FAILED.
    First line of code: {return test("%2.9p
", 1234);}
      expected return value : 13
      your return value     : 13
      expected output : "0x0000004d2
"
      your output     : "0x00000x4d2
"
      expected (nonprintable as hex) : "0x0000004d2\x0a"
      actual   (nonprintable as hex) : "0x00000x4d2\x0a"
	
	ft_printf("affiche moi s: %09s\n", "hi low");
	printf("affiche moi s: %09s\n", "hi low");


	ft_printf("affiche moi c: \n%c\n", c);
	printf("real : affiche moi c: \n%c\n", c);

	ft_printf("affiche moi i: %i\n", d);
	printf("affiche moi i: %i\n", d);

	ft_printf("affiche moi d: %d\n", d);
	printf("affiche moi d: %d\n", d);

	ft_printf("affiche moi u: %u\n", d);
	printf("affiche moi u: %u\n", d);

	ft_printf("affiche moi x: %x\n", d);
	printf("affiche moi x: %x\n", d);

	ft_printf("affiche moi X: %X\n", d);
	printf("affiche moi X: %X\n", d);

	ft_printf("affiche moi p: %16p\n",  &d);
	printf("affiche moi p: %16p\n", &d);

	printf("real : %2.9p\n", &d);
	ft_printf("fake : %2.9p\n", &d);*/
	

	return (0);




// main de Guillaume

/*int		main(int ac, char **av)
{
	char	*str;
	char	c;
	int		ft_pf;
	int		pf;
	int		prec;
	int		width;

	c = 'c';
	str = "hello";

	pf = printf("%11x\n", av[1]);
	fflush(stdout);
	ft_pf = ft_printf("%11x\n", av[1]);	
	if (pf == ft_pf)
		printf("returned value is ok.\n");
	else
		return (printf("returned by printf = %d, returned by ft_printf = %d\n", pf, ft_pf));
	printf("returned by printf = %d, returned by ft_printf = %d\n", pf, ft_pf);
	return (0);
}*/

/*
int	main()
{
	int d = 42;
	printf("%.*d\n", 10, d );
	printf("%.*i\n", 10, d );
	printf("%.*u\n", 10, d );
	printf("%.*x\n", 10, d );
	printf("%.*X\n", 10, d );

	printf("%.*p\n", 10, &d );
	printf("%.*s\n", 10, "42" );
	printf("%.*c\n", 10, 'c' );

	printf("%*d\n", 10, d );
	printf("%*i\n", 10, d );
	printf("%*u\n", 10, d );
	printf("%*x\n", 10, d );
	printf("%*X\n", 10, d );

	printf("%0*p\n", 10, &d );
	printf("%0*s\n", 10, "42" );
	printf("%0*c\n", 10, 'c' );

	printf("%-0*d\n", 10, d );
	printf("%-0*i\n", 10, d );
	printf("%-0*u\n", 10, d );
	printf("%-0*x\n", 10, d );
	printf("%-0*X\n", 10, d );

	printf("%0*p\n", 10, &d );
	printf("%0*s\n", 10, "42" );
	printf("%0*c\n", 10, 'c' );
	
	----------Test 22 : ----------
"%00i, %00d, %00d, %00d, %00d, %00d, %00d, %00d" // 1st '*' = -4, 2nd '*' = 0

1c1
< 8, 12, 123456789, 0, 12345678, 97, 2147483648, 2147483647 --- Return : 57
---
> 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60

----------Test 53 : ----------
"%.*i, %.*d, %.*d, , %.*d, %.*d, %.*d, %.*d" // 1st '*' = 0, 2nd '*' = 0

1c1
< 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60
---
> 8, -12, 123456789, , -12345678, 97, -2147483648, 2147483647 --- Return : 59

----------Test 76 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = -2, 2nd '*' = 0

1c1
< 8 , -12, 123456789, 0 , -12345678, 97, -2147483648, 2147483647 --- Return : 62
---
> 8 , -12, 123456789,   , -12345678, 97, -2147483648, 2147483647 --- Return : 62

----------Test 77 : ----------
"%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d" // 1st '*' = -2, 2nd '*' = 0

1c1
< 8 , -12, 123456789, 0 , -12345678, 97, -2147483648, 2147483647 --- Return : 62
---
> 8 , -12, 123456789,   , -12345678, 97, -2147483648, 2147483647 --- Return : 62

----------Test 78 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = -2, 2nd '*' = 0

1c1
< 8 , -12, 123456789, 0 , -12345678, 97, -2147483648, 2147483647 --- Return : 62
---
> 8 , -12, 123456789,   , -12345678, 97, -2147483648, 2147483647 --- Return : 62

----------Test 97 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = -1, 2nd '*' = 0

1c1
< 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60
---
> 8, -12, 123456789,  , -12345678, 97, -2147483648, 2147483647 --- Return : 60

----------Test 98 : ----------
"%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d" // 1st '*' = -1, 2nd '*' = 0

1c1
< 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60
---
> 8, -12, 123456789,  , -12345678, 97, -2147483648, 2147483647 --- Return : 60

----------Test 99 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = -1, 2nd '*' = 0

1c1
< 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60
---
> 8, -12, 123456789,  , -12345678, 97, -2147483648, 2147483647 --- Return : 60

----------Test 118 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = 0, 2nd '*' = 0

1c1
< 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60
---
> 8, -12, 123456789, , -12345678, 97, -2147483648, 2147483647 --- Return : 59

----------Test 119 : ----------
"%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d" // 1st '*' = 0, 2nd '*' = 0

1c1
< 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60
---
> 8, -12, 123456789, , -12345678, 97, -2147483648, 2147483647 --- Return : 59

----------Test 120 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 0, 2nd '*' = 0

1c1
< 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60
---
> 8, -12, 123456789, , -12345678, 97, -2147483648, 2147483647 --- Return : 59

----------Test 139 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = 1, 2nd '*' = 0

1c1
< 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60
---
> 8, -12, 123456789,  , -12345678, 97, -2147483648, 2147483647 --- Return : 60

----------Test 140 : ----------
"%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d" // 1st '*' = 1, 2nd '*' = 0

1c1
< 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60
---
> 8, -12, 123456789,  , -12345678, 97, -2147483648, 2147483647 --- Return : 60

----------Test 141 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 1, 2nd '*' = 0

1c1
< 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647 --- Return : 60
---
> 8, -12, 123456789,  , -12345678, 97, -2147483648, 2147483647 --- Return : 60

----------Test 156 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 2, 2nd '*' = -2

1c1
<  8, -12, 123456789,  0, -12345678, 97, -2147483648, 2147483647 --- Return : 62
---
> 08, -12, 123456789, 00, -12345678, 97, -2147483648, 2147483647 --- Return : 62

----------Test 159 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 2, 2nd '*' = -1

1c1
<  8, -12, 123456789,  0, -12345678, 97, -2147483648, 2147483647 --- Return : 62
---
> 08, -12, 123456789, 00, -12345678, 97, -2147483648, 2147483647 --- Return : 62

----------Test 160 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = 2, 2nd '*' = 0

1c1
<  8, -12, 123456789,  0, -12345678, 97, -2147483648, 2147483647 --- Return : 62
---
>  8, -12, 123456789,   , -12345678, 97, -2147483648, 2147483647 --- Return : 62

----------Test 161 : ----------
"%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d" // 1st '*' = 2, 2nd '*' = 0

1c1
< 8 , -12, 123456789, 0 , -12345678, 97, -2147483648, 2147483647 --- Return : 62
---
> 8 , -12, 123456789,   , -12345678, 97, -2147483648, 2147483647 --- Return : 62

----------Test 162 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 2, 2nd '*' = 0

1c1
<  8, -12, 123456789,  0, -12345678, 97, -2147483648, 2147483647 --- Return : 62
---
>  8, -12, 123456789,   , -12345678, 97, -2147483648, 2147483647 --- Return : 62

----------Test 175 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = 3, 2nd '*' = -2

1c1
<   8,  12, 123456789,   0, -12345678,  97, -2147483648, 2147483647 --- Return : 65
---
>   8, -12, 123456789,   0, -12345678,  97, -2147483648, 2147483647 --- Return : 65

----------Test 176 : ----------
"%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d" // 1st '*' = 3, 2nd '*' = -2

1c1
< 8  , -12 , 123456789, 0  , -12345678, 97 , -2147483648, 2147483647 --- Return : 66
---
> 8  , -12, 123456789, 0  , -12345678, 97 , -2147483648, 2147483647 --- Return : 65

----------Test 177 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 3, 2nd '*' = -2

1c1
<   8,  12, 123456789,   0, -12345678,  97, -2147483648, 2147483647 --- Return : 65
---
> 008, -12, 123456789, 000, -12345678, 097, -2147483648, 2147483647 --- Return : 65

----------Test 180 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 3, 2nd '*' = -1

1c1
<   8, -12, 123456789,   0, -12345678,  97, -2147483648, 2147483647 --- Return : 65
---
> 008, -12, 123456789, 000, -12345678, 097, -2147483648, 2147483647 --- Return : 65

----------Test 181 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = 3, 2nd '*' = 0

1c1
<   8, -12, 123456789,   0, -12345678,  97, -2147483648, 2147483647 --- Return : 65
---
>   8, -12, 123456789,    , -12345678,  97, -2147483648, 2147483647 --- Return : 65

----------Test 182 : ----------
"%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d" // 1st '*' = 3, 2nd '*' = 0

1c1
< 8  , -12, 123456789, 0  , -12345678, 97 , -2147483648, 2147483647 --- Return : 65
---
> 8  , -12, 123456789,    , -12345678, 97 , -2147483648, 2147483647 --- Return : 65

----------Test 183 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 3, 2nd '*' = 0

1c1
<   8, -12, 123456789,   0, -12345678,  97, -2147483648, 2147483647 --- Return : 65
---
>   8, -12, 123456789,    , -12345678,  97, -2147483648, 2147483647 --- Return : 65

----------Test 196 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = 4, 2nd '*' = -2

1c1
<    8,   12, 123456789,    0, -12345678,   97, -2147483648, 2147483647 --- Return : 69
---
>    8,  -12, 123456789,    0, -12345678,   97, -2147483648, 2147483647 --- Return : 69

----------Test 197 : ----------
"%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d" // 1st '*' = 4, 2nd '*' = -2

1c1
< 8   , -12  , 123456789, 0   , -12345678, 97  , -2147483648, 2147483647 --- Return : 70
---
> 8   , -12 , 123456789, 0   , -12345678, 97  , -2147483648, 2147483647 --- Return : 69

----------Test 198 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 4, 2nd '*' = -2

1c1
<    8,   12, 123456789,    0, -12345678,   97, -2147483648, 2147483647 --- Return : 69
---
> 0008, -012, 123456789, 0000, -12345678, 0097, -2147483648, 2147483647 --- Return : 69

----------Test 199 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = 4, 2nd '*' = -1

1c1
<    8,   12, 123456789,    0, -12345678,   97, -2147483648, 2147483647 --- Return : 69
---
>    8,  -12, 123456789,    0, -12345678,   97, -2147483648, 2147483647 --- Return : 69

----------Test 201 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 4, 2nd '*' = -1

1c1
<    8,   12, 123456789,    0, -12345678,   97, -2147483648, 2147483647 --- Return : 69
---
> 0008, -012, 123456789, 0000, -12345678, 0097, -2147483648, 2147483647 --- Return : 69

----------Test 202 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = 4, 2nd '*' = 0

1c1
<    8,  -12, 123456789,    0, -12345678,   97, -2147483648, 2147483647 --- Return : 69
---
>    8,  -12, 123456789,     , -12345678,   97, -2147483648, 2147483647 --- Return : 69

----------Test 203 : ----------
"%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d" // 1st '*' = 4, 2nd '*' = 0

1c1
< 8   , -12 , 123456789, 0   , -12345678, 97  , -2147483648, 2147483647 --- Return : 69
---
> 8   , -12 , 123456789,     , -12345678, 97  , -2147483648, 2147483647 --- Return : 69

----------Test 204 : ----------
"%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d" // 1st '*' = 4, 2nd '*' = 0

1c1
<    8,  -12, 123456789,    0, -12345678,   97, -2147483648, 2147483647 --- Return : 69
---
>    8,  -12, 123456789,     , -12345678,   97, -2147483648, 2147483647 --- Return : 69

----------Test 217 : ----------
"%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d" // 1st '*' = 19, 2nd '*' = 14

1c1
<     -00000000000042,      00000000000042, -42                 , 42                 , -00000000000042    , 00000000000042     ,                  42,                  42 --- Return : 167
---
>     -00000000000042,      00000000000042, -42                , 42                 , -00000000000042    , 00000000000042     ,                 -42,                  42 --- Return : 166

----------Test 361 : ----------
"%.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X" // 1st '*' = 0, 2nd '*' = 5

1c1
< 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0, , , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 183
---
> 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, , , , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 182

----------Test 381 : ----------
"%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X" // 1st '*' = -1, 2nd '*' = 0

1c1
< 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185
---
> 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  ,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185

----------Test 382 : ----------
"%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = -1, 2nd '*' = 0

1c1
< 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185
---
> 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  ,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185

----------Test 383 : ----------
"%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X" // 1st '*' = -1, 2nd '*' = 0

1c1
< 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185
---
> 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  ,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185

----------Test 399 : ----------
"%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X" // 1st '*' = 0, 2nd '*' = 0

1c1
< 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0, , , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 183
---
> 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, , , , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 182

----------Test 400 : ----------
"%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = 0, 2nd '*' = 0

1c1
< 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0, , , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 183
---
> 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, , , , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 182

----------Test 401 : ----------
"%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X" // 1st '*' = 0, 2nd '*' = 0

1c1
< 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0, , , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 183
---
> 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, , , , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 182

----------Test 417 : ----------
"%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X" // 1st '*' = 1, 2nd '*' = 0

1c1
< 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185
---
> 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  ,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185

----------Test 418 : ----------
"%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = 1, 2nd '*' = 0

1c1
< 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185
---
> 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  ,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185

----------Test 419 : ----------
"%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X" // 1st '*' = 1, 2nd '*' = 0

1c1
< 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185
---
> 8, 8, 8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  ,  ,  , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 185

----------Test 433 : ----------
"%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = 2, 2nd '*' = -1

1c1
<  8,  8,  8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  0,  0,  0, 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 191
---
> 08, 08, 08, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 00, 00, 00, 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 191

----------Test 435 : ----------
"%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X" // 1st '*' = 2, 2nd '*' = 0

1c1
<  8,  8,  8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  0,   ,   , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 191
---
>  8,  8,  8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,   ,   ,   , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 191

----------Test 436 : ----------
"%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = 2, 2nd '*' = 0

1c1
<  8,  8,  8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,  0,   ,   , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 191
---
>  8,  8,  8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,   ,   ,   , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 191

----------Test 437 : ----------
"%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X" // 1st '*' = 2, 2nd '*' = 0

1c1
< 8 , 8 , 8 , 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0 ,   ,   , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 191
---
> 8 , 8 , 8 , 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,   ,   ,   , 4282621618, ff439eb2, FF439EB2, 97, 61, 61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 191

----------Test 451 : ----------
"%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = 3, 2nd '*' = -1

1c1
<   8,   8,   8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,   0,   0,   0, 4282621618, ff439eb2, FF439EB2,  97,  61,  61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200
---
> 008, 008, 008, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 000, 000, 000, 4282621618, ff439eb2, FF439EB2, 097, 061, 061, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200

----------Test 453 : ----------
"%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X" // 1st '*' = 3, 2nd '*' = 0

1c1
<   8,   8,   8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,   0,    ,    , 4282621618, ff439eb2, FF439EB2,  97,  61,  61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200
---
>   8,   8,   8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,    ,    ,    , 4282621618, ff439eb2, FF439EB2,  97,  61,  61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200

----------Test 454 : ----------
"%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = 3, 2nd '*' = 0

1c1
<   8,   8,   8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,   0,    ,    , 4282621618, ff439eb2, FF439EB2,  97,  61,  61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200
---
>   8,   8,   8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,    ,    ,    , 4282621618, ff439eb2, FF439EB2,  97,  61,  61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200

----------Test 455 : ----------
"%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X" // 1st '*' = 3, 2nd '*' = 0

1c1
< 8  , 8  , 8  , 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0  ,    ,    , 4282621618, ff439eb2, FF439EB2, 97 , 61 , 61 , 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200
---
> 8  , 8  , 8  , 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,    ,    ,    , 4282621618, ff439eb2, FF439EB2, 97 , 61 , 61 , 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 200

----------Test 469 : ----------
"%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = 4, 2nd '*' = -1

1c1
<    8,    8,    8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,    0,    0,    0, 4282621618, ff439eb2, FF439EB2,   97,   61,   61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 209
---
> 0008, 0008, 0008, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0000, 0000, 0000, 4282621618, ff439eb2, FF439EB2, 0097, 0061, 0061, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 209

----------Test 471 : ----------
"%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X" // 1st '*' = 4, 2nd '*' = 0

1c1
<    8,    8,    8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,    0,     ,     , 4282621618, ff439eb2, FF439EB2,   97,   61,   61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 209
---
>    8,    8,    8, 42949672cd .84, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,     ,     ,     , 4282621618, ff439eb2, FF439EB2,   97,   61,   61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 209

----------Test 472 : ----------
"%0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X, %0*.*u, %0*.*x, %0*.*X" // 1st '*' = 4, 2nd '*' = 0

1c1
<    8,    8,    8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,    0,     ,     , 4282621618, ff439eb2, FF439EB2,   97,   61,   61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 209
---
>    8,    8,    8, 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,     ,     ,     , 4282621618, ff439eb2, FF439EB2,   97,   61,   61, 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 209

----------Test 473 : ----------
"%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X" // 1st '*' = 4, 2nd '*' = 0

1c1
< 8   , 8   , 8   , 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15, 0   ,     ,     , 4282621618, ff439eb2, FF439EB2, 97  , 61  , 61  , 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 209
---
> 8   , 8   , 8   , 4294967284, fffffff4, FFFFFFF4, 123456789, 75bcd15, 75BCD15,     ,     ,     , 4282621618, ff439eb2, FF439EB2, 97  , 61  , 61  , 2147483647, 7fffffff, 7FFFFFFF, 2147483648, 80000000, 80000000 --- Return : 209


	*/
}

