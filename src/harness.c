#include <stdint.h>
#include <stdio.h>

#include "def.h"
#include "funmap.h"

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{

    complete_function_list("sdf");
    // char mem[8192];
    // struct js *js = js_create(mem, sizeof(mem));
    // js_eval(js, (char*) data, size);

    return 0;
}