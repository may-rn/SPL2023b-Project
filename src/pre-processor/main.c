#include "../include/pre_processor.h"

int main() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    if (input_file == NULL || output_file == NULL) {
        printf("Error: Failed to open one or both files.\n");
        return 1;
    }

    process_file(input_file, output_file);

    fclose(input_file);
    fclose(output_file);

  return 0;
}