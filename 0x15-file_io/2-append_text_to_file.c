#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file- making changes to an existing file in c
 * @filename: our filename: a pointer to our file that we going to amend
 * @text_content: pointer to the information that needs to be written
 * Return: returns 1 on success but returns -1 when failed
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
        int fid;
        int length = 0;
        int wrt;

        if (filename == NULL)
                return (-1);
        if (text_content != NULL)
        {
                for (length = 0; text_content[length];)
                        length++;
        }

        fid = open(filename, O_WRONLY | O_APPEND);
        wrt = write(fid, text_content, length);

        if (fid == -1 || wrt == -1)
                return (-1);

        close(fid);
        return (1);
}
