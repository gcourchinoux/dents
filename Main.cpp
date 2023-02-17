// COPYRIGHT 2023 Gaspard COURCHINOUX all rights reserved

#include <iostream>

#define PI  3.14159265

#define max 100 // max 100 dents
#define min 15 // max 15 dents 

int random() {

	int randNum = rand() % (max - min + 1) + min;
//	std::cout << "rand" << randNum << std::endl;
	return randNum;


}



void printf_main_info() {
	
	std::cout << "Copyright 2023 , Gaspard COURCHINOUX Tous droits réservés " << std::endl;
	
	std::cout << "Toutes les dimensions sont exprimées en millimètres" << std::endl;
	
	
	}

unsigned long d  = 0; 
unsigned long da = 0; 
double df = 0; 
unsigned long ha = 0 ; 
double hf = 0 ; 
double p = 0; 
double s_e = 0;



void calculer(char**argv){
	
	unsigned long module = atol(argv[1]);
	unsigned long dents = atol(argv[2]);
	
	
	printf("juste pour confirmation , il y a  %ld  dents et module %ld \n",dents,module);
	
	
	printf("D (diametre) %lu en mm\n",module*dents);
	d = module*dents;
	printf("Da (diametre de tete) %lu en mm\n",module*dents+2);
	da = module*dents+2;
	printf("Df (diametre de pied) %f en mm\n",module*dents-2.5);
	df = module*dents-2.5;
	
	printf("Ha (hauteur de tete) %lu en mm\n",module);
	ha = module; 
	
		printf("Hf (hauteur de pied) %f en mm\n",1.25*module);
		hf = 1.2*module; 
		
		printf("P (pas linéaire) %f en mm\n",module*PI);
		p = module*PI;
		printf("S=E (épaisseur de dent = largeur du vide) %f en mm\n",module*PI/2);
		s_e = module*PI/2;
	}

int main(int argc,char**argv) {
	
	printf_main_info();
	
	if(argc < 2) {
		
		std::cout << "USAGE : " << "./dents  [MODULE] [NOMBRE_DE_DENTS]" << std::endl;
		exit(1);
		
		}
	
	calculer(argv);
	
	
	
	
	
	}





