/******************************************/
#include<stdio.h>
#include<stdlib.h>

#define largeur 800
#define hauteur 600

/* variable globale du programme */
char image[largeur][hauteur];  /* representation de notre image */

/* nos fonctions */
/************************** point description *******************/
/* point(x,y)  , place un point sur l'image a la coordonnée x,y */
/* retourne 0 si ok 1 sinon                                     */
/****************************************************************/
int point(int x,int y)
{
	/* on teste si nous sommes bien dans le tableau sinon on retourne 1 */
	if ((x<0) || (x>=largeur))
	{
		fprintf(stderr,"On sort de l'image !\n");
		return EXIT_FAILURE;
	}
	if ((y<0) || (y>=hauteur))
	{
                fprintf(stderr,"On sort de l'image !\n");
                return EXIT_FAILURE;
    }
	image[x][y]='1';
	return EXIT_SUCCESS;
}


/***************** La fonction principale **********************/
int main()
{

       int x,y;
/* remplir le tableau de '0' pour faire une image blanche    */
       for (y=0; y <hauteur ; y++) /* pour toutes les lignes */
           for (x=0; x<largeur ; x++) /* pour chaque colonnes */
                image[x][y]='0';     /* mettre un pixel blanc */

/* on place un point sur l'image coordonnées 320,456 */
point(320,456); /* on utilise notre premiere fonction pour faire un test unitaire*/

/* on place un point sur l'image coordonnées 501,322 pour tester */
point(501,322);

/*Afficher l'image Pbm en ASCII*/
/* en tete de l'image */
printf("P1\n");
/* pas de commentaire dans notre fichier pbm */
/* on donne les coordonnées en décimal dans l’entête */
printf("%d %d\n",largeur,hauteur);
/* on place tous les pixels */
       for (y=0; y <hauteur ; y++) /* pour toutes les lignes */
           for (x=0; x<largeur ; x++) /* pour chaque colonnes */
                printf ("%c \n",image[x][y]);
return EXIT_SUCCESS;
}

/*  faire un fichier pbm avec ce qui s'affiche */
/* ./bitmap > bitmap.pbm  */
