# MINISHELL


# BUT
- Afficher un prompt en l’attente d’une nouvelle commande.
- Posséder un historique fonctionnel.
- Chercher et lancer le bon exécutable (en se basant sur la variable d’environnement
PATH, ou sur un chemin relatif ou absolu).
- Ne pas utiliser plus d’une variable globale. Réfléchissez-y car vous devrez justifier son utilisation.
- Ne pas interpréter de quotes (guillemets) non fermés ou de caractères spéciaux non
  demandés dans le sujet, tels que \ (le backslash) ou ; (le point-virgule).
- Gérer ’ (single quote) qui doit empêcher le shell d’interpréter les méta-caractères
  présents dans la séquence entre guillemets.
- Gérer " (double quote) qui doit empêcher le shell d’interpréter les méta-caractères
  présents dans la séquence entre guillemets sauf le $ (signe dollar).
- Implémenter les redirections :
  -  [ < ] doit rediriger l’entrée.
  -  [ > ] doit rediriger la sortie.
  -  [ << ] doit recevoir un délimiteur et lire l’input donné jusqu’à rencontrer une ligne
       contenant le délimiteur. Cependant, l’historique n’a pas à être mis à jour !
  -  [ >> ] doit rediriger la sortie en mode append.
- Implémenter les pipes (caractère |). La sortie de chaque commande de la pipeline
  est connectée à l’entrée de la commande suivante grâce à un pipe.
- Gérer les variables d’environnement (un $ suivi d’une séquence de caractères)
  qui doivent être substituées par leur contenu.
- Gérer $? qui doit être substitué par le statut de sortie de la dernière pipeline
  exécutée au premier plan.
- Gérer ctrl-C, ctrl-D et ctrl-\ qui doivent fonctionner comme dans bash.
- En mode interactif :
  - ctrl-C affiche un nouveau prompt sur une nouvelle ligne.
  - ctrl-D quitte le shell.
  - ctrl-\ ne fait rien.
- Votre shell doit implémenter les builtins suivantes :
  - echo et l’option -n
  - cd uniquement avec un chemin relatif ou absolu
  - pwd sans aucune option
  - export sans aucune option
  - unset sans aucune option
  - env sans aucune option ni argument
  - exit sans aucune option
  ## Les builtins en détails.
  1. `echo` : Cette commande imprime ses arguments à l'écran. Elle prend également en charge quelques options, comme `-n` qui supprime le saut de ligne final.
  2. `cd` : Change le répertoire courant. Sans argument, il se déplace vers le répertoire spécifié dans la variable d'environnement `HOME`. Avec un argument, il tente de se déplacer vers le répertoire spécifié.
  3. `pwd` : Affiche le répertoire de travail actuel. 
  4. `export` : Utilisée pour définir ou modifier les variables d'environnement. Avec aucun argument, elle liste toutes les variables d'environnement.
  5. `unset` : Supprime une variable d'environnement. 
  6. `env` : Sans arguments, il affiche toutes les variables d'environnement. Avec des arguments, il peut être utilisé pour exécuter une commande dans un environnement modifié.
  7. `exit` : Termine le shell. Elle accepte un argument optionnel qui spécifie le code de sortie.

# Fonctions autorisées 
## Gestion de la mémoire
|malloc
|free
## Gestion des erreurs
|strerror
|perror
## Autres      
|printf
|exit
|getenv
## Bibliothèque readline (readline/readline.h, readline/history.h)
|readline
|rl_clear_history
|rl_on_new_line
|rl_replace_line
|rl_redisplay
|add_history
## Bibliothèque de gestion des processus (unistd.h, sys/wait.h)
|fork
|wait
|wait3
|wait4
|kill
|execve
## Bibliothèque de gestion des signaux (signal.h)
|signal
|sigaction
|sigemptyset
|sigaddset
## Bibliothèque de gestion des fichiers et répertoires (fcntl.h, unistd.h, sys/stat.h, dirent.h)
|write
|access
|open
|read
|close
|getcwd
|chdir
|stat
|lstat
|fstat
|unlink
|dup
|dup2
|pipe
|opendir
|readdir
|closedir
## Bibliothèque de gestion des terminaux (termios.h, unistd.h, libgen.h)
|isatty
|ttyname
|ttyslot
|ioctl
|tcsetattr
|tcgetattr
|tgetent
|tgetflag
|tgetnum
|tgetstr
|tgoto
|tputs