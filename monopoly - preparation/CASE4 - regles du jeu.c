#include <stdio.h>
#include <stdlib.h>

int case4(){
    system("cls");
    printf("\n\n");
    printf("**************************************************** REGLES DU JEU ****************************************************\n\n");
    printf("    Le Monopoly est un jeu dans lequel chaque joueur dispose d une meme somme d argent initiale\n");
    printf("    et va tenter de monopoliser le marche immobilier d une ville, en ruinant progressivement ses adversaires...\n\n");
    printf("    Les joueurs se voient attribuer 200 euros au debut de la partie et a chaque passage sur la case depart.\n");
    printf("    Le joueur qui chommence a jouer est choisi aleatoirement.\n\n");
    printf("    Si un joueur lance des doubles 3 fois de suite, il deplace son jeton en prison.\n");
    printf("    Si un joueur atterit en prison dans le cours normal du jeu, il est simplement en visite et avance\n");
    printf("    de maniere habituelle sur son prochain jet\n");
    printf("    Un joueur sort de prison quand\n");
    printf("        - il lance des doubles sur l un de ses 3 tours suivants\n");
    printf("        - il utilise une carte sortir de prison gratuitement\n");
    printf("        - il paye une amende de 50 euros\n\n");
    printf("    Si un joueur qui passe le depart sur le jet d un de atterit 2 cases apres coffre de communaute\n");
    printf("    ou 7 cases apres chance et tire la carte avance au depart, il recoit 2 fois ses 200 euros.\n\n");
    printf("    Les joueurs ne peuvent acheter une propriete que s ils sont sur cette derniere\n");
    printf("    Quand un joueur atterit sur une propriete appartenant a un autre joueur, il doit lui payer le loyer\n");
    printf("    Quand un joueur atterit sur impot sur le revenu, il doit payer 200 euros d impot a la Banque\n");
    printf("    La case stationnement gratuit est un lieu de repos libre ou le joueur ne percoit rien\n");
    printf("    Une maison peut etre achetee sur nimporte quelle propriete possedee\n\n");
    printf("    Quand un joueur a 4 maisons sur une propriete, il peut acheter un seul hotel a la place\n");
    printf("    Les maisons et les hotels peuvent etre vendus a la banque pour la moitie du prix paye\n\n");
    printf("    Les proprietes non ameliorees peuvent etre hypothequees par la Banque en tout temps\n");
    printf("    Tous les batiments des proprietes ameliorees de cette couleur doivent etre revendues a la Banque\n");
    printf("    avant de pouvoir hypothequer les proprietes.\n");
    printf("    Afin de lever l hypotheque, le joueur doit payer a la Banque le montant de l hypotheque\n");
    printf("    majore d un interet de 10 pourcents. Si le proprietaire vend cette propriete a un autre joueur, l acheteur doit\n");
    printf("    payer le montant de l hypotheque et payer un interet de 10 pourcents additionnel a la Banque.\n");
    printf("    S il leve l hypotheque plus tard, il doit payer un interet de 10 pourcents lors de son achat, puis\n");
    printf("    le montant de l hypotheque et les 10 pourcents lors de la levee de l hypotheque\n");
    printf("    Un joueur est en faillite quand il ne peut plus payer.\n\n");
    printf("    S il a une dette envers un autre joueur, il lui rend tous ses biens, rend ses ameliorations a la Banque\n");
    printf("    et le creancier recoit la mmoitie du montant de ces ameliorations.\n");
    printf("    S il a hypotheque un bien, le creancier doit payer immediatement 10 pourcents de la valeur du bien.\n");
    printf("    Si le joueur a une dette envers la Banque, il remet tous ses biens a la Banque.\n");
    printf("    Aucun joueur ne peut emprunter ou preter de l argent a un autre joueur.\n\n");
}
