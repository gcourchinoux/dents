# objet du présent programme 

Plus d'informations [ici](https://gaspard.courchinoux.org/wiki?name=Dents&p)

Ce programme permet de calculer les dents à developpante du cercle d'un engrenage. 

Il se destine à une application pour l'horlogerie en priorité. 

il permet de calculer un diamétre avec seulement un module et un nombre de dents. 

Plus tard, j'aimerai générer des fichiers dwg pour directement importer dans solidworks et catia. 


# Compilation



ce programme utilise le générateur CMAKE permettant de générer des solutions visual studio ou Makefile pour compiler le programme. 



## pour windows 


Pour windows , il faut visual studio 2022 avec visual c++. 



Ensuite aller à la racine des dossiers : 

```

mkdir build 
cd build
cmake ..

```

Ensuite , double cliquer sur la nom de la solution et générer le code objet. 

Un fichier executable sera disponible. 



## pour unix


Pour les systèmes unix (linux,macos, *bsd) ,le procédé est moins couteux en terme d'espace disque. 


Il faut un compilateur (gcc et llvm font l'affaire). 


Consulter le site de la distribution linux ou bsd pour installer un compilateur. 


Généralement gcc/g++ sera installé sous linux tandis que sur *bsd/macos cela sera llvm. 


Je préfére llvm. Mais la compilation devrait fonctionner sous g++. 


```

cd [SOURCE] 
mkdir build 
cd build 
cmake .. 
make

```


Un executable sera produit. 

# usage : 

```
./dents [MODULE] [NOMBRE_DE_DENTS]
```

# TODO 


* brute force pour trouver des configurations. On donne juste une alternance par heure , un module , le système trouve. 
* DWG

