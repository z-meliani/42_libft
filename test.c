/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:12:29 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/18 11:56:26 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// +---------------------------------------------------------------------------+
// |---------------------------------------------------------------------------|
// |-----------------------------  MANDATORY PART  ----------------------------|
// |---------------------------------------------------------------------------|
// +---------------------------------------------------------------------------+

//-----------------------------------------------------------------------------
// +---------+
// | ft_atoi |
// +---------+

// int	main(int ac, char **av)
// {
// 	int	i;

// 	i = 1;
// 	while (i < ac)
// 	{
// 		printf("ft_atoi --> %d\n", ft_atoi(av[i]));
// 		printf("atoi --> %d\n\n", atoi(av[i]));
// 		i++;
// 	}
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +----------+
// | ft_bzero |
// +----------+

// int	main(int ac, char **av)
// {
// 	int i = -1;

// 	if (ac != 2)
// 		return (0);
// 	printf("%s --> ", av[1]);
// 	ft_bzero(&av[1][i], ft_strlen(av[1]));
// 	printf("%s", av[1]);
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +-----------+
// | ft_calloc |
// +-----------+

// int	main(void)
// {
// 	size_t	size = -5;
// 	size_t	nmemb = -5;
// 	char *truc = ft_calloc(nmemb, size);
// 	/*
// 	while (nmemb-- != 0)
// 	{
// 		truc[nmemb] = 'A';
// 	}*/
// 	printf("--> %d\n", (int)size);
// 	printf("%s/\n", truc);
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_isalnum |
// +------------+

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('\n'));
// 	printf("%d\n", ft_isalnum('0'));
// 	printf("%d\n", ft_isalnum('9'));
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('z'));
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('Z'));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_isalpha |
// +------------+

// int	main(void)
// {
// 	int	alpha = 'a' + 256;

// 	printf("ft_isalpha(%c): %d", alpha, ft_isalpha(alpha));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +---------+
// | ft_itoa |
// +---------+

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(2147483647));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +-----------+
// | ft_memchr |
// +-----------+

// int	main(void)
// {
// 	char s[38] = "0 - 1 * 2 / 3 + 4 \\ 5 # 6 @ 7 ~ 8 & 9";

// 	printf("--> %s\n", (char *)ft_memchr(s, '\\', 38));
// 	printf("--> %s\n", (char *)memchr(s, '\\', 38));
// 	printf("--> %s\n", (char *)ft_memchr(s, '\\', 19));
// 	printf("--> %s\n", (char *)memchr(s, '\\', 19));
// 	printf("--> %s\n", (char *)ft_memchr(s, '\\', 0));
// 	printf("--> %s\n", (char *)memchr(s, '\\', 0));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +-----------+
// | ft_memcmp |
// +-----------+

// int	main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char scpy[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};

// 	printf("%d - ", ft_memcmp(s, scpy, 4));
// 	printf("%d\n", memcmp(s, scpy, 4));
// 	printf("%d - ", ft_memcmp(s, s2, 0));
// 	printf("%d\n", memcmp(s, s2, 0));
// 	printf("%d - ", ft_memcmp(s, s2, 1));
// 	printf("%d\n", memcmp(s, s2, 1));
// 	printf("%d - ", ft_memcmp(s2, s, 1));
// 	printf("%d\n", memcmp(s2, s, 1));
// 	printf("%d - ", ft_memcmp(s2, s3, 4));
// 	printf("%d\n", memcmp(s2, s3, 4));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_memmove |
// +------------+

// int	main(void)
// {
// 	char s[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
// 	char *scpy = &s[3];
// 	char *scpy1 = &scpy[3];

// 	scpy = (char *)ft_memmove(scpy, s, 10);
// 	printf("scpy  --> %s\n", scpy);
// 	printf("s     --> %s\n\n", s);

// 	scpy1 = (char *)memmove(scpy1, scpy, 10);
// 	printf("scpy1 --> %s\n", scpy1);
// 	printf("scpy  --> %s\n\n", scpy);

// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +-----------+
// | ft_memset |
// +-----------+

// int	main(int ac, char **av)
// {
// 	int i = -1;

// 	if (ac != 2)
// 		return (0);
// 	printf("%s --> ", av[1]);
// 	ft_memset(av[1], 'A', ft_strlen(av[1]));
// 	printf("%s", av[1]);
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +---------------+
// | ft_putendl_fd |
// +---------------+

// int	main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return (0);

// 	printf("output -> %d\n", ft_atoi(av[2]));
// 	ft_putendl_fd(av[1], ft_atoi(av[2]));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +--------------+
// | ft_putstr_fd |
// +--------------+

// int	main(int ac, char **av)
// {
// 	if (ac != 3)
// 		return (0);

// 	printf("output -> %d\n", ft_atoi(av[2]));
// 	ft_putstr_fd(av[1], ft_atoi(av[2]));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_toupper |
// +------------+

// int	main(int ac, char **av)
// {
// 	int	i;
// 	if (ac != 2)
// 		return (0);
// 	printf("ft_toupper(%s) --> ", av[1]);
// 	i = 0;
// 	while (av[1][i])
// 	{
// 		printf("%c", ft_toupper(av[1][i]));
// 		i++;
// 	}
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +----------+
// | ft_split |
// +----------+

// int	main(void)
// {
// 	char	*sentence = "";
// 	char	sep = ' ';
// 	char	**splited = ft_split(sentence, sep);
// 	int		i;
// 	char *splitme = strdup("Tripouille");
// 	printf("%s\n", splitme);
// 	splited = ft_split(splitme, ' ');

// 	i = 0;
// 	while (i < 1)
// 	{
// 		printf("%d --> %s\n", i, splited[i]);
// 		free(splited[i]);
// 		i++;
// 	}
// 	free(splited);
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +-----------+
// | ft_strchr |
// +-----------+

// int	main(void)
// {
// 	char	sent[] = "A la piscine de 42...";
// 	int	find = '4' + 256;

// 	printf("Sentence --> %s\n", sent);
// 	printf("c --> %c\n", find);
// 	printf("strstr --> %s\n", strchr(sent, find));
// 	printf("ft_strstr --> %s", ft_strchr(sent, find));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_strjoin |
// +------------+

// int	main(int ac, char **av)
// {
// 	if (ac != 3)
// 	{
// 		printf("Enter 2 arguments: s1 and s2.\n");
// 		return (0);
// 	}

// 	printf("%s\n", ft_strjoin(av[1], av[2]));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_strlcpy |
// +------------+

// int	main(void)
// {
// 	char	src[] = "123456";
// 	char	dest1[] = "Truc bidule chouette";
// 	size_t	len_src;
// 	size_t	max_size;

// 	max_size = 40;
// 	printf("src --> %s / dest1 --> %s\n", src, dest1);
// 	len_src = ft_strlcpy(dest1, src, max_size);
// 	printf("src --> %s / dest1 --> %s\n", src, dest1);
// 	printf("len_src --> %zu\n", len_src);
// 	printf("\n");
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_strncmp |
// +------------+

// int	main(void)
// {
// 	size_t	n = 5;
// 	char		s_1[] = "abcd";
// 	char		s_2[] = "abcdekj";

// 	printf("s_1 --> %s\n", s_1);
// 	printf("s_2 --> %s\n", s_2);
// 	printf("strncmp --> %d\n", strncmp(s_1, s_2, n));
// 	printf("ft_strncmp --> %d", ft_strncmp(s_1, s_2, n));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_strnstr |
// +------------+

// int	main(void)
// {
// 	const char	sent[] = "Truc bidule chouette";
// 	const char	find[] = "bid";
// 	size_t	len = 10;

// 	printf("big --> %s\n", sent);
// 	printf("little --> %s\n", find);
// 	printf("strstr --> %s\n", strnstr(sent, find, len));
// 	printf("ft_strnstr --> %s", ft_strnstr(sent, find, len));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_strrchr |
// +------------+

// int	main(void)
// {
// 	char	sent[] = "A la piscine de 42...";
// 	int	find = 'A' + 256;

// 	printf("Sentence --> %s\n", sent);
// 	printf("c --> %c\n", find);
// 	printf("strrchr --> %s\n", strrchr(sent, find));
// 	printf("ft_strrchr --> %s", ft_strrchr(sent, find));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_strtrim |
// +------------+

// int	main(void)
// {
// 	const char	*totrim = "   xxxtripouille";
// 	const char	*ctrim = " x";

// 	printf("%s\n", ft_strtrim(totrim, ctrim));
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +-----------+
// | ft_substr |
// +-----------+

// int	main(void)
// {
// 	char *str = "0123456789";

// 	printf("str --> %s\n\n", str);

// 	printf("ft_substr(str, 0, 0) --> %s\n", ft_substr(str, 0, 0));
// 	printf("ft_substr(str, 0, 20) --> %s\n", ft_substr(str, 0, 20));
// 	printf("ft_substr(str, 20, 0) --> %s\n", ft_substr(str, 20, 0));
// 	printf("ft_substr(str, 20, 20) --> %s\n", ft_substr(str, 20, 20));
// 	printf("ft_substr(str, 5, 3) --> %s\n", ft_substr(str, 5, 3));
// }
//-----------------------------------------------------------------------------

// +---------------------------------------------------------------------------+
// |---------------------------------------------------------------------------|
// |-------------------------------  BONUS PART  ------------------------------|
// |---------------------------------------------------------------------------|
// +---------------------------------------------------------------------------+

//-----------------------------------------------------------------------------
// +----------------+
// | ft_lstadd_back |
// +----------------+

// int	main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*pt0 = ft_lstnew("pt0");
// 	t_list	*pt1 = ft_lstnew("pt1");
// 	// t_list	*pt2 = ft_lstnew("pt2");
// 	t_list	*last;
// 	t_list	*lstdup;

// 	last = ft_lstlast(lst);
// 	printf("lst == NULL --> %s\n\n", (last == 0)?"True":"False");
// 	if (last != NULL)
// 	{
// 		printf("last.content --> %s\n", (char *)last->content);
// 		printf("last         --> %p\n", last);
// 		printf("last.next    --> %p\n\n", last->next);
// 	}
// 	ft_lstadd_back(&lst, pt0);
// 	last = ft_lstlast(lst);
// 	printf("last.content --> %s\n", (char *)last->content);
// 	printf("last         --> %p\n", last);
// 	printf("last.next    --> %p\n\n", last->next);
// 	ft_lstadd_back(&lst, pt1);
// 	last = ft_lstlast(lst);
// 	printf("last.content --> %s\n", (char *)last->content);
// 	printf("last         --> %p\n", last);
// 	printf("last.next    --> %p\n\n", last->next);
// 	// ft_lstadd_back(&lst, pt2);
// 	// last = ft_lstlast(lst);
// 	// printf("last.content --> %s\n", (char *)last->content);
// 	// printf("last         --> %p\n", last);
// 	// printf("last.next    --> %p\n\n", last->next);
// 	printf("-------------------------------------------\n\n");
// 	lstdup = lst;
// 	printf("lst.content --> %s\n", (char *)lst->content);
// 	printf("lstdup.content --> %s\n\n ", (char *)lstdup->content);
// 	while (lstdup != NULL)
// 	{
// 	printf("lstdup.content --> %s\n", (char *)lstdup->content);
// 	printf("lstdup         --> %p\n", lstdup);
// 	printf("lstdup.next    --> %p\n\n", lstdup->next);
// 	lstdup = lstdup->next;
// 	}
// }

//-----------------------------------------------------------------------------
// +-------------+
// | ft_lstclear |
// +-------------+

// int	main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list	*pt0 = ft_lstnew(malloc(1));
// 	t_list	*pt1 = ft_lstnew(malloc(1));
// 	t_list	*pt2 = ft_lstnew(malloc(1));

// 	printf("lst == NULL --> %s\n\n", (lst == 0)?"True":"False");
// 	if (lst != NULL)
// 	{
// 		printf("lst.content --> %s\n", (char *)lst->content);
// 		printf("lst         --> %p\n", lst);
// 		printf("lst.next    --> %p\n", lst->next);
// 	}
// 	printf("\n");
// 	ft_lstadd_back(&lst, pt0);
// 	printf("lst.content --> %s\n", (char *)lst->content);
// 	printf("lst         --> %p\n", lst);
// 	printf("lst.next    --> %p\n", lst->next);
// 	printf("\n");
// 	ft_lstadd_back(&lst, pt1);
// 	printf("lst.content --> %s\n", (char *)lst->content);
// 	printf("lst         --> %p\n", lst);
// 	printf("lst.next    --> %p\n", lst->next);
// 	printf("\n");
// 	ft_lstadd_back(&lst, pt2);
// 	printf("lst.content --> %s\n", (char *)lst->content);
// 	printf("lst         --> %p\n", lst);
// 	printf("lst.next    --> %p\n", lst->next);
// 	printf("\n");
// 	printf("ft_lstclear -->\n");
// 	ft_lstclear(&lst, free);
//
// 	// printf("avant ** --> %p\n", lst);
// 	// printf("avant * --> %p\n", *lst);
// 	// printf("apres ** --> %p\n", lst);
// 	// printf("apres * --> %p\n", *lst);
// 	// printf("\n");
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +--------------+
// | ft_lstdelone |
// +--------------+

// int	main(void)
// {
// 	t_list	*lst = ft_lstnew(malloc(1));

// 	if (!lst)
// 	{
// 		printf("lst.content --> %s\n", (char *)lst->content);
// 		printf("lst         --> %p\n", lst);
// 		printf("lst.next    --> %p\n\n", lst->next);
// 		ft_lstdelone(lst, free);
// 	}
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +-----------+
// | ft_lstnew |
// +-----------+

// int	 main(void)
// {
// 	char	*truc = "truc";
// 	t_list	*lst = ft_lstnew(truc);

// 	printf("content --> %s\n", (char *)lst->content);
// 	printf("content --> %p\n", &(lst->content));
// 	printf("truc --> %p\n", &lst->content);
// 	printf("mylist --> %p\n", lst);
// 	printf("next --> %p\n", lst->next);
// 	free(lst);
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_lstlast |
// +------------+

// int	main(void)
// {
// 	char	*truc = "truc";
// 	t_list	*lst = ft_lstnew(truc);
// 	t_list	*pt0 = ft_lstnew("1");
// 	t_list	*pt1 = ft_lstnew("2");
// 	t_list	*last;

// 	printf("lst.content --> %s\n", (char *)lst->content);
// 	printf("lst         --> %p\n", lst);
// 	printf("lst.next    --> %p\n\n", lst->next);
// 	ft_lstadd_front(&lst, pt1);
// 	ft_lstadd_front(&lst, pt0);
// 	last = ft_lstlast(lst);
// 	printf("last.content --> %s\n", (char *)last->content);
// 	printf("last         --> %p\n", last);
// 	printf("last.next    --> %p\n\n", last->next);
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_lstlast |
// +------------+

// void	*addOne(void *p)
// {
// 	void *r = malloc(sizeof(int));
// 	*(int *)r = *(int *)p + 1;
// 	return (r);
// }

// int	main(void)
// {
// 	int	tab[4] = {-1, 0, 1, 2};
// 	t_list	*lst = ft_lstnew(&tab[0]);
// 	t_list	*pt0 = ft_lstnew(&tab[1]);
// 	t_list	*pt1 = ft_lstnew(&tab[2]);
// 	t_list	*pt2 = ft_lstnew(&tab[3]);
// 	t_list	*last;
// 	t_list	*new = NULL;

// 	ft_lstadd_back(&lst, pt0);
// 	ft_lstadd_back(&lst, pt1);
// 	ft_lstadd_back(&lst, pt2);
// 	last = lst;
// 	while (last != NULL)
// 	{
// 		printf("last.content --> %d\n", ((char *)last->content)[0]);
// 		printf("last         --> %p\n", last);
// 		printf("last.next    --> %p\n", last->next);
// 		printf("\n");
// 		last = last->next;
// 	}

// 	new = ft_lstmap(lst, addOne, free);
// 	while (new != NULL)
// 	{
// 		printf("new.content --> %d\n", ((char *)new->content)[0]);
// 		printf("new         --> %p\n", new);
// 		printf("new.next    --> %p\n", new->next);
// 		printf("\n");
// 		new = new->next;
// 	}
// }
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// +------------+
// | ft_lstsize |
// +------------+

// int	main(void)
// {
// 	char	*truc = "truc";
// 	t_list	*lst = ft_lstnew(truc);
// 	t_list	*pt0 = ft_lstnew("1");
// 	t_list	*pt1 = ft_lstnew("2");

// 	printf("lstsize     --> %d\n", ft_lstsize(lst));
// 	printf("lst.content --> %s\n", (char *)lst->content);
// 	printf("lst         --> %p\n", lst);
// 	printf("lst.next    --> %p\n\n", lst->next);
// 	ft_lstadd_front(&lst, pt1);
// 	printf("lstsize     --> %d\n", ft_lstsize(lst));
// 	printf("lst.content --> %s\n", (char *)lst->content);
// 	printf("lst         --> %p\n", lst);
// 	printf("lst.next    --> %p\n\n", lst->next);
// 	ft_lstadd_front(&lst, pt0);
// 	printf("lstsize     --> %d\n", ft_lstsize(lst));
// 	printf("lst.content --> %s\n", (char *)lst->content);
// 	printf("lst         --> %p\n", lst);
// 	printf("lst.next    --> %p\n\n", lst->next);
// }
//-----------------------------------------------------------------------------