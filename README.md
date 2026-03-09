# CPP_02

#	INFO

## Canonical Forme

-	Constructeur par défaut

-	Constructeur de recopie

-	Surcharge de l'opérateur d'assignation (=)

-	Destructeur

##	Ajouter STATIC dans une classe : 

 Une variable devient une donnée membre statique (elle n'appartient plus à l'objet, mais à la classe entière).

 Une fonction devient une fonction membre statique (elle peut être appelée sans créer d'objet).

##	Ajouter CONST

 Certifie que la donner transmise ne sera pas changer durant l'appel de la fonction membre.

##	Fixed point number

 La virgule fixe est une technique de représentation des nombres réels qui utilise un entier standard en dédiant une partie fixe de ses 	bits à la fraction. Contrairement à la virgule flottante, elle offre une précision constante et une performance accrue en s'appuyant uniquement sur l'arithmétique entière et les décalages de bits.

 ## Operator Overloading

 La surcharge d’opérateurs est une fonctionnalité du C++ qui permet de redéfinir le comportement des symboles standards (+, -, , <<, etc.) lorsqu'ils sont appliqués à des classes personnalisées. > Elle permet de traiter des objets complexes comme des types primitifs, rendant le code plus intuitif, plus lisible et parfaitement intégré aux outils de la bibliothèque standard

### Exemple 

-	Abstractions mathématiques : Permet d'écrire a + b au lieu de a.add(b), ce qui est vital pour une classe numérique comme Fixed.

-	Encapsulation : L'utilisateur de la classe manipule les objets sans avoir besoin de savoir comment les bits sont décalés à l'intérieur.

-	Chaînage : Grâce à la surcharge de <<, on peut afficher plusieurs objets à la suite dans un seul flux, comme avec des variables classiques