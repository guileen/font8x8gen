#define Font8x8GetColor(c, x, y) font8x8[c][y]>>((7-x)*4)&0xf

unsigned long font8x8[256][8]={
  // 0x00 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x01 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x02 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x03 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x04 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x05 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x06 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x07 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x08 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x09 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x0a ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x0b ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x0c ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x0d ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x0e ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x0f ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x10 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x11 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x12 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x13 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x14 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x15 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x16 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x17 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x18 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x19 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x1a ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x1b ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x1c ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x1d ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x1e ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x1f ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x20 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x21 '!'
  { 0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00000000,
    0x00f00000,
    0x00000000},
  // 0x22 '"'
  { 0x0f0f0000,
    0x0f0f0000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x23 '#'
  { 0x0f0f0000,
    0x0f0f0000,
    0xfffff000,
    0x0f0f0000,
    0xfffff000,
    0x0f0f0000,
    0x0f0f0000,
    0x00000000},
  // 0x24 '$'
  { 0x00f00000,
    0x0fff0000,
    0xf0000000,
    0x0fff0000,
    0x0000f000,
    0x0fff0000,
    0x00f00000,
    0x00000000},
  // 0x25 '%'
  { 0x00000000,
    0x8f000f00,
    0xf800f000,
    0x000f0000,
    0x00f00000,
    0x0f008f00,
    0xf000f800,
    0x00000000},
  // 0x26 '&'
  { 0x00ff0000,
    0x0f00f000,
    0x0f0f0000,
    0x0ff00f00,
    0xf0f0f000,
    0xf00f0000,
    0x0ff0ff00,
    0x00000000},
  // 0x27 '''
  { 0x0f000000,
    0x0f000000,
    0xf0000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x28 '('
  { 0x000f0000,
    0x00f00000,
    0x0f000000,
    0x0f000000,
    0x0f000000,
    0x00f00000,
    0x000f0000,
    0x00000000},
  // 0x29 ')'
  { 0x0f000000,
    0x00f00000,
    0x000f0000,
    0x000f0000,
    0x000f0000,
    0x00f00000,
    0x0f000000,
    0x00000000},
  // 0x2a '*'
  { 0x00000000,
    0x0f00f000,
    0x00ff0000,
    0xffffff00,
    0x00ff0000,
    0x0f00f000,
    0x00000000,
    0x00000000},
  // 0x2b '+'
  { 0x00000000,
    0x00f00000,
    0x00f00000,
    0xfffff000,
    0x00f00000,
    0x00f00000,
    0x00000000,
    0x00000000},
  // 0x2c ','
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00f00000,
    0x00f00000,
    0x0f000000},
  // 0x2d '-'
  { 0x00000000,
    0x00000000,
    0x00000000,
    0xfffff000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x2e '.'
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00f00000,
    0x00f00000,
    0x00000000,
    0x00000000},
  // 0x2f '/'
  { 0x00000000,
    0x0000f000,
    0x000f0000,
    0x00f00000,
    0x0f000000,
    0xf0000000,
    0x00000000,
    0x00000000},
  // 0x30 '0'
  { 0x0fff0000,
    0xf000f000,
    0xf00ff000,
    0xf0f0f000,
    0xff00f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x31 '1'
  { 0x00f00000,
    0x0ff00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0x32 '2'
  { 0x0fff0000,
    0xf000f000,
    0x0000f000,
    0x00ff0000,
    0x0f000000,
    0xf0000000,
    0xfffff000,
    0x00000000},
  // 0x33 '3'
  { 0x0fff0000,
    0xf000f000,
    0x0000f000,
    0x0fff0000,
    0x0000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x34 '4'
  { 0x000f0000,
    0x0f0f0000,
    0x0f0f0000,
    0xf00f0000,
    0xfffff000,
    0x000f0000,
    0x000f0000,
    0x00000000},
  // 0x35 '5'
  { 0xfffff000,
    0xf0000000,
    0xffff0000,
    0x0000f000,
    0x0000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x36 '6'
  { 0x0fff0000,
    0xf0000000,
    0xf0000000,
    0xffff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x37 '7'
  { 0xfffff000,
    0x0000f000,
    0x000f0000,
    0x00f00000,
    0x00f00000,
    0x0f000000,
    0x0f000000,
    0x00000000},
  // 0x38 '8'
  { 0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x39 '9'
  { 0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x0000f000,
    0x0000f000,
    0x0fff0000,
    0x00000000},
  // 0x3a ':'
  { 0x00000000,
    0x00f00000,
    0x00000000,
    0x00000000,
    0x00f00000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x3b ';'
  { 0x00000000,
    0x00f00000,
    0x00f00000,
    0x00000000,
    0x00f00000,
    0x00f00000,
    0x0f000000,
    0x00000000},
  // 0x3c '<'
  { 0x000f0000,
    0x00f00000,
    0x0f000000,
    0xf0000000,
    0x0f000000,
    0x00f00000,
    0x000f0000,
    0x00000000},
  // 0x3d '='
  { 0x00000000,
    0x00000000,
    0xfffff000,
    0x00000000,
    0x00000000,
    0xfffff000,
    0x00000000,
    0x00000000},
  // 0x3e '>'
  { 0x0f000000,
    0x00f00000,
    0x000f0000,
    0x0000f000,
    0x000f0000,
    0x00f00000,
    0x0f000000,
    0x00000000},
  // 0x3f '?'
  { 0x0fff0000,
    0xf000f000,
    0x0000f000,
    0x000f0000,
    0x00f00000,
    0x00000000,
    0x00f00000,
    0x00000000},
  // 0x40 '@'
  { 0x0fff0000,
    0xf000f000,
    0xf0fff000,
    0xf0f0f000,
    0xf0fff000,
    0xf0000000,
    0x0fff0000,
    0x00000000},
  // 0x41 'A'
  { 0x00f00000,
    0x0f0f0000,
    0xf000f000,
    0xf000f000,
    0xfffff000,
    0xf000f000,
    0xf000f000,
    0x00000000},
  // 0x42 'B'
  { 0xffff0000,
    0x0f00f000,
    0x0f00f000,
    0x0fff0000,
    0x0f00f000,
    0x0f00f000,
    0x0fff0000,
    0x00000000},
  // 0x43 'C'
  { 0x0fff0000,
    0xf000f000,
    0xf0000000,
    0xf0000000,
    0xf0000000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x44 'D'
  { 0xffff0000,
    0x0f00f000,
    0x0f00f000,
    0x0f00f000,
    0x0f00f000,
    0x0f00f000,
    0x0fff0000,
    0x00000000},
  // 0x45 'E'
  { 0xfffff000,
    0xf0000000,
    0xf0000000,
    0xfff00000,
    0xf0000000,
    0xf0000000,
    0xfffff000,
    0x00000000},
  // 0x46 'F'
  { 0xfffff000,
    0x0f000000,
    0x0f000000,
    0x0fff0000,
    0x0f000000,
    0x0f000000,
    0x0f000000,
    0x00000000},
  // 0x47 'G'
  { 0x0fff0000,
    0xf000f000,
    0xf0000000,
    0xf0000000,
    0xf00ff000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0x48 'H'
  { 0xf000f000,
    0xf000f000,
    0xf000f000,
    0xfffff000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x00000000},
  // 0x49 'I'
  { 0x0fff0000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0x4a 'J'
  { 0x000ff000,
    0x0000f000,
    0x0000f000,
    0x0000f000,
    0x0000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x4b 'K'
  { 0xf000f000,
    0xf00f0000,
    0xf0f00000,
    0xff000000,
    0xf0f00000,
    0xf00f0000,
    0xf000f000,
    0x00000000},
  // 0x4c 'L'
  { 0xf0000000,
    0xf0000000,
    0xf0000000,
    0xf0000000,
    0xf0000000,
    0xf0000000,
    0xfffff000,
    0x00000000},
  // 0x4d 'M'
  { 0xf000f000,
    0xff0ff000,
    0xf0f0f000,
    0xf0f0f000,
    0xf0f0f000,
    0xf000f000,
    0xf000f000,
    0x00000000},
  // 0x4e 'N'
  { 0xf000f000,
    0xf800f000,
    0xff00f000,
    0xf0f0f000,
    0xf00ff000,
    0xf008f000,
    0xf000f000,
    0x00000000},
  // 0x4f 'O'
  { 0x0fff0000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x50 'P'
  { 0xffff0000,
    0x0f00f000,
    0x0f00f000,
    0x0fff0000,
    0x0f000000,
    0x0f000000,
    0x0f000000,
    0x00000000},
  // 0x51 'Q'
  { 0x0fff0000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf0f0f000,
    0x0fff0000,
    0x0000f000,
    0x00000000},
  // 0x52 'R'
  { 0xffff0000,
    0xf000f000,
    0xf000f000,
    0xffff0000,
    0xf0f00000,
    0xf00f0000,
    0xf000f000,
    0x00000000},
  // 0x53 'S'
  { 0x0fff0000,
    0xf000f000,
    0xf0000000,
    0x0fff0000,
    0x0000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x54 'T'
  { 0xfffff000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00000000},
  // 0x55 'U'
  { 0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x56 'V'
  { 0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0f0f0000,
    0x0f0f0000,
    0x00f00000,
    0x00f00000,
    0x00000000},
  // 0x57 'W'
  { 0xf000f000,
    0xf000f000,
    0xf0f0f000,
    0xf0f0f000,
    0xf0f0f000,
    0xff0ff000,
    0x0f0f0000,
    0x00000000},
  // 0x58 'X'
  { 0xf000f000,
    0xf000f000,
    0x0f0f0000,
    0x00f00000,
    0x0f0f0000,
    0xf000f000,
    0xf000f000,
    0x00000000},
  // 0x59 'Y'
  { 0xf000f000,
    0xf000f000,
    0x0f0f0000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00000000},
  // 0x5a 'Z'
  { 0xfffff000,
    0x0000f000,
    0x000f0000,
    0x00f00000,
    0x0f000000,
    0xf0000000,
    0xfffff000,
    0x00000000},
  // 0x5b '['
  { 0x0fff0000,
    0x0f000000,
    0x0f000000,
    0x0f000000,
    0x0f000000,
    0x0f000000,
    0x0fff0000,
    0x00000000},
  // 0x5c '\'
  { 0xf0000000,
    0x0f000000,
    0x0f000000,
    0x00f00000,
    0x00f00000,
    0x000f0000,
    0x000f0000,
    0x00000000},
  // 0x5d ']'
  { 0x0fff0000,
    0x000f0000,
    0x000f0000,
    0x000f0000,
    0x000f0000,
    0x000f0000,
    0x0fff0000,
    0x00000000},
  // 0x5e '^'
  { 0x00000000,
    0x00f00000,
    0x0f0f0000,
    0xf000f000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x5f '_'
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0xfffff000},
  // 0x60 '`'
  { 0x00000000,
    0x0f000000,
    0x00f00000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x61 'a'
  { 0x00000000,
    0x00000000,
    0x0fff0000,
    0x0000f000,
    0x0ffff000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0x62 'b'
  { 0xf0000000,
    0xf0000000,
    0xffff0000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xffff0000,
    0x00000000},
  // 0x63 'c'
  { 0x00000000,
    0x00000000,
    0x0ffff000,
    0xf0000000,
    0xf0000000,
    0xf0000000,
    0x0ffff000,
    0x00000000},
  // 0x64 'd'
  { 0x0000f000,
    0x0000f000,
    0x0ffff000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0x65 'e'
  { 0x00000000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xfffff000,
    0xf0000000,
    0x0fff0000,
    0x00000000},
  // 0x66 'f'
  { 0x00fff000,
    0x0f000000,
    0x0f000000,
    0xfffff000,
    0x0f000000,
    0x0f000000,
    0x0f000000,
    0x00000000},
  // 0x67 'g'
  { 0x00000000,
    0x00000000,
    0x0ffff000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x0000f000,
    0xffff0000},
  // 0x68 'h'
  { 0xf0000000,
    0xf0000000,
    0xf0ff0000,
    0xff00f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x00000000},
  // 0x69 'i'
  { 0x00000000,
    0x00f00000,
    0x00000000,
    0x0ff00000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0x6a 'j'
  { 0x00000000,
    0x000f0000,
    0x00000000,
    0x00ff0000,
    0x000f0000,
    0x000f0000,
    0xf00f0000,
    0x0ff00000},
  // 0x6b 'k'
  { 0xf0000000,
    0xf0000000,
    0xf00ff000,
    0xf0f00000,
    0xff000000,
    0xf0f00000,
    0xf00ff000,
    0x00000000},
  // 0x6c 'l'
  { 0x0ff00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00ff0000,
    0x00000000},
  // 0x6d 'm'
  { 0x00000000,
    0x00000000,
    0xffff0000,
    0xf0f0f000,
    0xf0f0f000,
    0xf0f0f000,
    0xf0f0f000,
    0x00000000},
  // 0x6e 'n'
  { 0x00000000,
    0x00000000,
    0xffff0000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x00000000},
  // 0x6f 'o'
  { 0x00000000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0x70 'p'
  { 0x00000000,
    0x00000000,
    0xffff0000,
    0xf000f000,
    0xf000f000,
    0xffff0000,
    0xf0000000,
    0xf0000000},
  // 0x71 'q'
  { 0x00000000,
    0x00000000,
    0x0ffff000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x0000f000,
    0x0000f000},
  // 0x72 'r'
  { 0x00000000,
    0x00000000,
    0xffff0000,
    0xf000f000,
    0xf0000000,
    0xf0000000,
    0xf0000000,
    0x00000000},
  // 0x73 's'
  { 0x00000000,
    0x00000000,
    0x0ffff000,
    0xf0000000,
    0x0fff0000,
    0x0000f000,
    0xffff0000,
    0x00000000},
  // 0x74 't'
  { 0x00f00000,
    0x00f00000,
    0x0ffff000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x000ff000,
    0x00000000},
  // 0x75 'u'
  { 0x00000000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0x76 'v'
  { 0x00000000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf00f0000,
    0x0ff00000,
    0x0f000000,
    0x00000000},
  // 0x77 'w'
  { 0x00000000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf0f0f000,
    0xf0f0f000,
    0xff0f0000,
    0x00000000},
  // 0x78 'x'
  { 0x00000000,
    0x00000000,
    0xff00f000,
    0x00ff0000,
    0x00f00000,
    0x0ff00000,
    0xf00ff000,
    0x00000000},
  // 0x79 'y'
  { 0x00000000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf00ff000,
    0x0ff0f000,
    0x0000f000,
    0xffff0000},
  // 0x7a 'z'
  { 0x00000000,
    0x00000000,
    0x0ffff000,
    0xf00f0000,
    0x00f00000,
    0x0f00f000,
    0xffff0000,
    0x00000000},
  // 0x7b '{'
  { 0x000f0000,
    0x00f00000,
    0x00f00000,
    0x0f000000,
    0x00f00000,
    0x00f00000,
    0x000f0000,
    0x00000000},
  // 0x7c '|'
  { 0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00000000},
  // 0x7d '}'
  { 0x0f000000,
    0x00f00000,
    0x00f00000,
    0x000f0000,
    0x00f00000,
    0x00f00000,
    0x0f000000,
    0x00000000},
  // 0x7e '~'
  { 0x0ff0f000,
    0xf00f0000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x7f ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x80 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x81 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x82 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x83 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x84 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x85 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x86 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x87 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x88 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x89 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x8a ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x8b ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x8c ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x8d ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x8e ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x8f ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x90 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x91 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x92 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x93 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x94 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x95 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x96 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x97 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x98 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x99 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x9a ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x9b ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x9c ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x9d ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x9e ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0x9f ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xa0 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xa1 ''
  { 0x00f00000,
    0x00f00000,
    0x00000000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00000000},
  // 0xa2 ''
  { 0x00f00000,
    0x00f00000,
    0x0ffff000,
    0xf0000000,
    0xf0000000,
    0x0ffff000,
    0x00f00000,
    0x00f00000},
  // 0xa3 ''
  { 0x00ff0000,
    0x0f000000,
    0x0f000000,
    0xffff0000,
    0x0f000000,
    0xf000f000,
    0xffff0000,
    0x00000000},
  // 0xa4 ''
  { 0x00000000,
    0x00000000,
    0xf000f000,
    0x0fff0000,
    0x0f0f0000,
    0x0fff0000,
    0xf000f000,
    0x00000000},
  // 0xa5 ''
  { 0xf000f000,
    0xf000f000,
    0x0f0f0000,
    0xfffff000,
    0x00f00000,
    0xfffff000,
    0x00f00000,
    0x00f00000},
  // 0xa6 ''
  { 0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00000000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00000000},
  // 0xa7 ''
  { 0x0fff0000,
    0xf0000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x0000f000,
    0x0fff0000},
  // 0xa8 ''
  { 0x0f0f0000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xa9 ''
  { 0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf0fff000,
    0xf0fff000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xaa ''
  { 0x0fff0000,
    0xf00f0000,
    0xf00f0000,
    0x0ffff000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xab ''
  { 0x00000000,
    0x00f0f000,
    0x0f0f0000,
    0xf0f00000,
    0x0f0f0000,
    0x00f0f000,
    0x00000000,
    0x00000000},
  // 0xac ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0xfffff000,
    0x0000f000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xad ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xae ''
  { 0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf0f0f000,
    0xf00ff000,
    0xf0f0f000,
    0x0fff0000,
    0x00000000},
  // 0xaf ''
  { 0x0ffff000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xb0 ''
  { 0x0ff00000,
    0xf00f0000,
    0xf00f0000,
    0x0ff00000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xb1 ''
  { 0x00f00000,
    0x00f00000,
    0xfffff000,
    0x00f00000,
    0x00f00000,
    0x00000000,
    0xfffff000,
    0x00000000},
  // 0xb2 ''
  { 0x0fff0000,
    0x0000f000,
    0x00ff0000,
    0x0f000000,
    0xfffff000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xb3 ''
  { 0x0fff0000,
    0x0000f000,
    0x00ff0000,
    0x0000f000,
    0x0fff0000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xb4 ''
  { 0x000ff000,
    0x00ff0000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xb5 ''
  { 0x00000000,
    0x00000000,
    0x0f00f000,
    0x0f00f000,
    0x0f00f000,
    0x0fff0000,
    0x0f000000,
    0xf0000000},
  // 0xb6 ''
  { 0x0ffff000,
    0xf0f0f000,
    0xf0f0f000,
    0x0ff0f000,
    0x00f0f000,
    0x00f0f000,
    0x00f0f000,
    0x00000000},
  // 0xb7 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00ff0000,
    0x00ff0000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xb8 ''
  { 0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00ff0000,
    0x000ff000,
    0xffff0000},
  // 0xb9 ''
  { 0x00f00000,
    0x0ff00000,
    0x00f00000,
    0x0fff0000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xba ''
  { 0x08f80000,
    0x0f0f0000,
    0x0f0f0000,
    0x08f80000,
    0x00000000,
    0x00000000,
    0x00000000,
    0x00000000},
  // 0xbb ''
  { 0x00000000,
    0xf0f00000,
    0x0f0f0000,
    0x00f0f000,
    0x0f0f0000,
    0xf0f00000,
    0x00000000,
    0x00000000},
  // 0xbc ''
  { 0xf0000000,
    0xf00f0000,
    0xf0f00000,
    0x0f00f000,
    0xf00ff000,
    0x00fff000,
    0x0000f000,
    0x00000000},
  // 0xbd ''
  { 0xf0000000,
    0xf00f0000,
    0xf0f00000,
    0x0f0f0000,
    0xf0f0f000,
    0x000f0000,
    0x00fff000,
    0x00000000},
  // 0xbe ''
  { 0xfff00000,
    0x0f000000,
    0x00f0f000,
    0xff0f0000,
    0x00f0f000,
    0x0f0ff000,
    0xf0fff000,
    0x0000f000},
  // 0xbf ''
  { 0x00f00000,
    0x00000000,
    0x00f00000,
    0x0f000000,
    0xf0000000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xc0 ''
  { 0xfff00000,
    0x00000000,
    0x00f00000,
    0x0f0f0000,
    0xf000f000,
    0xfffff000,
    0xf000f000,
    0x00000000},
  // 0xc1 ''
  { 0x00fff000,
    0x00000000,
    0x00f00000,
    0x0f0f0000,
    0xf000f000,
    0xfffff000,
    0xf000f000,
    0x00000000},
  // 0xc2 ''
  { 0x00f00000,
    0x0f0f0000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xfffff000,
    0xf000f000,
    0x00000000},
  // 0xc3 ''
  { 0x0ff0f000,
    0xf00f0000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xfffff000,
    0xf000f000,
    0x00000000},
  // 0xc4 ''
  { 0x0f0f0000,
    0x00000000,
    0x00f00000,
    0x0f0f0000,
    0xf000f000,
    0xfffff000,
    0xf000f000,
    0x00000000},
  // 0xc5 ''
  { 0x0ff00000,
    0x0ff00000,
    0x00000000,
    0x0ff00000,
    0xf00f0000,
    0xffff0000,
    0xf00f0000,
    0x00000000},
  // 0xc6 ''
  { 0x00fff000,
    0x0f0f0000,
    0xf00f0000,
    0xfffff000,
    0xf00f0000,
    0xf00f0000,
    0xf00ff000,
    0x00000000},
  // 0xc7 ''
  { 0x0fff0000,
    0xf000f000,
    0xf0000000,
    0xf000f000,
    0x0fff0000,
    0x000f0000,
    0x0000f000,
    0x0fff0000},
  // 0xc8 ''
  { 0xfff00000,
    0x00000000,
    0xfffff000,
    0x0f000000,
    0x0fff0000,
    0x0f000000,
    0xfffff000,
    0x00000000},
  // 0xc9 ''
  { 0x00fff000,
    0x00000000,
    0xfffff000,
    0x0f000000,
    0x0fff0000,
    0x0f000000,
    0xfffff000,
    0x00000000},
  // 0xca ''
  { 0x00f00000,
    0x0f0f0000,
    0xfffff000,
    0x0f000000,
    0x0fff0000,
    0x0f000000,
    0xfffff000,
    0x00000000},
  // 0xcb ''
  { 0x0f0f0000,
    0x00000000,
    0xfffff000,
    0x0f000000,
    0x0fff0000,
    0x0f000000,
    0xfffff000,
    0x00000000},
  // 0xcc ''
  { 0xfff00000,
    0x00000000,
    0x0fff0000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0xcd ''
  { 0x00fff000,
    0x00000000,
    0x0fff0000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0xce ''
  { 0x00f00000,
    0x0f0f0000,
    0x00000000,
    0x0fff0000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0xcf ''
  { 0x0f0f0000,
    0x00000000,
    0x0fff0000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0xd0 ''
  { 0xffff0000,
    0x0f00f000,
    0x0f00f000,
    0xfff0f000,
    0x0f00f000,
    0x0f00f000,
    0xffff0000,
    0x00000000},
  // 0xd1 ''
  { 0xfffff000,
    0x00000000,
    0xf000f000,
    0xff00f000,
    0xf0f0f000,
    0xf0f0f000,
    0xf00ff000,
    0x00000000},
  // 0xd2 ''
  { 0xfff00000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xd3 ''
  { 0x00fff000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xd4 ''
  { 0x00f00000,
    0x0f0f0000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xd5 ''
  { 0x0ff0f000,
    0xf00f0000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xd6 ''
  { 0x0f0f0000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xd7 ''
  { 0x00000000,
    0xf000f000,
    0x0f0f0000,
    0x00f00000,
    0x0f0f0000,
    0xf000f000,
    0x00000000,
    0x00000000},
  // 0xd8 ''
  { 0x0000f000,
    0x0fff0000,
    0xf00ff000,
    0xf0f0f000,
    0xf0f0f000,
    0xff00f000,
    0x0fff0000,
    0xf0000000},
  // 0xd9 ''
  { 0xfff00000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xda ''
  { 0x00fff000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xdb ''
  { 0x00f00000,
    0x0f0f0000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xdc ''
  { 0x0f0f0000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xdd ''
  { 0x00fff000,
    0x00000000,
    0xf000f000,
    0x0f0f0000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x00000000},
  // 0xde ''
  { 0xfff00000,
    0x0f000000,
    0x0fff0000,
    0x0f00f000,
    0x0f00f000,
    0x0fff0000,
    0x0f000000,
    0xfff00000},
  // 0xdf ''
  { 0x00000000,
    0x00ff0000,
    0x0f00f000,
    0x0fff0000,
    0x0f00f000,
    0x0fff0000,
    0x0f000000,
    0x0f000000},
  // 0xe0 ''
  { 0xfff00000,
    0x00000000,
    0x0fff0000,
    0x0000f000,
    0x0ffff000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0xe1 ''
  { 0x00fff000,
    0x00000000,
    0x0fff0000,
    0x0000f000,
    0x0ffff000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0xe2 ''
  { 0x0fff0000,
    0xf000f000,
    0x0fff0000,
    0x0000f000,
    0x0ffff000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0xe3 ''
  { 0x0ff0f000,
    0xf00f0000,
    0x0fff0000,
    0x0000f000,
    0x0ffff000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0xe4 ''
  { 0x0f0f0000,
    0x00000000,
    0x0fff0000,
    0x0000f000,
    0x0ffff000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0xe5 ''
  { 0x00ff0000,
    0x00ff0000,
    0x0fff0000,
    0x0000f000,
    0x0ffff000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0xe6 ''
  { 0x00000000,
    0x00000000,
    0x0ffff000,
    0x000f0000,
    0x0ffff000,
    0xf00f0000,
    0x0ffff000,
    0x00000000},
  // 0xe7 ''
  { 0x00000000,
    0x00000000,
    0x0ffff000,
    0xf0000000,
    0xf0000000,
    0x0fff0000,
    0x0000f000,
    0x00ff0000},
  // 0xe8 ''
  { 0xfff00000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xfffff000,
    0xf0000000,
    0x0fff0000,
    0x00000000},
  // 0xe9 ''
  { 0x00fff000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xfffff000,
    0xf0000000,
    0x0fff0000,
    0x00000000},
  // 0xea ''
  { 0x00f00000,
    0x0f0f0000,
    0x0fff0000,
    0xf000f000,
    0xfffff000,
    0xf0000000,
    0x0fff0000,
    0x00000000},
  // 0xeb ''
  { 0x0f0f0000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xfffff000,
    0xf0000000,
    0x0fff0000,
    0x00000000},
  // 0xec ''
  { 0xfff00000,
    0x00000000,
    0x0ff00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0xed ''
  { 0x00fff000,
    0x00000000,
    0x0ff00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0xee ''
  { 0x00f00000,
    0x0f0f0000,
    0x00000000,
    0x0ff00000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0xef ''
  { 0x0f0f0000,
    0x00000000,
    0x0ff00000,
    0x00f00000,
    0x00f00000,
    0x00f00000,
    0x0fff0000,
    0x00000000},
  // 0xf0 ''
  { 0xff0ff000,
    0x00f00000,
    0xff0f0000,
    0x0000f000,
    0x0ffff000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xf1 ''
  { 0x0ff0f000,
    0xf00f0000,
    0x00000000,
    0xffff0000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x00000000},
  // 0xf2 ''
  { 0x00000000,
    0xfff00000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xf3 ''
  { 0x00000000,
    0x00fff000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xf4 ''
  { 0x00f00000,
    0x0f0f0000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xf5 ''
  { 0x0ff0f000,
    0xf00f0000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xf6 ''
  { 0x00000000,
    0x0f0f0000,
    0x00000000,
    0x0fff0000,
    0xf000f000,
    0xf000f000,
    0x0fff0000,
    0x00000000},
  // 0xf7 ''
  { 0x00000000,
    0x00f00000,
    0x00000000,
    0xfffff000,
    0x00000000,
    0x00f00000,
    0x00000000,
    0x00000000},
  // 0xf8 ''
  { 0x00000000,
    0x0000f000,
    0x0fff0000,
    0xf00ff000,
    0xf0f0f000,
    0xff00f000,
    0x0fff0000,
    0xf0000000},
  // 0xf9 ''
  { 0x00000000,
    0xfff00000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0xfa ''
  { 0x00000000,
    0x00fff000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0xfb ''
  { 0x00f00000,
    0x0f0f0000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0xfc ''
  { 0x00000000,
    0x0f0f0000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x00000000},
  // 0xfd ''
  { 0x00000000,
    0x00fff000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x0000f000,
    0xffff0000},
  // 0xfe ''
  { 0x00000000,
    0x00000000,
    0xf0000000,
    0xffff0000,
    0xf000f000,
    0xffff0000,
    0xf0000000,
    0x00000000},
  // 0xff ''
  { 0x00000000,
    0x0f0f0000,
    0x00000000,
    0xf000f000,
    0xf000f000,
    0x0ffff000,
    0x0000f000,
    0xffff0000},
};