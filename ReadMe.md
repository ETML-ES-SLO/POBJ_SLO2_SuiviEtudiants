# POBJ - Cours de programmation objet année 2024 - 2025 
## Infos Pratiques sur Git

### Créer un compte sur un serveur GIT 
pour l'ES nous utiliserons <span sytle="color: #FF0000">Github</span>
	
* => Pour gérer votre **propre dépôt** (local -> serveur)
	
	A. => sur votre machine (local) -> créez un **répertoire vide** (directory) où vous voulez 
	
	Conseil : placez sur le disque C: et créez-vous un répertoire de travail
	
	```
	// exemple sous windows 
	c:\mesDossierGit_XXX\monDepot_1 
	```
	B. => sur votre serveur Git, créer un **dépôt** (new repository) 
	
	C. => lier les deux *en ligne de commande* 
		* => ouvrir un **shell** 
		* => placez-vous dans votre répertoire vide créé précédemment :  
	
	```
	C: 
	> cd c:\mesDossierGit_XXX\monDepot_1 
	```

	D. => tapez les ligne de commande suivante : 	
	```
	git init
	git branch -M votreBranche (la "branch" principale est généralement nommée **main** ou **master**)
	git remote add origin https://github.com/nomUserGit/votreNomDepotGit.git
	```
	
	E. => pour mettre à jour votre dépôt distant -> placez-vous dans votre répertoire de travail local 
	```
	// exemple sous windows - répertoire de travail  
	C:
	> c:\mesDossierGit\monDepot 
	```
	
	* => 3 commandes à connaitre 
	
	```
	git add -A 
	git commit -m "votre commentaire" 	
	git push 
	```
* => vous voulez utiliser un dépôt distant (serveur) de quelqu'un (camarade par exemple) 
	
	A. => depuis le serveur -> "forker" le dépôt qui vous intéresse sur votre serveur 
	```
	FORK -> creat fork -> entrer les indications necéessaire -> nom de votre futur dépôt
	```
	
	B.  => sur votre machine (local) -> créez un **répertoire vide** où vous voulez 
	```
	// exemple sous windows 
	C: 
	> mkdir c:\mesDossierGit\monDepot_2 
	```
	
	C. => associez votre dépot (serveur) -> à votre dépôt local (machine) 
	```
	git clone https://github.com/nomUserGit/votreNomDepotGit.git
	``` 

*=> Vous pouvez aussi utiliser des clients git Graphique (Source Tree - Github Desktop - TortoiseGit - etc), 
prenez celui-qui vous convient 
	
## Suivi des exercices 
---

| Exercices \ Initial Etudiant | **[NBN](https://github.com/NicolasBessson)** | **[MBR](https://github.com/MathieuBucher)** | **[TCT](https://github.com/Tass1l0)** | **[ACL](https://github.com/Sweedy3960)** | **[EDO](https://github.com/etideoliveira)** | **[NEG](https://github.com/Larssno)** | **[VCO](https://github.com/kediven)** | **[LMS](https://github.com/LeoMendesEsEtml)** | **[MSI](https://github.com/MatteoStefanelli)** | 
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| UML | | | | | | | | | | 
| [Ex1](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex1_UML) | NOK | NOK | OK | OK | OK | NOK | NOK | NOK | OK |
| [PRJ UML](https://github.com/PBYetml/POBJ_TEST_UML_RESULT_24_25) | NOK | NOK | OK | OK | OK | NOK | NOK | NOK | OK |
| C++ | | | | | | | | | |
| [Ex1](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex2_ConversionC_Cpp) | NOK | NOK | NOK | NOK | OK | NOK | OK | NOK |  NOK |
| [Ex2](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex3_Fonctions_Cpp) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex3](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex4_ClassFigGeo_Cpp) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex4](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex5_RevisionClass1_Cpp) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex5](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex6_RevisionClass2_Cpp) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex6](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex7_ClassAffichageLCD_Cpp) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| C# | | | | | | | | | |
| [Ex1](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex2_ConversionC_CSharp) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex2](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex6_RevisionClass2_CSharp) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [6] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [7] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [8] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [9] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [10] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| JAVA | | | | | | | | | |
| [Ex2](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex2_ConversionC_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex3](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex3_Fonctions_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex4](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex4_ClassFigGeo_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex4 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex5 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex6 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex7 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex8 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex9 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 

## **UML**
### ***Exo1***
* donnee : exercice 1 - UML  
* voir chapitre théorique : UML -> Ch1, Ch2, Ch3
* etat d'avancement => voir [#22](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/22)

### ***PRJ UML - Correction***
* donnee : Test - Prj - UML  
* voir chapitre théorique : UML -> Ch1, Ch2, Ch3
* etat d'avancement => voir [#40](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/40)

## **C ++**
### ***Exo2*** 
* donnee : exercice 1 - C++
* voir chapitre théorique : C++ -> Ch2, Ch3
* etat d'avancement => voir [#28](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/28)

### ***Exo3***  
* donnee : exercice 2 - C++
* voir chapitre théorique : C++ -> Ch2, Ch3 
* etat d'avancement => voir [#29](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/29)

### ***Exo4***  
* donnee : exercice 3 - C++ 
* voir chapitre théorique : C++ -> Ch2, Ch3, Ch4, Ch5 
* etat d'avancement => voir [#34](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/34)

### ***Exo5*** 
* donnee : exercice 4 - C++
* voir chapitre théorique : C++ -> Ch2, Ch3, Ch4, Ch5 
* etat d'avancement => voir [#35](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/35)

### ***Exo6*** 
* donnee : exercice 5 - C++
* voir chapitre théorique : C++ -> Ch2, Ch3, Ch4, Ch5, Ch6 
* etat d'avancement => voir [#36](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/36)

### ***Exo7*** 
* donnee : exercice 6 - C++
* voir chapitre théorique : C++ -> Ch2, Ch3, Ch4, Ch5, Ch6 
* etat d'avancement => voir [#36](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/36)

### ***PRJ C++ - Correction***
* donnee : Test - Prj - C++ 
* voir chapitre théorique : C++ -> Ch2, Ch3, Ch4, Ch5, Ch6 
* etat d'avancement => voir []()

## **C#**
### ***Exo8*** 
* donnee : exercice 1 - C#
* voir chapitre théorique : C# -> Ch2 
* etat d'avancement => voir [#42](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/42)

### ***Exo9*** 
* donnee : exercice 1 - C#
* voir chapitre théorique : C# -> Ch2 
* etat d'avancement => voir [#42](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/42)








