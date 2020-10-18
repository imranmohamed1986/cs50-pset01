{"filter":false,"title":"mario.c","tooltip":"/pset1/mario/more/mario.c","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":0,"column":0},"end":{"row":48,"column":1},"action":"remove","lines":["#include <stdio.h>","#include <cs50.h>","","/**"," * Example:"," *"," * height = 4"," * width = height"," *"," * ···# l1 3s 1h"," * ··## l2 2s 2h"," * ·### l3 1s 3h"," * #### l4 0s 4h"," */","","void repeat(char c, int times)","{","    while (--times >= 0)","    {","        printf(\"%c\", c);","    }","}","","int main()","{","    int height, width;","","    do","    {","        height = get_int(\"Height: \");","        width = height;","    }","    while (height < 0 || height > 23);","","    for (int i = 1; i <= height; i++)","    {","        int num_hashes = i;","        int num_spaces = width - num_hashes;","","        repeat(' ', num_spaces);","        repeat('#', num_hashes);","","        printf(\"  \");","","        repeat('#', num_hashes);","","        printf(\"\\n\");","    }","}"],"id":2},{"start":{"row":0,"column":0},"end":{"row":55,"column":1},"action":"insert","lines":["// Prints two pyramids of #","// Based on World 1-1 in NES Super Mario","","#include <cs50.h>","#include <stdio.h>","","int get_height(string prompt);","void pyramid(int height);","","int main(int argc, string argv[])","{","    int height = get_height(\"Height: \");","    pyramid(height);","}","","","// Print pyramid by filling grid with space or hash characters","void pyramid(int rows)","{","    for (int i = 0; i < rows; i++)","    {","        // Maximum number of columns => rows * 2 + 2","        // Space for two pyramids + two blocks inbetween","        for (int col = 0; col < rows * 2 + 2; col++)","        {    ","            // Space left pyramid","            // Grid starts at 0 => rows - 1","            // 1 = 0, 2 = 1, 3 = 2, ...","            if (col + i < (rows - 1))","                printf(\" \");","            // Space between two pyramids","            // Same 2 blocks in every col for each row","            else if ((col == rows || col == rows + 1))","                printf(\" \");","            // Null space right pyramid","            // Space inbetween (2) + (1) first col always hashes => rows + 3","            else if (col - i >= rows + 3)","                printf(\"\");","            else","                printf(\"#\");     ","        }","        printf(\"\\n\");","    }","}","","// Prompt user for integer between 1 and 8","int get_height(string prompt)","{","    int n;   ","    do","    {","        n = get_int(\"%s\", prompt);","    }","    while (n < 1 || n > 8);","    return n;","}"]}],[{"start":{"row":28,"column":37},"end":{"row":29,"column":0},"action":"insert","lines":["",""],"id":3},{"start":{"row":29,"column":0},"end":{"row":29,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":30,"column":28},"end":{"row":31,"column":0},"action":"insert","lines":["",""],"id":4},{"start":{"row":31,"column":0},"end":{"row":31,"column":16},"action":"insert","lines":["                "]}],[{"start":{"row":29,"column":12},"end":{"row":29,"column":13},"action":"insert","lines":["{"],"id":5}],[{"start":{"row":31,"column":14},"end":{"row":31,"column":15},"action":"insert","lines":["}"],"id":6},{"start":{"row":31,"column":0},"end":{"row":31,"column":14},"action":"remove","lines":["              "]},{"start":{"row":31,"column":0},"end":{"row":31,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":34,"column":54},"end":{"row":35,"column":0},"action":"insert","lines":["",""],"id":7},{"start":{"row":35,"column":0},"end":{"row":35,"column":12},"action":"insert","lines":["            "]},{"start":{"row":35,"column":12},"end":{"row":35,"column":13},"action":"insert","lines":["{"]}],[{"start":{"row":36,"column":28},"end":{"row":37,"column":0},"action":"insert","lines":["",""],"id":8},{"start":{"row":37,"column":0},"end":{"row":37,"column":16},"action":"insert","lines":["                "]},{"start":{"row":37,"column":16},"end":{"row":37,"column":17},"action":"insert","lines":["}"]},{"start":{"row":37,"column":0},"end":{"row":37,"column":16},"action":"remove","lines":["                "]},{"start":{"row":37,"column":0},"end":{"row":37,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":40,"column":41},"end":{"row":41,"column":0},"action":"insert","lines":["",""],"id":9},{"start":{"row":41,"column":0},"end":{"row":41,"column":12},"action":"insert","lines":["            "]},{"start":{"row":41,"column":12},"end":{"row":41,"column":13},"action":"insert","lines":["{"]}],[{"start":{"row":42,"column":27},"end":{"row":43,"column":0},"action":"insert","lines":["",""],"id":10},{"start":{"row":43,"column":0},"end":{"row":43,"column":16},"action":"insert","lines":["                "]}],[{"start":{"row":43,"column":16},"end":{"row":43,"column":17},"action":"insert","lines":["}"],"id":11},{"start":{"row":43,"column":0},"end":{"row":43,"column":16},"action":"remove","lines":["                "]},{"start":{"row":43,"column":0},"end":{"row":43,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":44,"column":16},"end":{"row":45,"column":0},"action":"insert","lines":["",""],"id":12},{"start":{"row":45,"column":0},"end":{"row":45,"column":12},"action":"insert","lines":["            "]},{"start":{"row":45,"column":12},"end":{"row":45,"column":13},"action":"insert","lines":["{"]}],[{"start":{"row":46,"column":28},"end":{"row":46,"column":33},"action":"remove","lines":["     "],"id":13},{"start":{"row":46,"column":28},"end":{"row":47,"column":0},"action":"insert","lines":["",""]},{"start":{"row":47,"column":0},"end":{"row":47,"column":16},"action":"insert","lines":["                "]}],[{"start":{"row":49,"column":21},"end":{"row":50,"column":0},"action":"insert","lines":["",""],"id":14},{"start":{"row":50,"column":0},"end":{"row":50,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":51,"column":5},"end":{"row":52,"column":0},"action":"insert","lines":["",""],"id":15},{"start":{"row":52,"column":0},"end":{"row":52,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":56,"column":29},"end":{"row":57,"column":0},"action":"insert","lines":["",""],"id":16}],[{"start":{"row":60,"column":6},"end":{"row":61,"column":0},"action":"insert","lines":["",""],"id":17},{"start":{"row":61,"column":0},"end":{"row":61,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":62,"column":5},"end":{"row":63,"column":0},"action":"insert","lines":["",""],"id":18},{"start":{"row":63,"column":0},"end":{"row":63,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":64,"column":8},"end":{"row":65,"column":0},"action":"insert","lines":["",""],"id":19},{"start":{"row":65,"column":0},"end":{"row":65,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":66,"column":5},"end":{"row":67,"column":0},"action":"insert","lines":["",""],"id":20},{"start":{"row":67,"column":0},"end":{"row":67,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":69,"column":13},"end":{"row":70,"column":0},"action":"insert","lines":["",""],"id":21},{"start":{"row":70,"column":0},"end":{"row":70,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":48,"column":8},"end":{"row":48,"column":9},"action":"remove","lines":["}"],"id":22}],[{"start":{"row":48,"column":4},"end":{"row":48,"column":5},"action":"insert","lines":["}"],"id":23},{"start":{"row":48,"column":0},"end":{"row":48,"column":4},"action":"remove","lines":["    "]},{"start":{"row":48,"column":0},"end":{"row":48,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":48,"column":4},"end":{"row":48,"column":5},"action":"insert","lines":["}"],"id":24}],[{"start":{"row":48,"column":13},"end":{"row":48,"column":14},"action":"remove","lines":["}"],"id":25}],[{"start":{"row":49,"column":0},"end":{"row":49,"column":4},"action":"remove","lines":["    "],"id":26}],[{"start":{"row":51,"column":0},"end":{"row":51,"column":4},"action":"remove","lines":["    "],"id":27}],[{"start":{"row":48,"column":0},"end":{"row":48,"column":4},"action":"remove","lines":["    "],"id":28}],[{"start":{"row":56,"column":0},"end":{"row":56,"column":1},"action":"insert","lines":[" "],"id":29},{"start":{"row":56,"column":1},"end":{"row":56,"column":2},"action":"insert","lines":[" "]},{"start":{"row":56,"column":2},"end":{"row":56,"column":3},"action":"insert","lines":[" "]}],[{"start":{"row":62,"column":0},"end":{"row":62,"column":4},"action":"remove","lines":["    "],"id":30}],[{"start":{"row":65,"column":0},"end":{"row":65,"column":3},"action":"remove","lines":["   "],"id":31}],[{"start":{"row":65,"column":0},"end":{"row":65,"column":1},"action":"remove","lines":[" "],"id":32}],[{"start":{"row":66,"column":0},"end":{"row":66,"column":4},"action":"remove","lines":["    "],"id":33}],[{"start":{"row":68,"column":0},"end":{"row":68,"column":2},"action":"remove","lines":["  "],"id":34}],[{"start":{"row":69,"column":0},"end":{"row":69,"column":4},"action":"remove","lines":["    "],"id":35}],[{"start":{"row":47,"column":12},"end":{"row":47,"column":13},"action":"insert","lines":["}"],"id":36}],[{"start":{"row":48,"column":0},"end":{"row":48,"column":2},"action":"remove","lines":["} "],"id":37}],[{"start":{"row":49,"column":4},"end":{"row":49,"column":5},"action":"insert","lines":[" "],"id":38},{"start":{"row":49,"column":5},"end":{"row":49,"column":6},"action":"insert","lines":[" "]},{"start":{"row":49,"column":6},"end":{"row":49,"column":7},"action":"insert","lines":[" "]},{"start":{"row":49,"column":7},"end":{"row":49,"column":8},"action":"insert","lines":[" "]},{"start":{"row":49,"column":8},"end":{"row":49,"column":9},"action":"insert","lines":[" "]},{"start":{"row":49,"column":9},"end":{"row":49,"column":10},"action":"insert","lines":[" "]},{"start":{"row":49,"column":10},"end":{"row":49,"column":11},"action":"insert","lines":[" "]},{"start":{"row":49,"column":11},"end":{"row":49,"column":12},"action":"insert","lines":[" "]},{"start":{"row":49,"column":12},"end":{"row":49,"column":13},"action":"insert","lines":[" "]}],[{"start":{"row":51,"column":0},"end":{"row":51,"column":1},"action":"remove","lines":["}"],"id":39}],[{"start":{"row":51,"column":0},"end":{"row":51,"column":1},"action":"insert","lines":["}"],"id":40}],[{"start":{"row":51,"column":0},"end":{"row":51,"column":1},"action":"insert","lines":[" "],"id":41},{"start":{"row":51,"column":1},"end":{"row":51,"column":2},"action":"insert","lines":[" "]},{"start":{"row":51,"column":2},"end":{"row":51,"column":3},"action":"insert","lines":[" "]},{"start":{"row":51,"column":3},"end":{"row":51,"column":4},"action":"insert","lines":[" "]},{"start":{"row":51,"column":4},"end":{"row":51,"column":5},"action":"insert","lines":[" "]},{"start":{"row":51,"column":5},"end":{"row":51,"column":6},"action":"insert","lines":[" "]},{"start":{"row":51,"column":6},"end":{"row":51,"column":7},"action":"insert","lines":[" "]},{"start":{"row":51,"column":7},"end":{"row":51,"column":8},"action":"insert","lines":[" "]}],[{"start":{"row":53,"column":0},"end":{"row":53,"column":1},"action":"insert","lines":[" "],"id":42},{"start":{"row":53,"column":1},"end":{"row":53,"column":2},"action":"insert","lines":[" "]},{"start":{"row":53,"column":2},"end":{"row":53,"column":3},"action":"insert","lines":[" "]},{"start":{"row":53,"column":3},"end":{"row":53,"column":4},"action":"insert","lines":[" "]}],[{"start":{"row":56,"column":3},"end":{"row":56,"column":4},"action":"insert","lines":[" "],"id":43}],[{"start":{"row":58,"column":0},"end":{"row":58,"column":1},"action":"insert","lines":[" "],"id":44},{"start":{"row":58,"column":1},"end":{"row":58,"column":2},"action":"insert","lines":[" "]},{"start":{"row":58,"column":2},"end":{"row":58,"column":3},"action":"insert","lines":[" "]},{"start":{"row":58,"column":3},"end":{"row":58,"column":4},"action":"insert","lines":[" "]}],[{"start":{"row":59,"column":10},"end":{"row":59,"column":11},"action":"insert","lines":["\\"],"id":45},{"start":{"row":59,"column":11},"end":{"row":59,"column":12},"action":"insert","lines":["n"]}],[{"start":{"row":59,"column":15},"end":{"row":59,"column":16},"action":"insert","lines":["i"],"id":46},{"start":{"row":59,"column":16},"end":{"row":59,"column":17},"action":"insert","lines":["n"]},{"start":{"row":59,"column":17},"end":{"row":59,"column":18},"action":"insert","lines":["t"]}],[{"start":{"row":59,"column":18},"end":{"row":59,"column":19},"action":"insert","lines":[" "],"id":47}],[{"start":{"row":59,"column":19},"end":{"row":59,"column":20},"action":"insert","lines":["d"],"id":48},{"start":{"row":59,"column":20},"end":{"row":59,"column":21},"action":"insert","lines":["o"]}],[{"start":{"row":59,"column":21},"end":{"row":59,"column":22},"action":"insert","lines":[";"],"id":49}],[{"start":{"row":59,"column":22},"end":{"row":59,"column":23},"action":"insert","lines":["\\"],"id":50},{"start":{"row":59,"column":23},"end":{"row":59,"column":24},"action":"insert","lines":["n"]}],[{"start":{"row":60,"column":4},"end":{"row":60,"column":6},"action":"remove","lines":["do"],"id":51}],[{"start":{"row":62,"column":0},"end":{"row":62,"column":1},"action":"insert","lines":[" "],"id":52},{"start":{"row":62,"column":1},"end":{"row":62,"column":2},"action":"insert","lines":[" "]},{"start":{"row":62,"column":2},"end":{"row":62,"column":3},"action":"insert","lines":[" "]},{"start":{"row":62,"column":3},"end":{"row":62,"column":4},"action":"insert","lines":[" "]},{"start":{"row":62,"column":4},"end":{"row":62,"column":5},"action":"insert","lines":[" "]}],[{"start":{"row":66,"column":0},"end":{"row":66,"column":1},"action":"insert","lines":[" "],"id":53},{"start":{"row":66,"column":1},"end":{"row":66,"column":2},"action":"insert","lines":[" "]},{"start":{"row":66,"column":2},"end":{"row":66,"column":3},"action":"insert","lines":[" "]},{"start":{"row":66,"column":3},"end":{"row":66,"column":4},"action":"insert","lines":[" "]},{"start":{"row":66,"column":4},"end":{"row":66,"column":5},"action":"insert","lines":[" "]},{"start":{"row":66,"column":5},"end":{"row":66,"column":6},"action":"insert","lines":[" "]},{"start":{"row":66,"column":6},"end":{"row":66,"column":7},"action":"insert","lines":[" "]}],[{"start":{"row":68,"column":2},"end":{"row":68,"column":3},"action":"insert","lines":[" "],"id":54},{"start":{"row":68,"column":3},"end":{"row":68,"column":4},"action":"insert","lines":[" "]},{"start":{"row":68,"column":4},"end":{"row":68,"column":5},"action":"insert","lines":[" "]},{"start":{"row":68,"column":5},"end":{"row":68,"column":6},"action":"insert","lines":[" "]},{"start":{"row":68,"column":6},"end":{"row":68,"column":7},"action":"insert","lines":[" "]}],[{"start":{"row":69,"column":0},"end":{"row":69,"column":1},"action":"insert","lines":[" "],"id":55},{"start":{"row":69,"column":1},"end":{"row":69,"column":2},"action":"insert","lines":[" "]},{"start":{"row":69,"column":2},"end":{"row":69,"column":3},"action":"insert","lines":[" "]},{"start":{"row":69,"column":3},"end":{"row":69,"column":4},"action":"insert","lines":[" "]},{"start":{"row":69,"column":4},"end":{"row":69,"column":5},"action":"insert","lines":[" "]},{"start":{"row":69,"column":5},"end":{"row":69,"column":6},"action":"insert","lines":[" "]},{"start":{"row":69,"column":6},"end":{"row":69,"column":7},"action":"insert","lines":[" "]}],[{"start":{"row":71,"column":0},"end":{"row":71,"column":1},"action":"insert","lines":[" "],"id":56},{"start":{"row":71,"column":1},"end":{"row":71,"column":2},"action":"insert","lines":[" "]},{"start":{"row":71,"column":2},"end":{"row":71,"column":3},"action":"insert","lines":[" "]},{"start":{"row":71,"column":3},"end":{"row":71,"column":4},"action":"insert","lines":[" "]}],[{"start":{"row":59,"column":4},"end":{"row":59,"column":7},"action":"remove","lines":["int"],"id":57}],[{"start":{"row":59,"column":5},"end":{"row":59,"column":6},"action":"insert","lines":[" "],"id":58},{"start":{"row":59,"column":6},"end":{"row":59,"column":7},"action":"insert","lines":[" "]},{"start":{"row":59,"column":7},"end":{"row":59,"column":8},"action":"insert","lines":[" "]},{"start":{"row":59,"column":8},"end":{"row":59,"column":9},"action":"insert","lines":[" "]}],[{"start":{"row":59,"column":16},"end":{"row":60,"column":0},"action":"insert","lines":["",""],"id":59},{"start":{"row":60,"column":0},"end":{"row":60,"column":9},"action":"insert","lines":["         "]}],[{"start":{"row":59,"column":9},"end":{"row":59,"column":10},"action":"insert","lines":["i"],"id":60},{"start":{"row":59,"column":10},"end":{"row":59,"column":11},"action":"insert","lines":["n"]}],[{"start":{"row":59,"column":11},"end":{"row":59,"column":12},"action":"remove","lines":["n"],"id":61},{"start":{"row":59,"column":11},"end":{"row":59,"column":12},"action":"insert","lines":["t"]}],[{"start":{"row":59,"column":12},"end":{"row":59,"column":13},"action":"insert","lines":[" "],"id":62},{"start":{"row":59,"column":13},"end":{"row":59,"column":14},"action":"insert","lines":["n"]}],[{"start":{"row":60,"column":9},"end":{"row":60,"column":10},"action":"insert","lines":[" "],"id":63},{"start":{"row":60,"column":10},"end":{"row":60,"column":11},"action":"insert","lines":[" "]}],[{"start":{"row":63,"column":5},"end":{"row":63,"column":6},"action":"remove","lines":["{"],"id":64}],[{"start":{"row":61,"column":4},"end":{"row":61,"column":5},"action":"insert","lines":["{"],"id":65}],[{"start":{"row":66,"column":4},"end":{"row":66,"column":30},"action":"remove","lines":["n = get_int(\"%s\", prompt);"],"id":66}],[{"start":{"row":63,"column":4},"end":{"row":63,"column":30},"action":"insert","lines":["n = get_int(\"%s\", prompt);"],"id":67}],[{"start":{"row":67,"column":7},"end":{"row":67,"column":8},"action":"remove","lines":["}"],"id":68}],[{"start":{"row":64,"column":7},"end":{"row":64,"column":8},"action":"insert","lines":["{"],"id":69}],[{"start":{"row":69,"column":7},"end":{"row":70,"column":16},"action":"remove","lines":["while (n < 1 || n > 8);","       return n;"],"id":70}],[{"start":{"row":66,"column":4},"end":{"row":67,"column":16},"action":"insert","lines":["while (n < 1 || n > 8);","       return n;"],"id":71}],[{"start":{"row":72,"column":3},"end":{"row":72,"column":5},"action":"remove","lines":[" }"],"id":72}],[{"start":{"row":69,"column":4},"end":{"row":69,"column":6},"action":"insert","lines":[" }"],"id":73},{"start":{"row":69,"column":0},"end":{"row":69,"column":5},"action":"remove","lines":["     "]},{"start":{"row":69,"column":0},"end":{"row":69,"column":7},"action":"insert","lines":["       "]}],[{"start":{"row":49,"column":13},"end":{"row":49,"column":26},"action":"remove","lines":["printf(\"\\n\");"],"id":74}],[{"start":{"row":49,"column":12},"end":{"row":49,"column":25},"action":"insert","lines":["printf(\"\\n\");"],"id":75}],[{"start":{"row":59,"column":8},"end":{"row":59,"column":9},"action":"remove","lines":[" "],"id":76}],[{"start":{"row":59,"column":17},"end":{"row":59,"column":19},"action":"remove","lines":["  "],"id":77},{"start":{"row":59,"column":17},"end":{"row":60,"column":0},"action":"insert","lines":["",""]},{"start":{"row":60,"column":0},"end":{"row":60,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":61,"column":10},"end":{"row":61,"column":20},"action":"remove","lines":[" int do;\\n"],"id":78}],[{"start":{"row":61,"column":8},"end":{"row":61,"column":18},"action":"insert","lines":[" int do;\\n"],"id":79}],[{"start":{"row":61,"column":8},"end":{"row":61,"column":9},"action":"remove","lines":[" "],"id":80}],[{"start":{"row":67,"column":4},"end":{"row":67,"column":5},"action":"insert","lines":[" "],"id":81},{"start":{"row":67,"column":5},"end":{"row":67,"column":6},"action":"insert","lines":[" "]},{"start":{"row":67,"column":6},"end":{"row":67,"column":7},"action":"insert","lines":[" "]}],[{"start":{"row":70,"column":7},"end":{"row":70,"column":8},"action":"remove","lines":["}"],"id":82}],[{"start":{"row":70,"column":3},"end":{"row":70,"column":4},"action":"insert","lines":["}"],"id":83},{"start":{"row":70,"column":0},"end":{"row":70,"column":3},"action":"remove","lines":["   "]},{"start":{"row":70,"column":0},"end":{"row":70,"column":7},"action":"insert","lines":["       "]}],[{"start":{"row":70,"column":6},"end":{"row":70,"column":7},"action":"remove","lines":[" "],"id":84}],[{"start":{"row":70,"column":5},"end":{"row":70,"column":6},"action":"remove","lines":[" "],"id":85},{"start":{"row":70,"column":4},"end":{"row":70,"column":5},"action":"remove","lines":[" "]}],[{"start":{"row":59,"column":14},"end":{"row":59,"column":16},"action":"remove","lines":["\\n"],"id":86}],[{"start":{"row":60,"column":8},"end":{"row":60,"column":10},"action":"insert","lines":["\\n"],"id":87}],[{"start":{"row":60,"column":10},"end":{"row":61,"column":0},"action":"insert","lines":["",""],"id":88},{"start":{"row":61,"column":0},"end":{"row":61,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":62,"column":14},"end":{"row":62,"column":17},"action":"remove","lines":[";\\n"],"id":89}],[{"start":{"row":63,"column":5},"end":{"row":64,"column":0},"action":"insert","lines":["",""],"id":90},{"start":{"row":64,"column":0},"end":{"row":64,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":62,"column":14},"end":{"row":62,"column":16},"action":"remove","lines":["  "],"id":91},{"start":{"row":62,"column":14},"end":{"row":63,"column":0},"action":"insert","lines":["",""]},{"start":{"row":63,"column":0},"end":{"row":63,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":63,"column":8},"end":{"row":63,"column":9},"action":"insert","lines":[" "],"id":92},{"start":{"row":63,"column":9},"end":{"row":63,"column":10},"action":"insert","lines":[" "]},{"start":{"row":63,"column":10},"end":{"row":63,"column":11},"action":"insert","lines":[" "]},{"start":{"row":63,"column":11},"end":{"row":63,"column":12},"action":"insert","lines":[" "]}],[{"start":{"row":63,"column":12},"end":{"row":63,"column":15},"action":"insert","lines":[";\\n"],"id":93}],[{"start":{"row":63,"column":15},"end":{"row":64,"column":0},"action":"insert","lines":["",""],"id":94},{"start":{"row":64,"column":0},"end":{"row":64,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":68,"column":4},"end":{"row":68,"column":31},"action":"remove","lines":["n = get_int(\"%s\", prompt); "],"id":95}],[{"start":{"row":68,"column":4},"end":{"row":68,"column":5},"action":"insert","lines":[" "],"id":96},{"start":{"row":68,"column":5},"end":{"row":68,"column":6},"action":"insert","lines":[" "]},{"start":{"row":68,"column":6},"end":{"row":68,"column":7},"action":"insert","lines":[" "]},{"start":{"row":68,"column":7},"end":{"row":68,"column":8},"action":"insert","lines":[" "]}],[{"start":{"row":68,"column":8},"end":{"row":68,"column":35},"action":"insert","lines":["n = get_int(\"%s\", prompt); "],"id":97}],[{"start":{"row":69,"column":7},"end":{"row":69,"column":8},"action":"insert","lines":[" "],"id":98}],[{"start":{"row":71,"column":7},"end":{"row":71,"column":8},"action":"insert","lines":[" "],"id":99},{"start":{"row":71,"column":8},"end":{"row":71,"column":9},"action":"insert","lines":[" "]},{"start":{"row":71,"column":9},"end":{"row":71,"column":10},"action":"insert","lines":[" "]}],[{"start":{"row":72,"column":7},"end":{"row":72,"column":8},"action":"insert","lines":[" "],"id":100},{"start":{"row":72,"column":8},"end":{"row":72,"column":9},"action":"insert","lines":[" "]},{"start":{"row":72,"column":9},"end":{"row":72,"column":10},"action":"insert","lines":[" "]}],[{"start":{"row":74,"column":4},"end":{"row":74,"column":5},"action":"insert","lines":[" "],"id":101},{"start":{"row":74,"column":5},"end":{"row":74,"column":6},"action":"insert","lines":[" "]},{"start":{"row":74,"column":6},"end":{"row":74,"column":7},"action":"insert","lines":[" "]},{"start":{"row":74,"column":7},"end":{"row":74,"column":8},"action":"insert","lines":[" "]}],[{"start":{"row":0,"column":0},"end":{"row":77,"column":3},"action":"remove","lines":["// Prints two pyramids of #","// Based on World 1-1 in NES Super Mario","","#include <cs50.h>","#include <stdio.h>","","int get_height(string prompt);","void pyramid(int height);","","int main(int argc, string argv[])","{","    int height = get_height(\"Height: \");","    pyramid(height);","}","","","// Print pyramid by filling grid with space or hash characters","void pyramid(int rows)","{","    for (int i = 0; i < rows; i++)","    {","        // Maximum number of columns => rows * 2 + 2","        // Space for two pyramids + two blocks inbetween","        for (int col = 0; col < rows * 2 + 2; col++)","        {    ","            // Space left pyramid","            // Grid starts at 0 => rows - 1","            // 1 = 0, 2 = 1, 3 = 2, ...","            if (col + i < (rows - 1))","            {","                printf(\" \");","            }  ","            // Space between two pyramids","            // Same 2 blocks in every col for each row","            else if ((col == rows || col == rows + 1))","            {","                printf(\" \");","            }","            // Null space right pyramid","            // Space inbetween (2) + (1) first col always hashes => rows + 3","            else if (col - i >= rows + 3)","            {","                printf(\"\");","            }","            else","            {","                printf(\"#\");","            }    ","           ","            printf(\"\\n\"); ","        ","        }","    ","    }","","// Prompt user for integer between 1 and 8","    int get_height(string prompt)","","    {","        int n; ","        \\n","        ","        int do","            ;\\n","            ","    {","        ","    ","        n = get_int(\"%s\", prompt); ","        { ","        ","          while (n < 1 || n > 8);","          return n;","       ","        }    ","       ","    ","   "],"id":102},{"start":{"row":0,"column":0},"end":{"row":50,"column":1},"action":"insert","lines":["#include <cs50.h>","#include <stdio.h>","","void pyramid(int n);","","// asks for pyramid height, checks the input and then executes the function","int main(void)","{","    int height = 0;","    // asks for height until it is an int comprised between 1 and 8","    do","    {","        height = get_int(\"Height: \");","    }","    while (!(height >= 1 && height <= 8));","    ","    pyramid(height);","}","","// prints empty spaces","void space(int l)","{","    for (int k = 0; k < l; k++)","    {","        printf(\" \");","    }    ","}","","// generates a pyramid of hashes n tall and twice as large as the line number (i)","void pyramid(int n)","{","    for (int i = 0; i < n; i++)","    { ","        space(n - i - 1);","        // prints the actual ramp","        for (int j = 0; j <= i; j++)","        {","            printf(\"#\");","        } ","        ","        space(2);","        // prints the actual ramp","        for (int j = 0; j <= i; j++)","        {","            printf(\"#\");","        } ","        ","        // moves one line down","        printf(\"\\n\");","    }","}"]}]]},"ace":{"folds":[],"scrolltop":522,"scrollleft":0,"selection":{"start":{"row":50,"column":1},"end":{"row":50,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":36,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1597039496575,"hash":"8d23dc89beb46da5b67bf346d86ee77fd2c7bdc0"}