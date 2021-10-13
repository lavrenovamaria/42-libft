/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:46:42 by wrickard          #+#    #+#             */
/*   Updated: 2021/08/04 18:46:42 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

char	*ft_itoa(int tmp);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t size_buff);
void	*ft_calloc(size_t count, size_t size);

int		ft_isalnum(int n);
int		ft_isalpha(int n);
int		ft_isascii(int n);
int		ft_isdigit(int n);
int		ft_isprint(int n);

int		ft_memcmp(const char *buff1, const char *buff2, size_t len);
void	*ft_memset(void *str, int ch, size_t size_buff);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t count);
void	*ft_memmove(void *dst, const void *src, size_t count);
void	*ft_memccpy(void *dst, const void *src, int last_symbol, size_t count);

void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);

int		ft_tolower(int n);
int		ft_toupper(int n);
int		ft_strncmp(const char *str1, const char *str2, size_t count_size);
int		ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *ltr);
char	*ft_strchr(const char *str, int ch);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *big_str, const char *lit_str, size_t len);
char	*ft_strrchr(const char *s, int ch);
char	*ft_strtrim(char const *s, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	**ft_split(char const *s, char c);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
