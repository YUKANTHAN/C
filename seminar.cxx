#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char content[1000];

    // Create and write to the file
    file = fopen("TIRUNELVELI.txt", "w");
    if (file == NULL)
    {
        printf("Error creating file!\n");
        exit(1);
    }
    fprintf(file, "Tirunelveli is the best place to live");
    fclose(file);

    // Read and display the initial content
    printf("Initial file content:\n");
    file = fopen("TIRUNELVELI.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    while (fgets(content, sizeof(content), file) != NULL)
    {
        printf("%s", content);
    }
    fclose(file);
    printf("\n\n");

    // Append new content to the file
    file = fopen("TIRUNELVELI.txt", "a");
    if (file == NULL)
    {
        printf("Error opening file for appending!\n");
        exit(1);
    }
    fprintf(file, "\n Vibe check on May 17\nGet Ready Tirunelveli");
    fclose(file);

    // Read and display the updated content
    printf("Updated file content:\n");
    file = fopen("TIRUNELVELI.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        exit(1);
    }
    while (fgets(content, sizeof(content), file) != NULL)
    {
        printf("%s", content);
    }
    fclose(file);

    return 0;
}