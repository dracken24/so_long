Partie obligatoire
 Nom du pro- gramme
Fichiers de rendu Makefile Arguments
so_long
Makefile, *.h, *.c, quelques cartes NAME, all, clean, fclean, re
Une carte au format *.ber
   
Fonctions ex- ternes autorisées
• open, close, read, write, malloc, free, perror, strerror, exit
• Toutes les fonctions de la bibliothèque mathématique (option de compilation -lm, man man 3 math)
• Toutes les fonctions de la MiniLibX
• ft_printf et tout équivalent que VOUS avez codé
Libft autorisée
Oui

Description
Vous devez créer un jeu 2D basique dans lequel un dauphin s’échappe de la planète Terre après avoir mangé du poisson. Au lieu d’un dauphin, de poisson et de la Terre, vous pouvez utiliser le personnage, les items et le décor de votre choix.
Votre projet doit respecter les règles suivantes :
• Vous devez utiliser la MiniLibX. Soit la version disponible sur les machines de l’école, soit en l’installant par les sources.
• Vous devez rendre un Makefile qui compilera vos fichiers sources. Il ne doit pas relink.
• Votre programme doit prendre en paramètre un fichier de carte se terminant par l’extension .ber.

5
So Long Et merci pour le poisson !
IV.1 Le jeu
• Le but du joueur est de collecter tous les items présents sur la carte, puis de s’échapper en empruntant le chemin le plus court possible.
• Les touches W, A, S et D doivent être utilisées afin de mouvoir le personnage prin- cipal.
• Le joueur doit être capable de se déplacer dans ces 4 directions : haut, bas, gauche, droite.
• Le joueur ne doit pas pouvoir se déplacer dans les murs.
• À chaque mouvement, le compte total de mouvement doit être affiché dans le
shell.
• Vous devez utiliser une vue 2D (vue de haut ou de profil).
• Le jeu n’a pas à être en temps réel.
• Bien que les exemples donnés montrent un thème dauphin, vous êtes libre de créer l’univers que vous voulez.
IV.2 Gestion graphique
• Votre programme doit afficher une image dans une fenêtre.
• La gestion de la fenêtre doit rester fluide (changer de fenêtre, la réduire, etc.).
• Appuyer sur la touche ESC doit fermer la fenêtre et quitter le programme propre- ment.
• Cliquersurlacroixenhautdelafenêtredoitfermercelle-cietquitterleprogramme proprement.
• Utiliser les images de la MiniLibX est obligatoire.

6
So Long Et merci pour le poisson !
IV.3 La carte
• La carte sera construite en utilisant 3 éléments : les murs, les items à collecter,
et l’espace vide.
• Votre carte peut être composée de ces 5 caractères : 0 pour un emplacement vide,
1 pour un mur,
C pour un item à collecter (C pour collectible),
E pour une sortie (E pour exit),
P pour la position de départ du personnage.
Exemple de carte basique :
• La carte doit contenir au moins 1 sortie, 1 item et 1 position de départ.
• La carte doit être de forme rectangulaire.
• La carte doit être fermée en étant encadrée par des murs. Si ce n’est pas le cas, le programme retourne une erreur.
• Vous n’avez pas à vérifier s’il existe un chemin valide (i.e. qu’il est possible d’em- prunter) dans la carte.
• Vous devez pouvoir parser tout type de carte du moment qu’elle respecte les règles énoncées ci-dessus.
• Un autre exemple de carte .ber basique :
• Si une erreur de configuration est détectée, le programme doit quitter proprement et retourner "Error\n" suivi d’un message d’erreur explicite de votre choix.

    1111111111111
    10010000000C1
    1000011111001
    1P0011E000001
    1111111111111

    1111111111111111111111111111111111
    1E0000000000000C00000C000000000001
    1010010100100000101001000000010101
    1010010010101010001001000000010101
    1P0000000C00C0000000000000000000C1
    1111111111111111111111111111111111

01PCEB

7
Chapitre V Partie bonus
Habituellement, vous seriez encouragé(e) à développer vos propres bonus. Cependant, d’autres projets graphiques plus intéressants sont à venir. Ils vous attendent déjà! Ne perdez pas de temps !
Du moment que vous justifiez leur utilisation en évaluation, vous avez le droit d’uti- liser des fonctions supplémentaires afin de faire la partie bonus. Soyez malins !
Vous aurez des points supplémentaires si :
• Le joueur peut perdre si son personnage est touché par une patrouille ennemie.
• Vous ajoutez des sprite animations.
• Le compte total de mouvement est directement affiché sur l’écran dans la fenêtre plutôt que dans le shell.
  Les bonus ne seront évalués que si la partie obligatoire est PARFAITE. Par parfaite, nous entendons complète et sans aucun dysfonctionnement. Si vous n’avez pas réussi TOUS les points de la partie obligatoire, votre partie bonus ne sera pas prise en compte.
