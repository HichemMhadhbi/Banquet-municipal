# Banquet municipal

## Description 
Vous commencez à être connu pour vos talents de programmeur, aussi lors de votre passage dans la ville d'Incerto, le maire décide de vous inviter au grand banquet qu'il organise. Le maire se charge lui-même de faire le plan de table mais il change toujours d'avis et les serveurs doivent constamment changer de place les petites affiches sur lesquelles sont indiqués les noms des personnes.

Afin de l'aider, vous lui proposez d'utiliser votre robot pour déterminer la position de chaque personne après tous les changements décidés par le maire.

Afin de simplifier le problème, on suppose que chaque personne est identifiée par un numéro et qu'il n'y a qu'une seule très grande table.

## Ce que doit faire votre programme :
Votre programme devra lire deux entiers : le nombre total de positions sur la table (au maximum 1000) et le nombre de changements de positions. Il devra ensuite lire, pour chaque position, un entier : le numéro de la personne qui doit, actuellement, s'installer à cette position.

Il faut lire ensuite les changements exprimés sous la forme de deux entiers chacun : position1 et position2. Un changement (position1, position2) signifie que les deux personnes qui étaient à ses positions doivent échanger leurs places (les positions sont indexées à partir de 0).

Vous devrez afficher, pour chaque position, le numéro de la personne qui s'y trouve une fois tous les changements faits.

### EXAMPLE

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
### COMMENTS
Evolution des numéros dans l'exemple :

Au début : 1,2,3,4,5
Après le changement (1, 2) : 1,3,2,4,5
Après le changement (1, 3) : 1,4,2,3,5
Après le changement (4, 0) : 5,4,2,3,1

## Exprilication de code : 

#### Lecture du Nombre Total de Positions :
do {
    scanf("%d", &n);
} while (n <= 0 || n > 1000);
* La boucle do-while assure que la valeur de n est valide (entre 1 et 1000 inclus).

#### Lecture du nombre de changements de positions m.
scanf("%d", &m);

#### Initialisation du Tableau des Positions :
int Tpos[n];
* Déclaration d'un tableau Tpos de taille n pour stocker les positions des personnes.

#### Lecture des Positions Initiales :
for (i = 0; i < n; i++) {
    scanf("%d", &Tpos[i]);
}
* Boucle pour lire les n positions initiales et les stocker dans le tableau Tpos.

#### Traitement des Changements de Positions :
for (j = 0; j < m; j++) {
    int pos1, pos2;
    scanf("%d %d", &pos1, &pos2);

    int temp = Tpos[pos1];
    Tpos[pos1] = Tpos[pos2];
    Tpos[pos2] = temp;
}
* Pour chaque changement, lire les indices pos1 et pos2.
* Échanger les valeurs aux indices pos1 et pos2 dans le tableau Tpos.

#### Affichage des Positions Finales :
for (k = 0; k < n; k++) {
    printf("%d\n", Tpos[k]);
}
* Boucle pour afficher chaque position finale sur une nouvelle ligne.
#### Résumé
Le programme lit les positions initiales des personnes, applique une série de changements en échangeant les positions spécifiées, puis affiche la configuration finale des positions. En s'assurant que chaque nombre est imprimé sur une nouvelle ligne, le programme respecte les exigences de sortie.
