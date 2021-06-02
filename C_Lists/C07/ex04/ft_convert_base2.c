int	ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' ||
		str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
int	ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}
int	ft_intlen(int num)
{
	int size;

	size = 0;
	if (num < 0)
		num = num * (-1);
	if (num < 10 && num > 0)
		return(1);
	while(num != 0)
	{
		size++;
		num = num / 10;
	}
	return(size);
}
char *ft_itoa(int numb, char *result)
{
    char num_char;
    int num_int;
    int i;
    int j;
    i = 0;
    if (numb == -2147483648)
        return("-2147483648");
    if (numb < 0)
        numb = numb * -1;
    j = ft_intlen(numb) - 1;
    while (numb > 0)
    {
        num_int = numb % 10;
        result[i] = num_int +'0';
        numb /= 10;
        i++;
    }
    result[i] = '\0';
    i = 0;
    while (i < j)
    {
        num_char = result[i];
        result[i] = result[j];
        result[j] =  num_char;
        i++;
        j--;
    }
    return(result);
}
