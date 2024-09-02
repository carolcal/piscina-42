#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

t_data *fill_dict(t_data *dict, char *content)
{
    int entry_index;
    char *current_pos;
    char *start;
    int i;

    dict = (t_data *)malloc(100 * sizeof(t_data));
    if (!dict)
        return (NULL);
    entry_index = 0;    
    current_pos = content;
    while (*current_pos != '\0')
    {
        start = current_pos;
        i = 0;
        while (*current_pos != ':' && *current_pos != '\0')
        {
            dict[entry_index].number[i++] = *current_pos++;
            dict[entry_index].number[i] = '\0';
        }
        if (*current_pos == ':')
            current_pos++;
        while (*current_pos == ' ')
            current_pos++;
        i = 0;
        while (*current_pos != '\n' && *current_pos != '\0')
             dict[entry_index].word[i++] = *current_pos++;
        dict[entry_index].word[i++] = *current_pos++;
        dict[entry_index].word[i] = '\0';
        if (*current_pos == '\n')
            current_pos++;
        entry_index++;
    }
    return dict;
}

char *read_dict(char *filename)
{
    int file;
    int bytes_stored;
    int total_bytes = 0;
    char buffer[1024];
    char *content;

    file = open(filename, O_RDONLY);
    if (file == -1)
        return (NULL);
    content = (char *)malloc(1024 * sizeof(char));
    if (!content)
    {
        write(1, "erro do buffer\n", 15);
        close(file);
        return (NULL);
    }
    while ((bytes_stored = read(file, buffer, sizeof(buffer) - 1)) > 0)
    {
         while (total_bytes < 1024 && total_bytes < bytes_stored)
        {
            content[total_bytes] = buffer[total_bytes];
            total_bytes++;
        }
    }
    if (bytes_stored < 0)
    {
        write(1, "read error\n", 11);
        free(content);
        close(file);
        return (NULL);
    }
    content[total_bytes] = '\0';
    close(file);
    return (content);
}

int is_dict_valid(char *content)
{
    char *current_pos = content;
    int is_number_part = 1;  

    while (*current_pos != '\0')
    {
        while (*current_pos == ' ')
            current_pos++;
        if (is_number_part)
        {
            if (*current_pos >= '0' && *current_pos <= '9')
                current_pos++;
            else if (*current_pos == ':')
            {
                is_number_part = 0; 
                current_pos++;
            }
            else
                return 0; 
        }
        else
        {
            while (*current_pos == ' ')
                current_pos++;
            if (*current_pos >= 32 && *current_pos <= 126) 
                current_pos++;
            else if (*current_pos == '\n' || *current_pos == '\0')
            {
                is_number_part = 1; 
                if (*current_pos == '\n')
                    current_pos++;
            }
            else
                return 0;
        }
    }
    return 1;
}
