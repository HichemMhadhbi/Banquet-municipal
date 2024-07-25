#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, k;

    do {
        printf("Entrez le nombre total de positions : ");
        scanf("%d", &n);
    }while (n > 1000 || n <= 0);

     printf("\nEntrez le nombre de changements :");
     scanf("%d", & m);


    // Tableau pour stocker les positions
    int Tpos[n];

    // Lecture des positions initiales
    printf("Entrez les positions initiales :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &Tpos[i]);
    }

    // Lecture et traitement des changements de positions
    printf("Entrez les changements de positions :\n");
    for (j = 0; j < m; j++) {
        int pos1, pos2;
        scanf("%d %d", &pos1, &pos2);

        // Échange des positions
        int temp;
        temp = Tpos[pos1];
        Tpos[pos1] = Tpos[pos2];
        Tpos[pos2] = temp;
    }

    // Affichage des positions finales
    printf("Positions finales :\n");
    for (k = 0; k < n; k++) {
        printf("%d\n", Tpos[k]);
    }

    return 0;
}



/*
Vous commencez à être connu pour vos talents de programmeur, aussi lors de votre passage dans la ville d'Incerto, le maire décide de vous inviter au grand banquet qu'il organise. Le maire se charge lui-même de faire le plan de table mais il change toujours d'avis et les serveurs doivent constamment changer de place les petites affiches sur lesquelles sont indiqués les noms des personnes.

Afin de l'aider, vous lui proposez d'utiliser votre robot pour déterminer la position de chaque personne après tous les changements décidés par le maire.

Afin de simplifier le problème, on suppose que chaque personne est identifiée par un numéro et qu'il n'y a qu'une seule très grande table.

Ce que doit faire votre programme :
Votre programme devra lire deux entiers : le nombre total de positions sur la table (au maximum 1000) et le nombre de changements de positions. Il devra ensuite lire, pour chaque position, un entier : le numéro de la personne qui doit, actuellement, s'installer à cette position.

Il faut lire ensuite les changements exprimés sous la forme de deux entiers chacun : position1 et position2. Un changement (position1, position2) signifie que les deux personnes qui étaient à ses positions doivent échanger leurs places (les positions sont indexées à partir de 0).

Vous devrez afficher, pour chaque position, le numéro de la personne qui s'y trouve une fois tous les changements faits.

EXAMPLE
input:

5
3
1
2
3
4
5
1
2
1
3
4
0
output:

5
4
2
3
1
COMMENTS
Evolution des numéros dans l'exemple :

Au début : 1,2,3,4,5
Après le changement (1, 2) : 1,3,2,4,5
Après le changement (1, 3) : 1,4,2,3,5
Après le changement (4, 0) : 5,4,2,3,1
*/
