#include <stdio.h>

// voici la fonction qui calcule AxB en faisant des +1
//les argument seront limite au type d'entiers positifs

unsigned int produit(unsigned int a, unsigned int b)
{
    unsigned int produit = 0;
    for(int i=0; i < a; i++ )
    {
        for(int j=0; j < b; j++)
        {
            produit+=1;
        }
    }
    return produit;
}

int main(void)
{
    unsigned int a,b;
    printf("Entrez deux entiers strictements positifs\n");
    // On securise la saisie
    while (scanf("%u %u",&a, &b) != 2)
    {
        printf("Vos valeurs n'ont pas ete pris en compte\n");
        printf("Veuillez entrer les deux nombres entiers positifs, dans le format:\n ");
        printf("\t \t \t a b.\n exemple: 2 3");
    }
    
    printf("Le produit de %u par %u est: %u", a, b, produit(a, b));
    
}