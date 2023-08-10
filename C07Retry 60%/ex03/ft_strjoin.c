/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazari <inazari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:49:02 by inazari           #+#    #+#             */
/*   Updated: 2023/08/09 18:04:17 by inazari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(dest + i))
	{
		i++;
	}
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
	{
		size ++;
	}
	return (size);
}

char	*is_empty(void)
{
	char	*empty;

	empty = malloc(1);
	if (empty == NULL)
		return (NULL);
	empty[0] = '\0';
	return (empty);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_length;
	int		i;
	int		j;

	total_length = 0;
	i = 0;
	j = 0;
	if (size <= 0 || strs == NULL)
		return (is_empty());
	while (i < size)
		total_length += ft_strlen(strs[i++]);
	total_length += (size - 1) * ft_strlen(sep) + 1;
	result = (char *)malloc(total_length);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	while (j < size)
	{
		ft_strcat(result, strs[j++]);
		if (j < (size))
			ft_strcat(result, sep);
	}
	return (result);
}
/*
 #include <stdio.h>

int main(void) {
	// Test cases
	char *words[] = {"Hello", "world", "this", "is", "a", "test"};
	char *separator = ", ";

	// Regular test case
	char *result = ft_strjoin(6, words, separator);
	if (result != NULL) {
		printf("Concatenated String: %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	// Test case with size 0
	result = ft_strjoin(0, NULL, separator);
	if (result != NULL) {
		printf("Concatenated String (Size 0): %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	// Test case with empty array of strings
	char *empty_words[] = {};
	result = ft_strjoin(0, empty_words, separator);
	if (result != NULL) {
		printf("Concatenated String (Empty array of strings): %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	// Test case with NULL array of strings
	result = ft_strjoin(2, NULL, separator);
	if (result != NULL) {
		printf("Concatenated String (NULL array of strings): %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	// Test case with empty separator
	char *empty_separator = "";
	result = ft_strjoin(6, words, empty_separator);
	if (result != NULL) {
		printf("Concatenated String (Empty separator): %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	// Test case with single-word array
	char *single_word[] = {"Hello"};
	result = ft_strjoin(1, single_word, separator);
	if (result != NULL) {
		printf("Concatenated String (Single-word array): %s\n", result);
		free(result);
	} else {
		printf("Memory allocation failed.\n");
	}

	return 0;
}*/
