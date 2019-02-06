    
int     main()
{
    int     fd;
    char    *line;

    fd = open("la_classe_americaine.txt", O_RDONLY);

    int ret;
    while((ret = get_next_line(fd, &line)) > 0) {
        printf("%s\n", line);
        printf("%d\n", ret);
        free(line);
    }
}