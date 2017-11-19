# font8x8gen

## fontmaker usage

Edit fontmaker.py:

```
# 0x41 A
data8x8B[0x41] = [
"  *     ",
" * *    ",
"*   *   ",
"*   *   ",
"*****   ",
"*   *   ",
"*   *   ",
"        ",
]
```

And run:

```
python fontmaker.py
```

You will get your own font8x8.h, put it into your project.

## font8x8.h usage

```
#include "font8x8.h"

int color = Font8x8GetColor('A', 1, 1); // color == '0xf';
int color = Font8x8GetColor('A', 0, 0); // color == '0x0';
```
