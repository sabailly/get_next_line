Friendly reminder 

/*
** PART I FUNCTIONS
*/

int		ft_atoi(const char *str);
// ATOI convertis la string pointée par str en int.

int		ft_isalnum(int c);
// ISALNUM check si le caractère passé en paramètre est un chiffre ou une lettre (ISALPHA ou ISDIGIT == TRUE).

int		ft_isalpha(int c);
// ISALPHA check si le caractère passé en paramètre est une lettre, compris entre 65 - 90 et 97 - 122 (ISUPPER ou ISLOWER == TRUE).

int		ft_isascii(int c);
// ISASCII check si le caractère fait partie de la table ASCII.

int		ft_isdigit(int c);
// ISDIGIT check si le caractère est un chiffre, compris entre 48 - 57.
int		ft_isprint(int c);
// ISPRINT check si le caractère est printable (" " compris) compris entre 32 - 126.

void	*ft_memcpy(void *dst, const void *src, size_t n);
// MEMCPY copie n octets de la zone mémoire src à la zone mémoire dst. 
// Si src et dst se chevauchent, utiliser MEMMOVE. 

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
// MEMCCPY copie n octets de src à dst et s'arrête dès qu'elle rencontre le caractère c. 

// RENVOIE n pointeur sur le caractère juste après c dans la zone dest, ou NULL si c n'a pas été trouvé dans les n premiers caractères de src.

void	*ft_memset(void *str, int c, size_t len);
// MEMSET remplit les n premiers octets de la zone mémoire pointée par s avec l'octet c. 

// RENVOIE un ponteur vers la zone mémoire s.

void	*ft_memchr(const void *s, int c, size_t n);
// MEMCHR examine les n premiers octets de la zone mémoire pointée par s à la recherche du caractère c. Le premier octet correspondant à c arrête l'opération.

// RENVOIE un pointeur sur l'octet correspondant, ou NULL si le caractère n'est pas présent dans la zone de mémoire concernée.

void	*ft_memmove(void *dst, const void *src, size_t len);
// MEMMOVE copie n octets depuis la zone mémoire src vers la zone mémoire dest. Les deux zones peuvent se chevaucher.
// La copie se passe comme si les octets de src étaient d'abord copiés dans une zone temporaire qui ne chevauche ni src ni dest, 
// et les octets sont ensuite copiés de la zone temporaire vers dest.

// RENVOIE un pointeur sur dest.  

int		ft_memcmp(const void *s1, const void *s2, size_t n);
// MEMCMP compare les n premiers octets des zones mémoire s1 et s2.

// RENVOIE un entier négatif, nul ou positif si les n premiers octets de s1 sont respectivement inférieurs, égaux ou supérieurs aux n premiers octets de s2.  

int		ft_strcmp(const char *s1, const char *s2);
// STRCMP compare les deux chaînes s1 et s2. 

// RENVOIE un entier négatif, nul, ou positif, si s1 est respectivement inférieure, égale ou supérieure à s2.

int		ft_strncmp(const char *s1, const char *s2, size_t n);
// STRNCMP est identique sauf qu'elle ne compare que les n (au plus) premiers caractères de s1 et s2.

// RENVOIE comme strcmp.

char	*ft_strcpy(char *dest, char *src);
// STRCPY copie la chaîne pointée par src (y compris l'octet nul « \0 » final) dans la chaîne pointée par dest. 
// Les deux chaînes ne doivent pas se chevaucher. La chaîne dest doit être assez grande pour accueillir la copie.

// RENVOIE un pointeur sur la chaîne destination dest.

char	*ft_strncpy(char *dest, const char *src, unsigned int n);
// STRNCPY est identique, sauf que seuls les n premiers octets de src sont copiés. 
// Avertissement : s'il n'y a pas d'octet nul dans les n premiers octets de src, la chaîne résultante dans dest ne disposera pas d'octet nul final.
// Dans le cas où la longueur de src est inférieure à n, la fin de dest sera remplie avec des octets nuls.

// RENVOIE un pointeur sur la chaîne destination dest.

char	*ft_strcat(char *dest, const char *src);
// STRCAT ajoute la chaîne src à la fin de la chaîne dest en écrasant le caractère nul (« \0 ») à la fin de dest, puis en ajoutant un nouveau caractère nul final. 
// Les chaînes ne doivent pas se chevaucher, et la chaîne dest doit être assez grande pour accueillir le résultat.

// RENVOIE un pointeur sur la chaîne résultat dest.  

char	*ft_strncat(char *dest, const char *src, size_t nb);
// STRNCAT est identique, à la différence qu'elle ne prend en compte que les n premiers caractères de src; et src n'a pas besoin d'octet nul final si elle contient n caractères ou plus.
// Comme pour strcat(), la chaîne résultante dans dest est toujours terminée par un caractère nul. 
// Si src contient n caractères ou plus, strncat() écrit n+1 caractères dans dest (n caractères de src plus l'octet nul final). 
// Aussi, la taille de dest doit être au moins strlen(dest)+n+1.

// RENVOIE un pointeur sur la chaîne résultat dest.  


char	*ft_strdup(const char *src);
// STRDUP renvoie un pointeur sur une nouvelle chaîne de caractères qui est dupliquée depuis s. 
// La mémoire occupée par cette nouvelle chaîne est obtenue en appelant malloc(3), et peut (doit) donc être libérée avec free(3).

// RENVOIE un pointeur sur la chaîne dupliquée, ou NULL s'il n'y avait pas assez de mémoire.  

char	*ft_strstr(const char *str, char *needle);
// STRSTR cherche la première occurrence de la sous-chaîne needle au sein de la chaîne str. Les caractères « \0 » de fin ne sont pas comparés.

// RENVOIE un pointeur sur le début de la sous-chaîne, ou NULL si celle-ci n'est pas trouvée.  

char	*ft_strnstr(const char *str, const char *needle, size_t len);
// STRNSTR cherche la premiere occurence de la sous-chaîne needle au sein de la  chaîne str.
// Les caractères '\0' de fin ne sont pas comparés.

char	*ft_strchr(const char *s, int c);
// STRCHR renvoie un pointeur sur la première occurrence du caractère c dans la chaîne s.

// RENVOIE un pointeur sur le caractère correspondant, ou NULL si le caractère n'a pas été trouvé.

char	*ft_strrchr(const char*s, int c);
// STRRCHR un pointeur sur la dernière occurrence du caractère c dans la chaîne s.

// RENVOIE un pointeur sur le caractère correspondant, ou NULL si le caractère n'a pas été trouvé.

size_t	ft_strlen(const char *str);
// STRLEN calcule la longueur de la chaîne de caractères s, sans compter l'octet nul « \0 » final.  

// RENVOIE le nombre de caractères s, sans compter le '\0'.

size_t	ft_strlcat(char *dst, const char *src, size_t size);
// STRLCAT 

int		ft_tolower(int c);
// TOLOWER convertit le catactère c en minuscule si c'est possible.

int		ft_toupper(int c);
// TOUPPER convertit le caractère c en majuscule si c'est pos­sible.



/*
** PART II FUNCTIONS
*/



void	ft_putchar(char c);
// PUTCHAR Affiche le caractère c sur la sortie standard.

void	ft_putendl(char *str);
// PUTENDL affiche la chaîne s sur la sortie standard suivi d’un ’\n’.

void	ft_putnbr(int nb);
// PUTNBR affiche l’entier n sur la sortie standard.

void	ft_putstr(const char *str);
// PUTSTR affiche la chaîne s sur la sortie standard.

void	ft_putchar_fd(char c, int fd);
// PUTCHAR_FD écrit le caractère c sur le descripteur de fichier fd.

void	ft_putstr_fd(const char *s, int fd);
// PUTSTR_FD écrit la chaîne s sur le descripteur de fichier fd.

void	ft_putnbr_fd(int n, int fd);
// PUTNBR_FD écrit l’entier n sur le descripteur de fichier fd.

void	ft_putendl_fd(char const *str, int fd);
// PUTENDL_FD écrit la chaîne s sur le descripteur de fichier fd suivi d’un ’\n’.

void	ft_strclr(char *str);
// STRCLR assigne la valeur ’\0’ à tous les caractères de la chaîne passée en paramètre.

void	*ft_memalloc(size_t size);
// MEMALlOC alloue (avec malloc(3)) et retourne une zone de mémoire “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation échoue, la fonction renvoie NULL.

// RENVOIE la zone de mémoire allouée.

void	ft_memdel(void **ap);
// MEMDEL prend en paramètre l’adresse d’un pointeur dont la zone pointée doit être libérée avec free(3), puis le pointeur est mis à NULL.

char 	*ft_strnew(size_t size);
//STRNEW alloue (avec malloc(3)) et retourne une chaîne de caractère “fraiche” terminée par un ’\0’. Chaque caractère de la chaîne est initialisé à ’\0’. 
// Si l’allocation echoue, la fonction renvoie NULL

//RENVOIE la chaîne de caractères allouée et initialisée à 0.

void	ft_strdel(char **as);
// STRDEL prend en paramètre l’adresse d’une chaîne de caractères qui doit être libérée avec free(3) et son pointeur mis à NULL.

void 	ft_strclr(char *s);
// STRCLR assigne la valeur ’\0’ à tous les caractères de la chaîne passée en paramètre.

void	ft_striter(char *s, void (*f)(char *));
// STRITER applique la fonction f à chaque caractère de la chaîne de caractères passée en paramètre. 
// Chaque caractère est passé par adresse à la fonction f afin de pouvoir être modifié si nécessaire.

void	ft_striteri(char *s, void (*f)(unsigned int, char *));
// STRITERI applique la fonction f à chaque caractère de la chaîne de caractères passée en paramètre en précisant son index en premier argument. 
// Chaque caractère est passé par adresse à la fonction f afin de pouvoir être modifié si nécessaire.

char 	*ft_strmap(char const *s, char (*f)(char));
// Applique la fonction f à chaque caractère de la chaîne de caractères passée en paramètre pour créer une nouvelle chaîne “fraiche” (avec malloc(3)) 
// résultant des applications successives de f.

// RENVOIE la chaîne “fraiche” résultant des applications successives de f.

char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// STRMAPI applique la fonction f à chaque caractère de la chaîne de caractères passée en paramètre
// en précisant son index pour créer une nouvelle chaîne “fraiche” (avec malloc(3)) résultant des applications successives de f.

// RENVOIE La chaîne “fraiche” résultant des applications successives de f.

int 	ft_strequ(char const *s1, char const *s2);
// STREQU compare lexicographiquement s1 et s2. Si les deux chaînes sont égales, la fonction retourne 1, ou 0 sinon.

// RENVOIE 1 ou 0 selon que les deux chaînes sont égales ou non.

int 	ft_strnequ(char const *s1, char const *s2, size_t n);
// STRNEQU compare lexicographiquement s1 et s2 jusqu’à n caractères maximum ou bien qu’un ’\0’ ait été rencontré. 
// Si les deux chaînes sont égales, la fonction retourne 1, ou 0 sinon.

// RENVOIE 1 ou 0 selon que les deux chaînes sont égales ou non.

char 	*ft_strsub(char const *s, unsigned int start, size_t len);
// STRSUB alloue (avec malloc(3)) et retourne la copie “fraiche” d’un tronçon de la chaîne de caractères passée en paramètre. 
// Le tronçon commence à l’index start et a pour longueur len. 
// Si start et len ne désignent pas un tronçon de chaîne valide, le comportement est indéterminé. Si l’allocation échoue, la fonction renvoie NULL.

// RENVOIE le tronçon.

char 	*ft_strjoin(char const *s1, char const *s2);
// Alloue (avec malloc(3)) et retourne une chaîne de caractères “fraiche” terminée par un ’\0’ résultant de la concaténation de s1 et s2. 
// Si l’allocation echoue, la fonction renvoie NULL.

// RENVOIE la chaîne de caractère “fraiche” résultant de la concaténation des deux chaînes.

char 	*ft_strtrim(char const *s);
// STRTRIM Alloue (avec malloc(3)) et retourne une copie de la chaîne passée en paramètre sans les espaces blancs au debut et à la fin de cette chaîne. 
// On considère comme espaces blancs les caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces blancs au début ou à la fin, la fonction renvoie une copie de s. 
// Si l’allocation echoue, la fonction renvoie NULL.

// RENVOIE La chaîne de caractère “fraiche” trimmée ou bien une copie de s sinon.

char 	**ft_strsplit(char const *s, char c);
// STRSPLIT alloue (avec malloc(3)) et retourne un tableau de chaînes de caractères “fraiches” (toutes terminées par un ’\0’, 
// le tableau également donc) résultant de la découpe de s selon le caractère c. 
// Si l’allocation echoue, la fonction retourne NULL. 
// Exemple : ft_strsplit("*salut*les***etudiants*", ’*’) renvoie le tableau ["salut", "les", "etudiants"].

// Le tableau de chaînes de caractères “fraiches” résultant de la découpe.

char 	*ft_itoa(int n);
// ITOA alloue (avec malloc(3)) et retourne une chaîne de caractères “fraiche” terminée par un ’\0’ représentant l’entier n passé en paramètre. 
// Les nombres négatifs doivent être gérés. Si l’allocation échoue, la fonction renvoie NULL.

// RETOURNE la chaîne de caractères représentant l’entier passé en paramètre.


/*
** PART III FUNCTIONS
*/

t_list	*ft_lstnew(void const *content, size_t content_size);
// LSTNEW alloue (avec malloc(3)) et retourne un maillon “frais”. 
// Les champs content et content_size du nouveau maillon sont initialisés par copie des paramètres de la fonction. 
// Si le paramètre content est nul, le champs content est initialisé à NULL et 
// le champs content_size est initialisé à 0 quelque soit la valeur du paramètre content_size. Le champ next
// est initialisé à NULL. 
// Si l’allocation échoue, la fonction renvoie NULL.

void 	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
// LSTDELONE prend en paramètre l’adresse d’un pointeur sur un maillon et libère la mémoire du contenu de ce maillon avec la fonction del 
// passée en paramètre puis libère la mémoire du maillon en lui même avec free(3). 
// La mémoire du champ next ne doit en aucun cas être libérée. Pour terminer, le pointeur sur le maillon maintenant libéré doit être mis à NULL 
// (de manière similaire à la fonction ft_memdel de la partie obligatoire).

void ft_lstdel(t_list **alst, void (*del)(void *, size_t));
// LSTDEL prend en paramètre l’adresse d’un pointeur sur un maillon et libère la mémoire de ce maillon et celle de tous ses successeurs 
// l’un après l’autre avec del et free(3). 
// Pour terminer, le pointeur sur le premier maillon maintenant libéré doit être mis à NULL 
// (de manière similaire à la fonction ft_memdel de la partie obligatoire).

void ft_lstadd(t_list **alst, t_list *new);
// LSTADD ajoute l’élément new en tête de la liste.

void ft_lstiter(t_list *lst, void (*f)(t_list *elem));
// LSTITER parcourt la liste lst en appliquant à chaque maillon la fonction f.

t_list * ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));
// LSTMAP Parcourt la liste lst en appliquant à chaque maillon la fonction f et crée une nouvelle liste “fraiche” avec malloc(3) 
// résultant des applications successives. Si une allocation échoue, la fonction renvoie NULL.

// RETOURNE La nouvelle liste 


/*
** ADDITIONAL FUNCTIONS
*/






















































