#include <stdio.h>
#include <stdlib.h>

struct Map {
  int key;
  char *value;
};

char	*ft_strnew(size_t size)
{
	return (char *)malloc(sizeof(char) * size);
}

static size_t	ft_get_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	tmp;

	len = ft_get_len(n);
	tmp = n;
	if (n < 0)
	{
		tmp = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = tmp % 10 + '0';
	while (tmp /= 10)
		str[--len] = tmp % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}

int main()
{
    int lista1[6];
    lista1[0] = 1;
    lista1[1] = 2;
    lista1[2] = 4;
    lista1[3] = 5;
    lista1[4] = 7;
    lista1[5] = 8;
    int lista2[5];
    lista2[0] = 1;
    lista2[1] = 2;
    lista2[2] = 5;
    lista2[3] = 6;
    lista2[4] = NULL;
    
    int i = 0;
    struct Map myMap[255];
    
    int j = 0;
    while (lista2[j]) {
        printf("%d ", lista2[j]);
        j++;
    }
    
    
    while (lista1[i]) {
        myMap[i].key = lista1[i];
        if (lista2[i]) {
            myMap[i].value = ft_itoa(lista2[i]);
        } else {
            myMap[i].value = "None";
        } 
        i++;
    }

    printf("%c\n", '{');
    for (int j = 0; j < i; j++) {
        printf("%d : %s \n", myMap[j].key, myMap[j].value);
    }
    printf("%c\n", '}');

    return 0;
}
