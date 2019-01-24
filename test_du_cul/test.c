#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "libft.h"

int		main()
{
	int fd;

	fd = open("tryme", O_RDONLY);
	ft_putnbr(fd);
	return(0);
}