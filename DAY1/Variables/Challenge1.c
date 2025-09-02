#include <stdio.h>
int main () {

    char nom[50];
    char prenom[50];
    char sexe[50]; 
    char adress[50];
    char email[50];
    int age;
    
    printf("donner votre nom : ");
    scanf("%49s",&nom);

    printf("donner votre prenom : ");
    scanf("%49s",&prenom);
    
    printf("donner votre age : ");
    scanf("%d",&age);
    
    printf("donner votre sexe : ");
    scanf("%49s",&sexe);
    
    printf("donner votre adress : ");
    scanf("%49s",&adress);
    
    printf("donner votre email : ");
    scanf("%49s",&email);

    printf("Nom : %s \n Prenom : %s \n Age : %d \n Sexe : %s \n adress : %s \n email : %s \n", nom,prenom,age,sexe,adress,email);
    
    return 0;
}