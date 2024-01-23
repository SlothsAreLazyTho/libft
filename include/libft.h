/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 17:52:19 by cbijman       #+#    #+#                 */
/*   Updated: 2024/01/23 12:24:05 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <limits.h>
# include <stdbool.h>
# include <stddef.h>

# ifndef FT_DEBUG
#  define FT_DEBUG 0
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct t_string
{
	char			*content;
	size_t			index;
	size_t			capacity;
}					t_string;

typedef union u_color
{
	struct
	{
		unsigned char	a;
		unsigned char	r;
		unsigned char	g;
		unsigned char	b;
	};
	unsigned int		hexdecimal;
	unsigned char		rgba[4];
}	t_color;

/// @brief Mimic version of the printf() function.
/// @param s: The string to print
/// @param ...: Variadic arguments.
/// @return Length from the entire string to print.
int					ft_printf(const char *s, ...);

/// @brief Write a function that returns a line read from a file descriptor
/// @param fd: The file descriptor to read from
/// @return Read line: correct behavior
/// and NULL if there is nothing else to read, or an error occurred
char				*get_next_line(int fd);

/// @brief Function that frees the first string and appends the second string.
/// @return New allocated string.
char				*ft_strjoin_free(char *s1, char *s2);

// Put operations to be removed. Obsolete.
int					ft_putchar(char c);
int					ft_putstr(char *s);
int					ft_putnbr(int nb);
int					ft_putunbr(unsigned int nb);
int					ft_puthex(unsigned long int n, int type);

// Checkers
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
bool				ft_isnumber(const char *str);
int					ft_isspace(char c);

// File Operations
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);

// String
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
char				**ft_split(const char *s, char c);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s1);
char				**ft_arrdup(char **arr);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, char *src, size_t size);
size_t				ft_strlen(const char *str);
size_t				ft_arrlen(char **arr);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strstr(char *str, char *to_find);
char				*ft_strrchr(const char *s, int c);
char				*ft_strtrim(char *s1, char *set);
char				*ft_substr(const char *s, unsigned int start, size_t len);
char				*ft_strcpy(char *s1, char *s2);
int					ft_tolower(int c);
int					ft_toupper(int c);

// Memory
void				*ft_realloc(void *ptr, size_t oldsize, size_t size);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);

// Link List
/// @brief 	Allocates (with malloc(3)) and returns a new node,
///	The member variable ’content’ is initialized with the value
/// of the parameter ’content’. The variable ’next’ is initialized to NULL.
/// @param content: The content to create the node with.
/// @return The new node
t_list				*ft_lstnew(void *content);

/// @brief Counts the number of nodes in a list.
/// @param lst: The beginning of the list.
/// @return The length of the list
int					ft_lstsize(t_list *lst);

/// @brief Returns the last node of the list.
/// @param lst: The beginning of the list
/// @return Last node of the list
t_list				*ft_lstlast(t_list *lst);

/// @brief Adds the node ’new’ at the beginning of the list.
/// @param lst: The address of a pointer to the first link of a list.
/// @param new: The address of a pointer to the node to be added to the list.
void				ft_lstadd_front(t_list **lst, t_list *new);

/// @brief Adds the node ’new’ at the end of the list.
/// @param lst:  The address of a pointer to the first link of a list.
/// @param new:  The address of a pointer to the node to be added to the list.
void				ft_lstadd_back(t_list **lst, t_list *new);

/// @brief Adds the node ’new’ at the end of the list.
/// @param lst:  The address of a pointer to the first link of a list.
/// @param content: The content that will be added to of the list.
/// @return The list.
t_list				*ft_lstadd_back_content(t_list **lst, void *content);

/// @brief Takes as a parameter a node and frees the memory of
///	the node’s content using the function ’del’ given
/// as a parameter and free the node.  The memory of
/// ’next’ must not be freed.
/// @param lst:  The node to free.
/// @param del:  The address of the function used to delete the content.
void				ft_lstdelone(t_list *lst, void (*del)(void *));

/// @brief Deletes and frees the given node and every
/// successor of that node, using the function ’del’
/// and free(3). Finally, the pointer to the list must be set to NULL.
/// @param lst:  The address of a pointer to a node.
/// @param del:  The address of the function used to delete the
/// content of the node.
void				ft_lstclear(t_list **lst, void (*del)(void *));

/// @brief
/// @param lst:  The address of a pointer to a node.
/// @param f:  The address of the function used to iterate on the list.
void				ft_lstiter(t_list *lst, void (*f)(void *));

/// @brief Iterates the list ’lst’ and applies the function
/// ’f’ on the content of each node.  Creates a new
/// list resulting of the successive applications of
/// the function ’f’.  The ’del’ function is used to
/// delete the content of a node if needed.
/// @param lst:  The address of a pointer to a node.
/// @param f:  The address of the function used to iterate on the list.
/// @param del:  The address of the function used to delete
/// the content of a node if needed.
/// @return The new list, NULL if the allocation fails.
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

// New functions for string builder
bool				ft_string(t_string *arg, size_t size);
bool				ft_string_append(t_string *arg, char c);
bool				ft_string_join(t_string *arg, char *str);
char				*ft_string_cstr(t_string *arg);
void				ft_string_free(t_string *arg);

// New functions for colouring
t_color				*ft_newcolor(int r, int g, int b, int a);
int					ft_get_r(int rgba);
int					ft_get_g(int rgba);
int					ft_get_b(int rgba);
int					ft_get_a(int rgba);
int					ft_get_rgba(int r, int g, int b, int a);

#endif