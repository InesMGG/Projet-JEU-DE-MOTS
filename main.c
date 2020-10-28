#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void MenuP()
{
    printf("1:conjugaison d'un verbe du 1er groupe\n");
    printf("2:miroir\n");
    printf("3:palindrome, mot qui se lit dans les deux sens\n");
    printf("4:occurence, nombre de fois qu'apparait une lettre\n");
    printf("q:quitter\n");
}
void Conj()
{
    char verbe[30],affichage[30];
    int l;
    printf("Entrez un verbe du 1er groupe\n");
    scanf("%s",&verbe);
    l=strlen(verbe);
    if ((verbe[l-2]!='e')||(verbe[l-1]!='r'))
    {
        printf("Le verbe n'est pas du premier groupe\n");
    }
    else
    {
        printf("La conjugaison au present est:\n");
            verbe[l-2]='\0';
            affichage[0]='\0';
            strcat(affichage,"je ");
            strcat(affichage,verbe);
            strcat(affichage,"e");
            printf("%s\n",affichage);
            affichage[0]='\0';
            strcat(affichage, "tu ");
            strcat(affichage, verbe);
            strcat(affichage,"es");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "il/elle ");
            strcat(affichage, verbe);
            strcat(affichage,"e");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "nous ");
            strcat(affichage, verbe);
            strcat(affichage,"ons");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "vous ");
            strcat(affichage, verbe);
            strcat(affichage,"ez");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "ils/elles ");
            strcat(affichage, verbe);
            strcat(affichage,"ent");
            printf("%s\n",affichage);
            printf("La conjugaison a l'imparfait est:\n");
            verbe[l-2] ='\0';
            affichage[0] = '\0';
            strcat(affichage, "je ");
            strcat(affichage, verbe);
            strcat(affichage,"ais");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "tu ");
            strcat(affichage, verbe);
            strcat(affichage,"ais");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "il/elle ");
            strcat(affichage, verbe);
            strcat(affichage,"ait");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "nous ");
            strcat(affichage, verbe);
            strcat(affichage,"ions");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "vous ");
            strcat(affichage, verbe);
            strcat(affichage,"iez");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "ils/elles ");
            strcat(affichage, verbe);
            strcat(affichage,"aient");
            printf("%s\n",affichage);
            printf("La conjugaison au futur est:\n");
            verbe[l-2] = 'e';
            verbe[l-1] = 'r';
            affichage[0] = '\0';
            strcat(affichage, "je ");
            strcat(affichage, verbe);
            strcat(affichage,"ai");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "tu ");
            strcat(affichage, verbe);
            strcat(affichage,"as");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "il/elle ");
            strcat(affichage, verbe);
            strcat(affichage,"a");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "nous ");
            strcat(affichage, verbe);
            strcat(affichage,"ons");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "vous ");
            strcat(affichage, verbe);
            strcat(affichage,"ez");
            printf("%s\n",affichage);
            affichage[0] = '\0';
            strcat(affichage, "ils/elles ");
            strcat(affichage, verbe);
            strcat(affichage,"ont");
            printf("%s\n",affichage);
    }
    printf("Pour recommencer, taper 1. Pour quitter l'appplication, tapez q\n");
}
void Mir()
{
    char mot[30],miroir[30];
    int i,l;
    printf("Saisir un mot\n");
    scanf("%s",&mot);
    l=strlen(mot);
    i=0;
    while (mot[i]!='\0')
    {
        miroir[l-i-1]=mot[i];
        i=i+1;
    }
    miroir[l]='\0';
    printf("Le miroir du mot est %s\n",miroir);
    printf("Pour recommencer, tapez 2. Pour quitter l'application, tapez q.\n");
}
void Pali()
{
    char mot[30],miroir[30];
    int i,l,pali;
    printf("Saisir un mot\n");
    scanf("%s",&mot);
    l=strlen(mot);
    i=0;
    pali=1;
    while (mot[i]!='0')
    {
        miroir[l-i-1]=mot[i];
        i=i+1;
    }
    miroir[l]='0';
    for (i=0;i<l;i++)
    if (miroir[i]!=mot[i])
        pali=0;
    if (pali)
        printf("Le mot est un palindrome\n");
    else
        printf("Le mot n'est pas un palindrome\n");
    printf("Pour recommencer, tapez 3. Pour quitter l'application, tapez q.\n");
}
void Occu()
{
    char mot[30],l;
    int oc=0,i;
    printf("Choisissez un mot:\n");
    scanf("%s",&mot);
    printf("Choisissez la lettre:\n");
    scanf("%s",&l);
    for(i=0;mot[i]!='0';i++)
    {
        if ((mot[i]=l))
            oc++;
    }
    printf("Le nombre d'occurence de la lettre est %d\n",oc);
    printf("Pour recommencer, tapez 4. Pour quitter l'application, tapez q.\n");
}
int main()
{
    char signe;
    printf("Choisisez votre programme\n");
    MenuP();
    while (signe!='q')
    {
        scanf("%c",&signe);
        switch(signe)
        {
        case '1':
            Conj();
            break;
        case '2':
            Mir();
            break;
        case '3':
            Pali();
            break;
        case '4':
            Occu();
            break;
        }
    }
    return 0;
}
