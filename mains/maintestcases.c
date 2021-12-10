#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>


int     main(void)
{
    //int i = 42;
    //
//
    //printf("\n\nBASIC :/n");
    //printf("\n01_test %%d : %d", 42);
    //printf("\n02_test %%s : %s", "42");
    //printf("\n03_test %%x : %x", 42);
    //printf("\n04_test %%X : %X", 42);
    //printf("\n05_test %%p : %p", &i);
    //printf("\n06_test %%u : %u", 42);
//
    //ft_printf("\n\nBASIC :/n");
    //ft_printf("\n01_test %%d : %d", 42);
    //ft_printf("\n02_test %%s : %s", "42");
    //ft_printf("\n03_test %%x : %x", 42);
    //ft_printf("\n04_test %%X : %X", 42);
    //ft_printf("\n05_test %%p : %p", &i);
    //ft_printf("\n06_test %%u : %u", 42);
//
    //printf("\n\nminus :/n"); 
    //printf("\n07_test %%d : %-d", 42);
    //printf("\n08_test %%s : %-s", "42");
    //printf("\n09_test %%x : %-x", 42);
    //printf("\n10_test %%X : %-X", 42);
    //printf("\n11_test %%p : %-p", &i);
    //printf("\n12_test %%u : %-u", 42);
//
    //printf("\n\nminus :/n"); 
    //ft_printf("\n07_test %%d : %-d", 42);
    //ft_printf("\n08_test %%s : %-s", "42");
    //ft_printf("\n09_test %%x : %-x", 42);
    //ft_printf("\n10_test %%X : %-X", 42);
    //ft_printf("\n11_test %%p : %-p", &i);
    //ft_printf("\n12_test %%u : %-u", 42);
//
    //
 //s//i point et digit alors 
//
    //ft_printf("\nPOINT :/n"); 
    //ft_printf("\n13_test vrai printf %%d : %.d blabla", 42);
    //ft_printf("\n14_test vrai printf %%s : %.s blabla", "kjhiigggiuhi");
    //ft_printf("\n15_test vrai printf %%x : %.x", 42);
    //ft_printf("\n16_test vrai printf %%X : %.X", 42);
    //ft_printf("\n17_test vrai printf %%p : %.p", &i);
    //ft_printf("\n18_test vrai printf %%u : %.u", 42);
//
    //printf("\nZERO :/n"); 
    //printf("\n19_test %%d : %0d", 42);
    //printf("\n20_test %%s : %0s", "42"); // 0 avec string = resultat indefini
    //printf("\n21_test %%x : %0x", 42);
    //printf("\n22_test %%X : %0X", 42);
    //printf("\n23_test %%p : %0p", &i); // 0 avec pointeur = resultat indefini
    //printf("\n24_test %%u : %0u", 42);  
    //
    //ft_printf("\nETOILE :/n"); 
    //ft_printf("\n25_test %%d : %*d", 42, 42);
    //ft_printf("\n26_test %%s : %*s", 42, "42");
    //ft_printf("\n27_test %%x : %*x", 42, 42);
    //ft_printf("\n28_test %%X : %*X", 42, 42);
    //ft_printf("\n29_test %%p : %*p", 42, &i);
    //ft_printf("\n30_test %%u : %*u", 42, 42);
    //ft_printf("\nminus ETOILE :/n"); 
    //ft_printf("\n31_test %%d : %-*d", 42, 42);
    //ft_printf("\n32_test %%s : %-*s", 42, "42");
    //ft_printf("\n33_test %%x : %-*x", 42, 42);
    //ft_printf("\n34_test %%X : %-*X", 42, 42);
    //ft_printf("\n35_test %%p : %-*p", 42, &i);
    //ft_printf("\n36_test %%u : %-*u", 42, 42);
    //printf("\nPOINT ETOILE :/n"); 
    //printf("\n31_test %%d : %.*d", 42, 424242);
    //printf("\n32_test %%s : %.*s", 42, "424242");
    //printf("\n33_test %%x : %.*x", 42, 424242);
    //printf("\n34_test %%X : %.*X", 42, 424242);
    //printf("\n35_test %%p : %.*p", 42, &i); // je constate un caractere en plus, mais avec p le resultat est indéfini
    //printf("\n36_test %%u : %.*u", 42, 424242);
    //*/
    //printf("\nZERO ETOILE :\n"); 
    //printf("\ntest %%d : %0*d", 42, 424242);
    //printf("\ntest %%s : %0*s", 42, "424242"); //j'imprime juste la chaine de caracteres mais du coup pas la width qui affiche juste des espaces PROBLEME A RESOUDRE
    //printf("\ntest %%x : %0*x", 42, 424242);
    printf("\ntest %%X : %*X", 42, 424242);
    //printf("\ntest %%p : %0*p", 42, &i);
    //printf("\ntest %%d : %0*u", 42, 424242);
    //printf("\n POINT ETOILE (CHIFFRE NEGATIF) :/n"); 
    //printf("\n31_test %%d : %.*d", 42, -42);
    //printf("\n32_test %%s : %.*s", 42, "42");
    //printf("\n33_test %%x : %.*x", 42, -42);
    //printf("\n34_test %%X : %.*X", 42, -42);
    //printf("\n35_test %%p : %.*p", 42, -42);  // INDEFINI, le OX vient devant les 0 et ne font pas partie de la width, donc 2 char affichés en plus
    //printf("\n36_test %%u : %.*u", 42, -42);
    ///*
    //printf("\nminus POINT ETOILE :/n"); 
    //printf("\n31_test %%d : %-.*d", 42, 42);
    //printf("\n32_test %%s : %-.*s", 42, "42");
    //printf("\n33_test %%x : %-.*x", 42, 42);
    //printf("\n34_test %%X : %-.*X", 42, 42);
    //printf("\n35_test %%p : %-.*p", 42, 42);
    //printf("\n36_test %%u : %-.*u", 42, 42);
    //printf("\nminus POINT ETOILE (CHIFFRE NEGATIF) :/n"); 
    //printf("\n31_test %%d : %-.*d", 42, -42);
    //printf("\n32_test %%s : %-.*s", 42, "42");
    //printf("\n33_test %%x : %-.*x", 42, -42);
    //printf("\n34_test %%X : %-.*X", 42, -42);
    //printf("\n35_test %%p : %-.*p", 42, &i);
    //printf("\n36_test %%u : %-.*u", 42, -42);
    //printf("\nPOINT minus ETOILE :/n"); 
    //printf("\n31_test %%d : %.-*d", 42, 42);
    //printf("\n32_test %%s : %.-*s", 42, "42");
    //printf("\n33_test %%x : %.-*x", 42, 42);
    //printf("\n34_test %%X : %.-*X", 42, 42);
    //printf("\n35_test %%p : %.-*p", 42, 42);
    //printf("\n36_test %%u : %.-*u", 42, 42);
    //printf("\nPOINT minus ETOILE (CHIFFRE NEGATIF) :/n"); 
    //printf("\n31_test %%d : %.-*d", 42, -42);
    //printf("\n32_test %%s : %.-*s", 42, "42");
    //printf("\n33_test %%x : %.-*x", 42, -42);
    //printf("\n34_test %%X : %.-*X", 42, -42);
    //printf("\n35_test %%p : %.-*p", 42, -42);
    //printf("\n36_test %%u : %.-*u", 42, -42);
    //printf("\nminus ETOILE POINT :/n"); 
    //printf("\n31_test %%d : %-*.d", 42, 42);
    //printf("\n32_test %%s : %-*.s", 42, "42");
    //printf("\n33_test %%x : %-*.x", 42, 42);
    //printf("\n34_test %%X : %-*.X", 42, 42);
    //printf("\n35_test %%p : %-*.p", 42, 42);
    //printf("\n36_test %%u : %-*.u", 42, 42);
    //printf("\nminus ETOILE POINT (CHIFFRE NEGATIF) :/n"); 
    //printf("\n31_test %%d : %-*.d", 42, -42);
    //printf("\n32_test %%s : %-*.s", 42, "42");
    //printf("\n33_test %%x : %-*.x", 42, -42);
    //printf("\n34_test %%X : %-*.X", 42, -42);
    //printf("\n35_test %%p : %-*.p", 42, -42);
    //printf("\n36_test %%u : %-*.u", 42, -42);
    //printf("\nDIGIT :/n"); */
    //printf("\n25_test %%d : %42d", 42);
    //printf("\n26_test %%s : %42s", "42");
    //printf("\n27_test %%x : %42x", 42);
    //printf("\n28_test %%X : %42X", 42);
    //printf("\n29_test %%p : %42p", 42);
    //printf("\n30_test %%u : %42u", 42);
    //printf("\nminus DIGIT :/n"); 
    //printf("\n31_test %%d : %-42d", 42);
    //printf("\n32_test %%s : %-42s", "42");
    //printf("\n33_test %%x : %-42x", 42);
    //printf("\n34_test %%X : %-42X", 42);
    //printf("\n35_test %%p : %-42p", 42);
    //printf("\n36_test %%u : %-42u", 42);
    //printf("\nPOINT DIGIT :/n"); 
    //printf("\n31_test %%d : %.42d", 42);
    //printf("\n32_test %%s : %.42s", "42");
    //printf("\n33_test %%x : %.42x", 42);
    //printf("\n34_test %%X : %.42X", 42);
    //printf("\n35_test %%p : %.42p", 42);
    //printf("\n36_test %%u : %.42u", 42);
    //printf("\nminus POINT DIGIT :/n"); 
    //printf("\n31_test %%d : %-.42d", 42);
    //printf("\n32_test %%s : %-.42s", "42");
    //printf("\n33_test %%x : %-.42x", 42);
    //printf("\n34_test %%X : %-.42X", 42);
    //printf("\n35_test %%p : %-.42p", 42);
    //printf("\n36_test %%u : %-.42u", 42);
    //printf("\nminus DIGIT POINT :/n"); 
    //printf("\n31_test %%d : %-42.d", 42);
    //printf("\n32_test %%s : %-42.s", "42");
    //printf("\n33_test %%x : %-42.x", 42);
    //printf("\n34_test %%X : %-42.X", 42);
    //printf("\n35_test %%p : %-42.p", 42);
    //printf("\n36_test %%u : %-42.u", 42);
    //printf("\nPOINT minus DIGIT :/n"); 
    //printf("\n31_test %%d : %.-42d", 42);
    //printf("\n32_test %%s : %.-42s", "42");
    //printf("\n33_test %%x : %.-42x", 42);
    //printf("\n34_test %%X : %.-42X", 42);
    //printf("\n35_test %%p : %.-42p", 42);
    //printf("\n36_test %%u : %.-42u", 42);
//
    //printf("\nZERO DIGIT :"); 
    //printf("\ntest %%d : %042d", 42);
    //printf("\ntest %%s : %042s", "42");
    //printf("\ntest %%x : %042x", 42);
    //printf("\ntest %%X : %042X", 42);
    //printf("\ntest %%p : %042p", &i);
    //printf("\ntest %%d : %042u", 42);
    //printf("\nPOINT ETOILE :"); 
    //printf("\ntest %%d : %.*d",42, 42);
    //printf("\ntest %%s : %.*s",42, "42");
    //printf("\ntest %%x : %.*x",42, 42);
    //printf("\ntest %%X : %.*X",42, 42);
    //printf("\ntest %%p : %.*p",42, &i);
    //printf("\ntest %%d : %.*u",42, 42);
    //printf("\nPOINT DIGIT :"); 
    //printf("\ntest %%d : %.42d", 42);
    //printf("\ntest %%s : %.42s", "42");
    //printf("\ntest %%x : %.42x", 42);
    //printf("\ntest %%X : %.42X", 42);
    //printf("\ntest %%p : %.42p", &i);
    //printf("\ntest %%d : %.42u", 42);
    //printf("\nPOINT ETOILE negatif :"); 
    //printf("\ntest %%d : %.*d", 42, -42);
    //printf("\ntest %%s : %.*s", 42, "42");
    //printf("\ntest %%x : %.*x", 42, -42);
    //printf("\ntest %%X : %.*X", 42, -42);
    //printf("\ntest %%p : %.*p", 42, &i);
    //printf("\ntest %%d : %.*u", 42, -42);
    //printf("\nPOINT DIGIT negatif? :"); 
    //printf("\ntest %%d : %.42d", -42);
    //printf("\ntest %%s : %.42s", "42");
    //printf("\ntest %%x : %.42x", -42);
    //printf("\ntest %%X : %.42X", -42);
    //printf("\ntest %%p : %.42p", &i);
    //printf("\ntest %%d : %.42u", -42);
    //printf("\nPOINT + negative ETOILE:"); 
    //printf("\ntest %%d : %.*d", -42, 42);
    //printf("\ntest %%s : %.*s", -42, "42");
    //printf("\ntest %%x : %.*x", -42, 42);
    //printf("\ntest %%X : %.*X", -42, 42);
    //printf("\ntest %%p : %.*p", -42, &i);
    //printf("\ntest %%d : %.*u", -42, 42);
    //printf("\nZERO + negative ETOILE:"); 
    //printf("\ntest %%d : %0*d", -42, 42);
    //printf("\ntest %%s : %0*s", -42, "42");
    //printf("\ntest %%x : %0*x", -42, 42);
    //printf("\ntest %%X : %0*X", -42, 42);
    //printf("\ntest %%p : %0*p", -42, &i);
    //printf("\ntest %%d : %0*u", -42, 42);
    //printf("\nPOINT  + positive ETOILE:"); 
    //printf("\ntest %%d : %.*d", 42, 42);
    //printf("\ntest %%s : %.*s", 42, "42");
    //printf("\ntest %%x : %.*x", 42, 42);
    //printf("\ntest %%X : %.*X", 42, 42);
    //printf("\ntest %%p : %.*p", 42, &i);
    //printf("\ntest %%d : %.*u", 42, 42);
    //printf("\nZERO  + positive ETOILE:"); 
    //printf("\ntest %%d : %.*d", 42, 42);
    //printf("\ntest %%s : %.*s", 42, "42");
    //printf("\ntest %%x : %.*x", 42, 42);
    //printf("\ntest %%X : %.*X", 42, 42);
    //printf("\ntest %%p : %.*p", 42, &i);
    //printf("\ntest %%d : %.*u", 42, 42);
    //printf("\nPOINT + negative DIGIT:"); 
    //printf("\ntest %%d : %.*d", -42, 42);
    //printf("\ntest %%s : %.*s", -42, "42");
    //printf("\ntest %%x : %.*x", -42, 42);
    //printf("\ntest %%X : %.*X", -42, 42);
    //printf("\ntest %%p : %.*p", -42, &i);
    //printf("\ntest %%d : %.*u", -42, 42);
    //printf("\nZERO + negative DIGIT:"); 
    //printf("\ntest %%d : %0*d", -42, 42);
    //printf("\ntest %%s : %0*s", -42, "42");
    //printf("\ntest %%x : %0*x", -42, 42);
    //printf("\ntest %%X : %0*X", -42, 42);
    //printf("\ntest %%p : %0*p", -42, &i);
    //printf("\ntest %%d : %0*u", -42, 42);
    //printf("\nPOINT  + positive DIGIT:"); 
    //printf("\ntest %%d : %.*d", 42, 42);
    //printf("\ntest %%s : %.*s", 42, "42");
    //printf("\ntest %%x : %.*x", 42, 42);
    //printf("\ntest %%X : %.*X", 42, 42);
    //printf("\ntest %%p : %.*p", 42, &i);
    //printf("\ntest %%d : %.*u", 42, 42);
    //printf("\nZERO  + positive DIGIT:"); 
    //printf("\ntest %%d : %.*d", 42, 42);
    //printf("\ntest %%s : %.*s", 42, "42");
    //printf("\ntest %%x : %.*x", 42, 42);
    //printf("\ntest %%X : %.*X", 42, 42);
    //printf("\ntest %%p : %.*p", 42, &i);
    //printf("\ntest %%d : %.*u", 42, 42);
    //printf("\nPOINT + ZERO  + DIGIT:"); 
    //printf("\ntest %%d : %.042d", 42);
    //printf("\ntest %%s : %.042s", "42");
    //printf("\ntest %%x : %.042x", 42);
    //printf("\ntest %%X : %.042X", 42);
//printf("\ntest %%p : %.042p", &i);
    //printf("\ntest %%d : %.042u", 42);
    //printf("\nPOINT + ZERO + ETOILE:"); 
    //printf("\ntest %%d : %.0*d", 42, 42);
    //printf("\ntest %%s : %.0*s", 42, "42");
    //printf("\ntest %%x : %.0*x", 42, 42);
    //printf("\ntest %%X : %.0*X", 42, 42);
//printf("\ntest %%p : %.0*p", 42, &i);
    //printf("\ntest %%d : %.0*u", 42, 42);
//
    return (0);
}