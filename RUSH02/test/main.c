#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
// estructura t_dict
typedef struct s_dict
{
    char *key;
    char *value;
    struct s_dict *next; // puntero al siguiente elemento
} t_dict;
// funciones
int convert_and_print_number(t_dict *dict, const char *number_str);
void convert_tens(t_dict *dict, int number, char *buffer);
char *find_value(t_dict *dict, const char *key);
int str_to_int(const char *str, int *num);
char *int_to_str(int num, char *buffer);
void reverse_str(char *str, int len);
void ft_putstr(char *str);
char *ft_strdup(const char *s1);
int ft_strcmp(const char *s1, const char *s2);
// funcion para agregar entradas al diccionario
t_dict *add_to_dict(t_dict *dict, const char *key, const char *value)
{
    t_dict *new_node = (t_dict *)malloc(sizeof(t_dict));
    new_node->key = ft_strdup(key);     // copia la clave
    new_node->value = ft_strdup(value); // copia el valor
    new_node->next = dict;              // inserta el nuevo nodo al inicio de la lista
    return new_node;
}
// funcion para liberar la memoria del diccionario
void free_dict(t_dict *dict)
{
    t_dict *temp;
    while (dict)
    {
        temp = dict;
        dict = dict->next;
        free(temp->key);
        free(temp->value);
        free(temp);
    }
}
// funcion principal para convertir y mostrar el numero en palabras
int convert_and_print_number(t_dict *dict, const char *number_str)
{
    char buffer[100];
    int number;
    // convierte la cadena a un numero entero
    if (!str_to_int(number_str, &number))
        return 0;
    // caso especial para el numero 0
    if (number == 0)
    {
        ft_putstr(find_value(dict, "0"));
        ft_putstr("\n");
        return 1;
    }
    // manejo de numeros menores a 20 o multiplos de 10
    if (number < 20 || (number < 100 && number % 10 == 0))
    {
        ft_putstr(find_value(dict, int_to_str(number, buffer)));
    }
    // manejo de numeros menores a 100 no multiplos de 10
    else if (number < 100)
    {
        convert_tens(dict, number, buffer);
    }
    // si el numero es mayor a 100, imprimir un mensaje (se puede expandir para manejar estos casos debo de mirarlo mejor mañana)
    else
    {
        ft_putstr("Number too large for this demo.\n");
    }
    ft_putstr("\n");
    return 1;
}
// funcion para convertir decenas y unidades
void convert_tens(t_dict *dict, int number, char *buffer)
{
    int rem, div;
    div = number / 10;
    rem = number % 10;
    // maneja decenas mayores a 20
    if (div > 1)
    {
        ft_putstr(find_value(dict, int_to_str(div * 10, buffer)));
        if (rem > 0)
        {
            ft_putstr(" ");
            ft_putstr(find_value(dict, int_to_str(rem, buffer)));
        }
    }
    // maneja numeros menores a 20
    else
    {
        ft_putstr(find_value(dict, int_to_str(number, buffer)));
    }
}
// funcion para buscar el valor en el diccionario
char *find_value(t_dict *dict, const char *key)
{
    while (dict)
    {
        if (ft_strcmp(dict->key, key) == 0)
        {
            return dict->value; // devolver el valor correspondiente
        }
        dict = dict->next;
    }
    return NULL; // si no se encuentra, devolver NULL
}
// funcion para convertir una cadena a un entero
int str_to_int(const char *str, int *num)
{
    *num = 0;
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        *num = *num * 10 + (*str - '0');
        str++;
    }
    return 1;
}
// funcion para convertir un entero a una cadena
char *int_to_str(int num, char *buffer)
{
    char *start = buffer;
    int len = 0;
    if (num == 0)
    {
        buffer[0] = '0';
        buffer[1] = '\0';
        return buffer;
    }
    while (num > 0)
    {
        buffer[len++] = '0' + (num % 10);
        num /= 10;
    }
    buffer[len] = '\0';
    // invierte la cadena
    reverse_str(start, len);
    return buffer;
}
// invertir una cadena
void reverse_str(char *str, int len)
{
    int i = 0;
    int j = len - 1;
    char temp;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
// putstr
void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}
// strdup
char *ft_strdup(const char *s1)
{
    char *copy;
    int len = 0;
    while (s1[len])
        len++;
    copy = (char *)malloc(len + 1);
    if (!copy)
        return NULL;
    for (int i = 0; i <= len; i++)
        copy[i] = s1[i];
    return copy;
}
// strcmp
int ft_strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}
int main()
{
    // diccionario simulado
    t_dict *dict = NULL;
    dict = add_to_dict(dict, "0", "zero");
    dict = add_to_dict(dict, "1", "one");
    dict = add_to_dict(dict, "2", "two");
    dict = add_to_dict(dict, "3", "three");
    dict = add_to_dict(dict, "4", "four");
    dict = add_to_dict(dict, "5", "five");
    dict = add_to_dict(dict, "6", "six");
    dict = add_to_dict(dict, "7", "seven");
    dict = add_to_dict(dict, "8", "eight");
    dict = add_to_dict(dict, "9", "nine");
    dict = add_to_dict(dict, "10", "ten");
    dict = add_to_dict(dict, "11", "eleven");
    dict = add_to_dict(dict, "12", "twelve");
    dict = add_to_dict(dict, "13", "thirteen");
    dict = add_to_dict(dict, "14", "fourteen");
    dict = add_to_dict(dict, "15", "fifteen");
    dict = add_to_dict(dict, "16", "sixteen");
    dict = add_to_dict(dict, "17", "seventeen");
    dict = add_to_dict(dict, "18", "eighteen");
    dict = add_to_dict(dict, "19", "nineteen");
    dict = add_to_dict(dict, "20", "twenty");
    dict = add_to_dict(dict, "30", "thirty");
    dict = add_to_dict(dict, "40", "forty");
    dict = add_to_dict(dict, "50", "fifty");
    dict = add_to_dict(dict, "60", "sixty");
    dict = add_to_dict(dict, "70", "seventy");
    dict = add_to_dict(dict, "80", "eighty");
    dict = add_to_dict(dict, "90", "ninety");
    dict = add_to_dict(dict, "100", "one hundred");
    dict = add_to_dict(dict, "1000", "one thousand");
    // numero a convertir
    char number_str[100];
    // pedir al usuario que ingrese un numero
    printf("Enter a number: ");
    scanf("%s", number_str);
    // convertir y mostrar el numero en palabras
    if (!convert_and_print_number(dict, number_str))
    {
        printf("Error: Invalid number or dictionary entry missing.\n");
    }
    // liberar la memoria del diccionario
    free_dict(dict);
    return 0;
}