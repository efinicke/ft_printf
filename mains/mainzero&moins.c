#include "ft_printf.h"
#include <stdio.h>

//le flag 0 serait ignoré si - est présent.
//si - / point et etoile ou digit alors le minus ne compte pas. un zero dans ce digit ne compte pas non plus
/*
if (tab->zero == 1 && tab->minus == 1)
    tab->zero = 0;

*/
//si etoile et digit ou digit et etoile l'argument n'est pas reconnu et toute la chaine s affiche dans le printf. 
//Faut il coder ce cas vu qu"il s'agit d'un warning ou renvoyer juste 0?

int main()
{
/*
    ft_printf("\nafficher precision quand str < STELLAprecision : %-.*s", 15, "camille");
    ft_printf("\nafficher precision quand str > STELLAprecision : %-.*s", 4, "camille");
    printf("\nREAL afficher precision quand str < STELLAprecision : %-.*s", 15, "CAMILLE");
    printf("\nREAL afficher precision quand str > STELLAprecision : %-.*s", 4, "CAMILLE");


    ft_printf("\nafficher precision quand nb > precision : %-.d", 20);
    ft_printf("\nafficher precision quand nb < precision : %-.d", 2);
    printf("\nREAL afficher precision quand nb > precision : %-.d", 20);
    printf("\nREAL afficher precision quand nb < precision : %-.d", 2);


    ft_printf("\nafficher precision quand nb > precision : %-.*d", 2, 2000);
    ft_printf("\nafficher precision quand nb < precision : %-.*d", 2, 2);
    printf("\nREAL afficher precision quand nb > precision : %-.*d", 2, 2000); // le minus ne compte pas si précision et etoile.
    printf("\nREAL afficher precision quand nb < precision : %-.*d", 2, 2);
*/
 /*   ft_printf("\nafficher precision quand str < DIGITprecision : %-.15s", "camille");
    ft_printf("\nafficher precision quand str > DIGITprecision : %-.4s", "camille");
    printf("\nREAL afficher precision quand str < DIGITprecision : %-.15s", "CAMILLE"); // avec str le minus est inutile si précision
    printf("\nREAL afficher precision quand str > DIGITprecision : %-.4s", "CAMILLE");

    ft_printf("\nafficher precision quand nb > precision : %-.02d", 2000);
    ft_printf("\nafficher precision quand nb < precision : %-.02d", 2);
    printf("\nREAL afficher precision quand nb > precision : %-.02d", 2000); 

    
    printf("\nREAL afficher precision quand nb < precision : %-0.2d", 2); // le minus et le zero ne comptent pas

    printf("\nREAL afficher precision quand nb > precision : %0.50d", 2000);
    ft_printf("\nafficher precision quand nb > precision : %0.50d", 2000);
*/
printf("\nREAL afficher precision quand nb > precision : %.050d", 2000);
    ft_printf("\nafficher precision quand nb > precision : %.050d", 2000);
    
/*
    ft_printf("\nafficher precision quand str > precision ZERO : %-0*s", 15, "camille");
    ft_printf("\nafficher precision quand str < precision ZERO: %-0*s", 4, "camille");
    printf("\nREAL afficher precision quand str > precision ZERO: %-0*s", 15, "CAMILLE");// UNDEFINED, LES ZEROS NE S'AFFICHENT PAS MAIS WIDTH EST GERE
    printf("\nREAL afficher precision quand str < precision ZERO: %-0*s", 4, "CAMILLE"); //UNDEFINED, LES ZEROS NE S'AFFICHENT PAS MAIS WIDTH EST GERE
    


    ft_printf("\nafficher precision quand nb > precision ZERO: %-0*d", 2, 2000);
    ft_printf("\nafficher precision quand nb < precision ZERO: %-0*d", 2, 2);
    printf("\nREAL afficher precision quand nb > precision ZERO: %-0*d", 2, 2000);
    printf("\nREAL afficher precision quand nb < precision ZERO: %-0*d", 2, 2);

    ft_printf("\nafficher precision quand str > precision ZERO : %-015s", "camille");
    ft_printf("\nafficher precision quand str < precision ZERO : %-04s", "camille");
    printf("\nREAL afficher precision quand str > precision ZERO: %-015s", "CAMILLE");
    printf("\nREAL afficher precision quand str < precision ZERO: %-04s", "CAMILLE");

    ft_printf("\nafficher precision quand nb > precision ZERO : %-02d", 2000);
    ft_printf("\nafficher precision quand nb < precision ZERO : %-02d", 2);
    printf("\nREAL afficher precision quand nb > precision ZERO : %-02d", 2000);
    printf("\nREAL afficher precision quand nb < precision ZERO : %-02d", 2);*/
}