### Libft Functions Overview

#### Character Handling Functions (`<ctype.h>`)

- **ft_isalpha**: Checks if a character is alphabetic.
- **ft_isdigit**: Checks if a character is a digit (0-9).
- **ft_isalnum**: Checks if a character is alphanumeric.
- **ft_isascii**: Checks if a character fits into the ASCII character set.
- **ft_isprint**: Checks if a character is printable.
- **ft_toupper**: Converts a character to uppercase.
- **ft_tolower**: Converts a character to lowercase.

#### String Handling Functions (`<string.h>`)

- **ft_memset**: Fills memory with a constant byte.
- **ft_strlen**: Calculates the length of a string.
- **ft_bzero**: Zeros out a byte string.
- **ft_memcpy**: Copies memory area.
- **ft_memmove**: Copies memory area with potential overlap.
- **ft_strlcpy**: Copies a string to a specified size.
- **ft_strlcat**: Concatenates a string to a specified size.
- **ft_strchr**: Locates a character in a string.
- **ft_strrchr**: Locates the last occurrence of a character in a string.
- **ft_strncmp**: Compares two strings up to a specified number of characters.
- **ft_memchr**: Scans memory for a character.
- **ft_memcmp**: Compares memory areas.
- **ft_strnstr**: Locates a substring in a string.
- **ft_strdup**: Duplicates a string.

#### Memory Allocation Functions (`<stdlib.h>`)

- **ft_atoi**: Converts a string to an integer.
- **ft_calloc**: Allocates memory and initializes it to zero.

#### Additional Utility Functions

- **ft_substr**: Returns a substring from a string.
- **ft_strjoin**: Concatenates two strings.
- **ft_strtrim**: Trims specified characters from the beginning and end of a string.
- **ft_split**: Splits a string using a specified delimiter.
- **ft_itoa**: Converts an integer to a string.
- **ft_strmapi**: Applies a function to each character of a string, creating a new string.
- **ft_striteri**: Applies a function to each character of a string in-place.
- **ft_putchar_fd**: Outputs a character to a file descriptor.
- **ft_putstr_fd**: Outputs a string to a file descriptor.
- **ft_putendl_fd**: Outputs a string to a file descriptor followed by a newline.
- **ft_putnbr_fd**: Outputs an integer to a file descriptor.

#### Linked List Functions

- **ft_lstnew**: Creates a new list element.
- **ft_lstadd_front**: Adds an element at the beginning of a list.
- **ft_lstsize**: Counts the number of elements in a list.
- **ft_lstlast**: Returns the last element of the list.
- **ft_lstadd_back**: Adds an element at the end of a list.
- **ft_lstclear**: Deletes and frees a list.
- **ft_lstiter**: Applies a function to each element of a list.
- **ft_lstmap**: Creates a new list by applying a function to each element of an existing list.
