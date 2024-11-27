# Libft

**Libft** est un projet de l'école 42 qui consiste à créer une bibliothèque personnelle de fonctions en C. Cette bibliothèque contient des fonctions couramment utilisées, permettant de faciliter les futurs projets.

---

## 📝 Description du Projet

L'objectif principal est de recoder des fonctions de la bibliothèque standard C (`libc`) et d'ajouter des fonctions supplémentaires pour répondre à des besoins spécifiques. Cela inclut des fonctions de manipulation de chaînes et de gestion de mémoire.

#### 🔑 Notions Clés

- Allocation mémoire dynamique (`malloc`, `free`).
- Manipulation des chaînes de caractères et des buffers.
- Structuration modulaire avec des fichiers `.c` et `.h`.
- Création et gestion de listes chaînées.
- Respect des normes de codage imposées par l'école 42.
- Utilisation d'outils comme `Makefile` pour la gestion de la compilation.

---

## 📋 Structure du Projet

### 1. Partie Obligatoire

#### Fonctions de la libc

Ces fonctions recodées respectent le prototype et le comportement des originales, avec un préfixe `ft_` :

- **Gestion de caractères** :  
  `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.

- **Gestion de chaînes** :  
  `ft_strlen`, `ft_strncmp`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strdup`.

- **Gestion de mémoire** :  
  `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.

- **Conversion** :  
  `ft_atoi`, `ft_toupper`, `ft_tolower`.

- **Allocation dynamique** :  
  `ft_calloc`, `ft_strdup`.

#### Fonctions Supplémentaires

Fonctions absentes de la libc mais très utiles, comme :

- `ft_substr` : Extraction d'une sous-chaîne.
- `ft_strjoin` : Concaténation de chaînes.
- `ft_strtrim` : Suppression de caractères au début et à la fin d'une chaîne.
- `ft_split` : Découpage de chaîne selon un délimiteur.
- `ft_itoa` : Conversion d'un entier en chaîne.
- `ft_strmapi` : Application d'une fonction à chaque caractère d'une chaîne.
- `ft_striteri` : Application d'une fonction à chaque caractère avec son index.
- Fonctions pour écrire sur un descripteur de fichier :  
  `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

---

## ⚙️ Instructions d'Utilisation

1. **Cloner le repo** :  
   ```bash
   git clone <URL-du-dépôt>
   cd libft
   ```


2. **Compiler le projet**
   ```bash
   make
   ```

 3. **Le projet ne contient pas de fichier executable mais toutes les fonctions peuvent être testées grace au testeur [Francinette](https://github.com/xicodomingues/francinette.git)**

---

## 🛠️ Rendu

- Tous les fichiers (sources et en-têtes) doivent être à la racine du dépôt.
- Le Makefile fourni doit respecter les règles suivantes :
  - `make` : Compile la bibliothèque et l'exécutable si applicable.
  - `make clean` : Supprime les fichiers objets.
  - `make fclean` : Supprime les fichiers objets et la bibliothèque/exécutable.
  - `make re` : Recompile tout depuis le début.

---

## 📜 Licence

Ce projet est soumis aux règles de l'école 42.
