#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100];
    int n  ;
    float moy , som ;
    int choix;
    float s;
    float num;
    int min = t[0] ;
    int max = t[0] ;
    int supif  ;
    int val = 0 ;
    int rtt = 0;

    num = 0;
     printf("Combien d'etudiant y a-t-il? :");
     scanf("%d",&n);
     for(int i = 0 ; i < n ;i++){
        printf("Entrer la note de l'etudiant %d :",i + 1);
        scanf("%d" ,&t[i]);
     }
     do{
       printf("******************\n");
       printf("que souhaitez-vous faire ?\n");
       printf("1.calculer la moyenne des notes.\n");
       printf("2.Trouver la note la plus elevee et la plus basse. \n");
       printf("3.Afficher les notes superieur a la moyenne.\n");
       printf("4.compter le nombre d'etudiants ayant valide .\n");
       printf("5.compter le nombre d'etudiants en rattrapage.\n");
       printf("6.Quitter.\n");
       printf("Entrer votre choix :");
       scanf("%d",&choix);
     switch(choix){
   case 1:
    printf("+++++++++++++++LA moyenne+++++++++++++++\n");
       som = 0;
    for (int i = 0; i < n; i++) {
        som += t[i];
}
     moy = som / n;
printf("La moyenne des notes est : %.2f\n", moy);
    break;
   case 2 :
       min =t[0];
       max =t[0];
    printf("+++++++++++++++lA NOTE+++++++++++++++\n");
    for(int i = 0; i < n; i++){
    if(t[i]< min){
        min = t[i];
    }
    if(t[i]> max){
        max = t[i];
    }
    }
    printf("La note la plus basse est :%d\n",min);
    printf("La note plus elevee est :%d\n",max);
    break;
   case 3 :
    printf("+++++++++++++++lA NOTE SUPERIEUR+++++++++++++++\n");
     printf("les note superieure a la moyenne :\n");
    for(int i = 0 ; i < n ; i++){
        if(t[i]>moy)
            printf("etudiante %d : %d \n",i + 1, t[i]);
}
break;
   case 4:
    printf("+++++++++++++++VALIDE+++++++++++++++\n");
    for(int i = 0 ; i < n ; i++){
        if(t[i] >= 12)
            val++;
    }
    printf("Le nombre d'etudiants ayant valide :%d\n",val);
    break;
   case 5:
    printf("+++++++++++++++RATTRAPAGE+++++++++++++++\n");
        for(int i = 0 ; i < n ; i++){
        if(t[i] < 12)
            rtt++;
            }
             printf("Le nombre d'etudiants en rattrapage :%d\n",rtt);
            break;
   case 6 :
    printf("+++++++++++++++QUITTER+++++++++++++++\n");
    printf("Au revoir !\n");
    break;
   default :
    printf("veuillez ressayer.\n");
}
     }while(choix!=6);
    return 0;
}
