#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note1, note2, note3, note4,note5;
    int total, max ,min;
    float moyenne;


    printf("hello etudiant saisir la note 1!\n");
    scanf("%d",&note1);

    printf("saisir la note 2!\n");
    scanf("%d",&note2);

    printf("saisir la note 3!\n");
    scanf("%d",&note3);

    printf("saisir la note 4!\n");
    scanf("%d",&note4);

    printf("saisir la note 5!\n");
    scanf("%d",&note5);

    total = note1 + note2 + note3 +note4 +note5;
    moyenne = (float) total / 5;

    max = note1;
     if (note2 > max) max = note2;
     if (note3 > max) max = note3;
     if (note4 > max) max = note4;
     if (note5 > max) max = note5;





    min = note1;
    if (note2 < min) min = note2;
    if (note3 < min) min = note3;
    if (note4 < min) min = note4;
    if (note5 < min) min = note5;

    printf("\n--- Rapport global ---\n\n");
    printf("votre  total des notes est :%d\n",total);

    printf("votre moyenne est :%f \n",moyenne);
    printf("la note la plus haute de vous est %d\n",max);
    printf("la note la plus basse de vous est %d\n",min);

    if (moyenne >= 90){
            printf("votre mention : A : Excellent\n ");}
    else if ( moyenne < 90 && moyenne >= 80 ){
            printf("votre mention : B : Tres bien\n ");

    }
    else if( moyenne < 80 && moyenne >= 70 ){
            printf("votre mention : C : Bien \n") ;

    }

    else if( moyenne < 70 && moyenne >= 60 ){
            printf("votre mention : D : Passable \n") ;

    }

    else {
        printf("F : Echec\n");
    }

    if (moyenne < 50){
        printf("vous avez echoue\n");
    }
    else {
            printf("vous avez reussi\n");

    }








    return 0;
}
