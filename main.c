#include "get_next_line.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int		fd;
	int		ret_value;
	char	*line;
    int     let;

	line = NULL;
	fd = open(av[1], O_RDONLY);
	if (ac > 1)
	if (fd == -1)
		return (-1);
	ret_value = 1;
    let = 0;
	while (ret_value == 1)
	{
		ret_value = get_next_line(fd, &line);
		printf("%d    #%d   |>>| %s\n", ret_value ,let , line);
        let++;
		ft_strdel(&line);
	}
	close(fd);
	return (0);
}