#include "ft_printf.h"
#include <stdio.h>

/*avec un point de précision, qu'on précise en digital ou en etoile :
SI STR > DIGITVALUE || STR > ETOILEVALUE, ALORS on affiche simplement str.
SI STR < DIGITVALUE || STR < ETOILEVALUE, ALORS on affiche str de façon troncaturée.

Pour les digit, un point est equivalent a 0, et on ne troncature jamais, qu'on donne une précision étoile ou digitale directement.
*/


int main()
{
/*    ft_printf("\nafficher precision quand str < STELLAprecision : %.*s zedzzd", 15, "camille");
    ft_printf("\nafficher precision quand str > STELLAprecision : %.*s  ezdzdzdz", 4, "camille");
    printf("\nREAL afficher precision quand str < STELLAprecision : %.*s", 15, "CAMILLE");
    printf("\nREAL afficher precision quand str > STELLAprecision : %.*s dee", 4, "CAMILLE");

    ft_printf("\nafficher precision quand nb > precision : %.d", 20);
    ft_printf("\nafficher precision quand nb < precision : %.d", 2);
    printf("\nREAL afficher precision quand nb > precision : %.d", 20);
    printf("\nREAL afficher precision quand nb < precision : %.d", 2);


    ft_printf("\nafficher precision quand nb > precision : %.*d", 2, 2000);
    ft_printf("\nafficher precision quand nb < precision : %.*d", 2, 2);
    printf("\nREAL afficher precision quand nb > precision : %.*d", 2, 2000);
    printf("\nREAL afficher precision quand nb < precision : %.*d", 2, 2);
*/
    ft_printf("\nafficher precision quand str < DIGITprecision : %.0s", "camille");
    ft_printf("\nafficher precision quand str > DIGITprecision : %.0s", "camille");
    printf("\nREAL afficher precision quand str < DIGITprecision : %.0s", "CAMILLE");
    printf("\nREAL afficher precision quand str > DIGITprecision : %.0s", "CAMILLE");/*

    ft_printf("\nafficher precision quand str < DIGITprecision : %.15s", "camille");
    ft_printf("\nafficher precision quand str > DIGITprecision : %.4s", "camille");
    printf("\nREAL afficher precision quand str < DIGITprecision : %.15s", "CAMILLE");
    printf("\nREAL afficher precision quand str > DIGITprecision : %.4s", "CAMILLE");

    ft_printf("\nafficher precision quand nb > precision : %.2d", 2000);
    ft_printf("\nafficher precision quand nb < precision : %.2d", 2);
    printf("\nREAL afficher precision quand nb > precision : %.2d", 2000);
    printf("\nREAL afficher precision quand nb < precision : %.2d", 2);


    ft_printf("\nafficher precision quand str > precision ZERO : %0*s", 15, "camille");
    ft_printf("\nafficher precision quand str < precision ZERO: %0*s", 4, "camille");
    printf("\nREAL afficher precision quand str > precision ZERO: %0*s", 15, "CAMILLE");// UNDEFINED, LES ZEROS NE S'AFFICHENT PAS MAIS WIDTH EST GERE
    printf("\nREAL afficher precision quand str < precision ZERO: %0*s", 4, "CAMILLE"); //UNDEFINED, LES ZEROS NE S'AFFICHENT PAS MAIS WIDTH EST GERE
    


    ft_printf("\nafficher precision quand nb > precision ZERO: %0*d", 2, 2000);
    ft_printf("\nafficher precision quand nb < precision ZERO: %0*d", 2, 2);
    printf("\nREAL afficher precision quand nb > precision ZERO: %0*d", 2, 2000);
    printf("\nREAL afficher precision quand nb < precision ZERO: %0*d", 2, 2);

    ft_printf("\nafficher precision quand str > precision ZERO : %015s", "camille");
    ft_printf("\nafficher precision quand str < precision ZERO : %04s", "camille");
    printf("\nREAL afficher precision quand str > precision ZERO: %015s", "CAMILLE");
    printf("\nREAL afficher precision quand str < precision ZERO: %04s", "CAMILLE");

    ft_printf("\nafficher precision quand nb > precision ZERO : %02d", 2000);
    ft_printf("\nafficher precision quand nb < precision ZERO : %02d", 2);
    printf("\nREAL afficher precision quand nb > precision ZERO : %02d", 2000);
    printf("\nREAL afficher precision quand nb < precision ZERO : %02d", 2);
    */
}