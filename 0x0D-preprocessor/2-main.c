#include "filename_printer.h"
#include <libgen.h>

void print_filename(void)
{
    char path[MAX_FILENAME_LENGTH];
    char *filename;

    /* Get the full path of the executable file */
    ssize_t length = readlink("/proc/self/exe", path, sizeof(path));
    if (length != -1)
    {
        /* Extract the filename from the path */
        filename = basename(path);

        /* Print the filename */
        size_t len = strlen(filename);
        for (size_t i = 0; i < len; i++)
        {
            _putchar(filename[i]);
        }
    }

    _putchar('\n');
}
