# * is f
# , is 8
# ' ' is black

data8x8B=[['        ' for i in range(8)] for j in range(256)]
# 0x21 !
data8x8B[0x21] = [
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"        ",
"  *     ",
"        ",
]
# 0x22 "
data8x8B[0x22] = [
" * *    ",
" * *    ",
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
]
# 0x23 #
data8x8B[0x23] = [
" * *    ",
" * *    ",
"*****   ",
" * *    ",
"*****   ",
" * *    ",
" * *    ",
"        ",
]
# 0x24 $
data8x8B[0x24] = [
"  *     ",
" ***    ",
"*       ",
" ***    ",
"    *   ",
" ***    ",
"  *     ",
"        ",
]
# 0x25 %
data8x8B[0x25] = [
"        ",
",*   *  ",
"*,  *   ",
"   *    ",
"  *     ",
" *  ,*  ",
"*   *,  ",
"        ",
]
# 0x26 &
data8x8B[0x26] = [
"  **    ",
" *  *   ",
" * *    ",
" **  *  ",
"* * *   ",
"*  *    ",
" ** **  ",
"        ",
]
# 0x27 '
data8x8B[0x27] = [
" *      ",
" *      ",
"*       ",
"        ",
"        ",
"        ",
"        ",
"        ",
]
# 0x28 (
data8x8B[0x28] = [
"   *    ",
"  *     ",
" *      ",
" *      ",
" *      ",
"  *     ",
"   *    ",
"        ",
]
# 0x29 )
data8x8B[0x29] = [
" *      ",
"  *     ",
"   *    ",
"   *    ",
"   *    ",
"  *     ",
" *      ",
"        ",
]
# 0x2a *
data8x8B[0x2a] = [
"        ",
" *  *   ",
"  **    ",
"******  ",
"  **    ",
" *  *   ",
"        ",
"        ",
]
# 0x2b +
data8x8B[0x2b] = [
"        ",
"  *     ",
"  *     ",
"*****   ",
"  *     ",
"  *     ",
"        ",
"        ",
]
# 0x2c ,
data8x8B[0x2c] = [
"        ",
"        ",
"        ",
"        ",
"        ",
"  *     ",
"  *     ",
" *      ",
]
# 0x2d -
data8x8B[0x2d] = [
"        ",
"        ",
"        ",
"*****   ",
"        ",
"        ",
"        ",
"        ",
]
# 0x2e .
data8x8B[0x2e] = [
"        ",
"        ",
"        ",
"        ",
"  *     ",
"  *     ",
"        ",
"        ",
]
# 0x2f /
data8x8B[0x2f] = [
"        ",
"    *   ",
"   *    ",
"  *     ",
" *      ",
"*       ",
"        ",
"        ",
]
# 0x30 0
data8x8B[0x30] = [
" ***    ",
"*   *   ",
"*  **   ",
"* * *   ",
"**  *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0x31 1
data8x8B[0x31] = [
"  *     ",
" **     ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0x32 2
data8x8B[0x32] = [
" ***    ",
"*   *   ",
"    *   ",
"  **    ",
" *      ",
"*       ",
"*****   ",
"        ",
]
# 0x33 3
data8x8B[0x33] = [
" ***    ",
"*   *   ",
"    *   ",
" ***    ",
"    *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0x34 4
data8x8B[0x34] = [
"   *    ",
" * *    ",
" * *    ",
"*  *    ",
"*****   ",
"   *    ",
"   *    ",
"        ",
]
# 0x35 5
data8x8B[0x35] = [
"*****   ",
"*       ",
"****    ",
"    *   ",
"    *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0x36 6
data8x8B[0x36] = [
" ***    ",
"*       ",
"*       ",
"****    ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0x37 7
data8x8B[0x37] = [
"*****   ",
"    *   ",
"   *    ",
"  *     ",
"  *     ",
" *      ",
" *      ",
"        ",
]
# 0x38 8
data8x8B[0x38] = [
" ***    ",
"*   *   ",
"*   *   ",
" ***    ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0x39 9
data8x8B[0x39] = [
" ***    ",
"*   *   ",
"*   *   ",
" ****   ",
"    *   ",
"    *   ",
" ***    ",
"        ",
]
# 0x3a :
data8x8B[0x3a] = [
"        ",
"  *     ",
"        ",
"        ",
"  *     ",
"        ",
"        ",
"        ",
]
# 0x3b ;
data8x8B[0x3b] = [
"        ",
"  *     ",
"  *     ",
"        ",
"  *     ",
"  *     ",
" *      ",
"        ",
]
# 0x3c <
data8x8B[0x3c] = [
"   *    ",
"  *     ",
" *      ",
"*       ",
" *      ",
"  *     ",
"   *    ",
"        ",
]
# 0x3d =
data8x8B[0x3d] = [
"        ",
"        ",
"*****   ",
"        ",
"        ",
"*****   ",
"        ",
"        ",
]
# 0x3e >
data8x8B[0x3e] = [
" *      ",
"  *     ",
"   *    ",
"    *   ",
"   *    ",
"  *     ",
" *      ",
"        ",
]
# 0x3f ?
data8x8B[0x3f] = [
" ***    ",
"*   *   ",
"    *   ",
"   *    ",
"  *     ",
"        ",
"  *     ",
"        ",
]
# 0x40 @
data8x8B[0x40] = [
" ***    ",
"*   *   ",
"* ***   ",
"* * *   ",
"* ***   ",
"*       ",
" ***    ",
"        ",
]
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
# 0x42 B
data8x8B[0x42] = [
"****    ",
" *  *   ",
" *  *   ",
" ***    ",
" *  *   ",
" *  *   ",
" ***    ",
"        ",
]
# 0x43 C
data8x8B[0x43] = [
" ***    ",
"*   *   ",
"*       ",
"*       ",
"*       ",
"*   *   ",
" ***    ",
"        ",
]
# 0x44 D
data8x8B[0x44] = [
"****    ",
" *  *   ",
" *  *   ",
" *  *   ",
" *  *   ",
" *  *   ",
" ***    ",
"        ",
]
# 0x45 E
data8x8B[0x45] = [
"*****   ",
"*       ",
"*       ",
"***     ",
"*       ",
"*       ",
"*****   ",
"        ",
]
# 0x46 F
data8x8B[0x46] = [
"*****   ",
" *      ",
" *      ",
" ***    ",
" *      ",
" *      ",
" *      ",
"        ",
]
# 0x47 G
data8x8B[0x47] = [
" ***    ",
"*   *   ",
"*       ",
"*       ",
"*  **   ",
"*   *   ",
" ****   ",
"        ",
]
# 0x48 H
data8x8B[0x48] = [
"*   *   ",
"*   *   ",
"*   *   ",
"*****   ",
"*   *   ",
"*   *   ",
"*   *   ",
"        ",
]
# 0x49 I
data8x8B[0x49] = [
" ***    ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0x4a J
data8x8B[0x4a] = [
"   **   ",
"    *   ",
"    *   ",
"    *   ",
"    *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0x4b K
data8x8B[0x4b] = [
"*   *   ",
"*  *    ",
"* *     ",
"**      ",
"* *     ",
"*  *    ",
"*   *   ",
"        ",
]
# 0x4c L
data8x8B[0x4c] = [
"*       ",
"*       ",
"*       ",
"*       ",
"*       ",
"*       ",
"*****   ",
"        ",
]
# 0x4d M
data8x8B[0x4d] = [
"*   *   ",
"** **   ",
"* * *   ",
"* * *   ",
"* * *   ",
"*   *   ",
"*   *   ",
"        ",
]
# 0x4e N
data8x8B[0x4e] = [
"*   *   ",
"*,  *   ",
"**  *   ",
"* * *   ",
"*  **   ",
"*  ,*   ",
"*   *   ",
"        ",
]
# 0x4f O
data8x8B[0x4f] = [
" ***    ",
"*   *   ",
"*   *   ",
"*   *   ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0x50 P
data8x8B[0x50] = [
"****    ",
" *  *   ",
" *  *   ",
" ***    ",
" *      ",
" *      ",
" *      ",
"        ",
]
# 0x51 Q
data8x8B[0x51] = [
" ***    ",
"*   *   ",
"*   *   ",
"*   *   ",
"* * *   ",
" ***    ",
"    *   ",
"        ",
]
# 0x52 R
data8x8B[0x52] = [
"****    ",
"*   *   ",
"*   *   ",
"****    ",
"* *     ",
"*  *    ",
"*   *   ",
"        ",
]
# 0x53 S
data8x8B[0x53] = [
" ***    ",
"*   *   ",
"*       ",
" ***    ",
"    *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0x54 T
data8x8B[0x54] = [
"*****   ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"        ",
]
# 0x55 U
data8x8B[0x55] = [
"*   *   ",
"*   *   ",
"*   *   ",
"*   *   ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0x56 V
data8x8B[0x56] = [
"*   *   ",
"*   *   ",
"*   *   ",
" * *    ",
" * *    ",
"  *     ",
"  *     ",
"        ",
]
# 0x57 W
data8x8B[0x57] = [
"*   *   ",
"*   *   ",
"* * *   ",
"* * *   ",
"* * *   ",
"** **   ",
" * *    ",
"        ",
]
# 0x58 X
data8x8B[0x58] = [
"*   *   ",
"*   *   ",
" * *    ",
"  *     ",
" * *    ",
"*   *   ",
"*   *   ",
"        ",
]
# 0x59 Y
data8x8B[0x59] = [
"*   *   ",
"*   *   ",
" * *    ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"        ",
]
# 0x5a Z
data8x8B[0x5a] = [
"*****   ",
"    *   ",
"   *    ",
"  *     ",
" *      ",
"*       ",
"*****   ",
"        ",
]
# 0x5b [
data8x8B[0x5b] = [
" ***    ",
" *      ",
" *      ",
" *      ",
" *      ",
" *      ",
" ***    ",
"        ",
]
# 0x5c \
data8x8B[0x5c] = [
"*       ",
" *      ",
" *      ",
"  *     ",
"  *     ",
"   *    ",
"   *    ",
"        ",
]
# 0x5d ]
data8x8B[0x5d] = [
" ***    ",
"   *    ",
"   *    ",
"   *    ",
"   *    ",
"   *    ",
" ***    ",
"        ",
]
# 0x5e ^
data8x8B[0x5e] = [
"        ",
"  *     ",
" * *    ",
"*   *   ",
"        ",
"        ",
"        ",
"        ",
]
# 0x5f _
data8x8B[0x5f] = [
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
"*****   ",
]
# 0x60 `
data8x8B[0x60] = [
"        ",
" *      ",
"  *     ",
"        ",
"        ",
"        ",
"        ",
"        ",
]
# 0x61 a
data8x8B[0x61] = [
"        ",
"        ",
" ***    ",
"    *   ",
" ****   ",
"*   *   ",
" ****   ",
"        ",
]
# 0x62 b
data8x8B[0x62] = [
"*       ",
"*       ",
"****    ",
"*   *   ",
"*   *   ",
"*   *   ",
"****    ",
"        ",
]
# 0x63 c
data8x8B[0x63] = [
"        ",
"        ",
" ****   ",
"*       ",
"*       ",
"*       ",
" ****   ",
"        ",
]
# 0x64 d
data8x8B[0x64] = [
"    *   ",
"    *   ",
" ****   ",
"*   *   ",
"*   *   ",
"*   *   ",
" ****   ",
"        ",
]
# 0x65 e
data8x8B[0x65] = [
"        ",
"        ",
" ***    ",
"*   *   ",
"*****   ",
"*       ",
" ***    ",
"        ",
]
# 0x66 f
data8x8B[0x66] = [
"  ***   ",
" *      ",
" *      ",
"*****   ",
" *      ",
" *      ",
" *      ",
"        ",
]
# 0x67 g
data8x8B[0x67] = [
"        ",
"        ",
" ****   ",
"*   *   ",
"*   *   ",
" ****   ",
"    *   ",
"****    ",
]
# 0x68 h
data8x8B[0x68] = [
"*       ",
"*       ",
"* **    ",
"**  *   ",
"*   *   ",
"*   *   ",
"*   *   ",
"        ",
]
# 0x69 i
data8x8B[0x69] = [
"        ",
"  *     ",
"        ",
" **     ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0x6a j
data8x8B[0x6a] = [
"        ",
"   *    ",
"        ",
"  **    ",
"   *    ",
"   *    ",
"*  *    ",
" **     ",
]
# 0x6b k
data8x8B[0x6b] = [
"*       ",
"*       ",
"*  **   ",
"* *     ",
"**      ",
"* *     ",
"*  **   ",
"        ",
]
# 0x6c l
data8x8B[0x6c] = [
" **     ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"  **    ",
"        ",
]
# 0x6d m
data8x8B[0x6d] = [
"        ",
"        ",
"****    ",
"* * *   ",
"* * *   ",
"* * *   ",
"* * *   ",
"        ",
]
# 0x6e n
data8x8B[0x6e] = [
"        ",
"        ",
"****    ",
"*   *   ",
"*   *   ",
"*   *   ",
"*   *   ",
"        ",
]
# 0x6f o
data8x8B[0x6f] = [
"        ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0x70 p
data8x8B[0x70] = [
"        ",
"        ",
"****    ",
"*   *   ",
"*   *   ",
"****    ",
"*       ",
"*       ",
]
# 0x71 q
data8x8B[0x71] = [
"        ",
"        ",
" ****   ",
"*   *   ",
"*   *   ",
" ****   ",
"    *   ",
"    *   ",
]
# 0x72 r
data8x8B[0x72] = [
"        ",
"        ",
"****    ",
"*   *   ",
"*       ",
"*       ",
"*       ",
"        ",
]
# 0x73 s
data8x8B[0x73] = [
"        ",
"        ",
" ****   ",
"*       ",
" ***    ",
"    *   ",
"****    ",
"        ",
]
# 0x74 t
data8x8B[0x74] = [
"  *     ",
"  *     ",
" ****   ",
"  *     ",
"  *     ",
"  *     ",
"   **   ",
"        ",
]
# 0x75 u
data8x8B[0x75] = [
"        ",
"        ",
"*   *   ",
"*   *   ",
"*   *   ",
"*   *   ",
" ****   ",
"        ",
]
# 0x76 v
data8x8B[0x76] = [
"        ",
"        ",
"*   *   ",
"*   *   ",
"*  *    ",
" **     ",
" *      ",
"        ",
]
# 0x77 w
data8x8B[0x77] = [
"        ",
"        ",
"*   *   ",
"*   *   ",
"* * *   ",
"* * *   ",
"** *    ",
"        ",
]
# 0x78 x
data8x8B[0x78] = [
"        ",
"        ",
"**  *   ",
"  **    ",
"  *     ",
" **     ",
"*  **   ",
"        ",
]
# 0x79 y
data8x8B[0x79] = [
"        ",
"        ",
"*   *   ",
"*   *   ",
"*  **   ",
" ** *   ",
"    *   ",
"****    ",
]
# 0x7a z
data8x8B[0x7a] = [
"        ",
"        ",
" ****   ",
"*  *    ",
"  *     ",
" *  *   ",
"****    ",
"        ",
]
# 0x7b {
data8x8B[0x7b] = [
"   *    ",
"  *     ",
"  *     ",
" *      ",
"  *     ",
"  *     ",
"   *    ",
"        ",
]
# 0x7c |
data8x8B[0x7c] = [
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"        ",
]
# 0x7d }
data8x8B[0x7d] = [
" *      ",
"  *     ",
"  *     ",
"   *    ",
"  *     ",
"  *     ",
" *      ",
"        ",
]
# 0x7e ~
data8x8B[0x7e] = [
" ** *   ",
"*  *    ",
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
]

# Extend ascii
# 0xa1  
data8x8B[0xa1] = [
"  *     ",
"  *     ",
"        ",
"  *     ",
"  *     ",
"  *     ",
"  *     ",
"        ",
]
# 0xa2  
data8x8B[0xa2] = [
"  *     ",
"  *     ",
" ****   ",
"*       ",
"*       ",
" ****   ",
"  *     ",
"  *     ",
]
# 0xa3  
data8x8B[0xa3] = [
"  **    ",
" *      ",
" *      ",
"****    ",
" *      ",
"*   *   ",
"****    ",
"        ",
]
# 0xa4  
data8x8B[0xa4] = [
"        ",
"        ",
"*   *   ",
" ***    ",
" * *    ",
" ***    ",
"*   *   ",
"        ",
]
# 0xa5  
data8x8B[0xa5] = [
"*   *   ",
"*   *   ",
" * *    ",
"*****   ",
"  *     ",
"*****   ",
"  *     ",
"  *     ",
]
# 0xa6  
data8x8B[0xa6] = [
"  *     ",
"  *     ",
"  *     ",
"        ",
"  *     ",
"  *     ",
"  *     ",
"        ",
]
# 0xa7  
data8x8B[0xa7] = [
" ***    ",
"*       ",
" ***    ",
"*   *   ",
"*   *   ",
" ***    ",
"    *   ",
" ***    ",
]
# 0xa8  
data8x8B[0xa8] = [
" * *    ",
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
]
# 0xa9  
data8x8B[0xa9] = [
"        ",
" ***    ",
"*   *   ",
"* ***   ",
"* ***   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xaa  
data8x8B[0xaa] = [
" ***    ",
"*  *    ",
"*  *    ",
" ****   ",
"        ",
"        ",
"        ",
"        ",
]
# 0xab  
data8x8B[0xab] = [
"        ",
"  * *   ",
" * *    ",
"* *     ",
" * *    ",
"  * *   ",
"        ",
"        ",
]
# 0xac  
data8x8B[0xac] = [
"        ",
"        ",
"        ",
"*****   ",
"    *   ",
"        ",
"        ",
"        ",
]
# 0xae  
data8x8B[0xae] = [
"        ",
" ***    ",
"*   *   ",
"* * *   ",
"*  **   ",
"* * *   ",
" ***    ",
"        ",
]
# 0xaf  
data8x8B[0xaf] = [
" ****   ",
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
]
# 0xb0  
data8x8B[0xb0] = [
" **     ",
"*  *    ",
"*  *    ",
" **     ",
"        ",
"        ",
"        ",
"        ",
]
# 0xb1  
data8x8B[0xb1] = [
"  *     ",
"  *     ",
"*****   ",
"  *     ",
"  *     ",
"        ",
"*****   ",
"        ",
]
# 0xb2  
data8x8B[0xb2] = [
" ***    ",
"    *   ",
"  **    ",
" *      ",
"*****   ",
"        ",
"        ",
"        ",
]
# 0xb3  
data8x8B[0xb3] = [
" ***    ",
"    *   ",
"  **    ",
"    *   ",
" ***    ",
"        ",
"        ",
"        ",
]
# 0xb4  
data8x8B[0xb4] = [
"   **   ",
"  **    ",
"        ",
"        ",
"        ",
"        ",
"        ",
"        ",
]
# 0xb5  
data8x8B[0xb5] = [
"        ",
"        ",
" *  *   ",
" *  *   ",
" *  *   ",
" ***    ",
" *      ",
"*       ",
]
# 0xb6  
data8x8B[0xb6] = [
" ****   ",
"* * *   ",
"* * *   ",
" ** *   ",
"  * *   ",
"  * *   ",
"  * *   ",
"        ",
]
# 0xb7  
data8x8B[0xb7] = [
"        ",
"        ",
"        ",
"  **    ",
"  **    ",
"        ",
"        ",
"        ",
]
# 0xb8  
data8x8B[0xb8] = [
"        ",
"        ",
"        ",
"        ",
"        ",
"  **    ",
"   **   ",
"****    ",
]
# 0xb9  
data8x8B[0xb9] = [
"  *     ",
" **     ",
"  *     ",
" ***    ",
"        ",
"        ",
"        ",
"        ",
]
# 0xba  
data8x8B[0xba] = [
" ,*,    ",
" * *    ",
" * *    ",
" ,*,    ",
"        ",
"        ",
"        ",
"        ",
]
# 0xbb  
data8x8B[0xbb] = [
"        ",
"* *     ",
" * *    ",
"  * *   ",
" * *    ",
"* *     ",
"        ",
"        ",
]
# 0xbc  
data8x8B[0xbc] = [
"*       ",
"*  *    ",
"* *     ",
" *  *   ",
"*  **   ",
"  ***   ",
"    *   ",
"        ",
]
# 0xbd  
data8x8B[0xbd] = [
"*       ",
"*  *    ",
"* *     ",
" * *    ",
"* * *   ",
"   *    ",
"  ***   ",
"        ",
]
# 0xbe  
data8x8B[0xbe] = [
"***     ",
" *      ",
"  * *   ",
"** *    ",
"  * *   ",
" * **   ",
"* ***   ",
"    *   ",
]
# 0xbf  
data8x8B[0xbf] = [
"  *     ",
"        ",
"  *     ",
" *      ",
"*       ",
"*   *   ",
" ***    ",
"        ",
]
# 0xc0  
data8x8B[0xc0] = [
"***     ",
"        ",
"  *     ",
" * *    ",
"*   *   ",
"*****   ",
"*   *   ",
"        ",
]
# 0xc1  
data8x8B[0xc1] = [
"  ***   ",
"        ",
"  *     ",
" * *    ",
"*   *   ",
"*****   ",
"*   *   ",
"        ",
]
# 0xc2  
data8x8B[0xc2] = [
"  *     ",
" * *    ",
"        ",
" ***    ",
"*   *   ",
"*****   ",
"*   *   ",
"        ",
]
# 0xc3  
data8x8B[0xc3] = [
" ** *   ",
"*  *    ",
"        ",
" ***    ",
"*   *   ",
"*****   ",
"*   *   ",
"        ",
]
# 0xc4  
data8x8B[0xc4] = [
" * *    ",
"        ",
"  *     ",
" * *    ",
"*   *   ",
"*****   ",
"*   *   ",
"        ",
]
# 0xc5  
data8x8B[0xc5] = [
" **     ",
" **     ",
"        ",
" **     ",
"*  *    ",
"****    ",
"*  *    ",
"        ",
]
# 0xc6  
data8x8B[0xc6] = [
"  ***   ",
" * *    ",
"*  *    ",
"*****   ",
"*  *    ",
"*  *    ",
"*  **   ",
"        ",
]
# 0xc7  
data8x8B[0xc7] = [
" ***    ",
"*   *   ",
"*       ",
"*   *   ",
" ***    ",
"   *    ",
"    *   ",
" ***    ",
]
# 0xc8  
data8x8B[0xc8] = [
"***     ",
"        ",
"*****   ",
" *      ",
" ***    ",
" *      ",
"*****   ",
"        ",
]
# 0xc9  
data8x8B[0xc9] = [
"  ***   ",
"        ",
"*****   ",
" *      ",
" ***    ",
" *      ",
"*****   ",
"        ",
]
# 0xca  
data8x8B[0xca] = [
"  *     ",
" * *    ",
"*****   ",
" *      ",
" ***    ",
" *      ",
"*****   ",
"        ",
]
# 0xcb  
data8x8B[0xcb] = [
" * *    ",
"        ",
"*****   ",
" *      ",
" ***    ",
" *      ",
"*****   ",
"        ",
]
# 0xcc  
data8x8B[0xcc] = [
"***     ",
"        ",
" ***    ",
"  *     ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0xcd  
data8x8B[0xcd] = [
"  ***   ",
"        ",
" ***    ",
"  *     ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0xce  
data8x8B[0xce] = [
"  *     ",
" * *    ",
"        ",
" ***    ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0xcf  
data8x8B[0xcf] = [
" * *    ",
"        ",
" ***    ",
"  *     ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0xd0  
data8x8B[0xd0] = [
"****    ",
" *  *   ",
" *  *   ",
"*** *   ",
" *  *   ",
" *  *   ",
"****    ",
"        ",
]
# 0xd1  
data8x8B[0xd1] = [
"*****   ",
"        ",
"*   *   ",
"**  *   ",
"* * *   ",
"* * *   ",
"*  **   ",
"        ",
]
# 0xd2  
data8x8B[0xd2] = [
"***     ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xd3  
data8x8B[0xd3] = [
"  ***   ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xd4  
data8x8B[0xd4] = [
"  *     ",
" * *    ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xd5  
data8x8B[0xd5] = [
" ** *   ",
"*  *    ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xd6  
data8x8B[0xd6] = [
" * *    ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xd7  
data8x8B[0xd7] = [
"        ",
"*   *   ",
" * *    ",
"  *     ",
" * *    ",
"*   *   ",
"        ",
"        ",
]
# 0xd8  
data8x8B[0xd8] = [
"    *   ",
" ***    ",
"*  **   ",
"* * *   ",
"* * *   ",
"**  *   ",
" ***    ",
"*       ",
]
# 0xd9  
data8x8B[0xd9] = [
"***     ",
"        ",
"*   *   ",
"*   *   ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xda  
data8x8B[0xda] = [
"  ***   ",
"        ",
"*   *   ",
"*   *   ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xdb  
data8x8B[0xdb] = [
"  *     ",
" * *    ",
"        ",
"*   *   ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xdc  
data8x8B[0xdc] = [
" * *    ",
"        ",
"*   *   ",
"*   *   ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xdd  
data8x8B[0xdd] = [
"  ***   ",
"        ",
"*   *   ",
" * *    ",
"  *     ",
"  *     ",
"  *     ",
"        ",
]
# 0xde  
data8x8B[0xde] = [
"***     ",
" *      ",
" ***    ",
" *  *   ",
" *  *   ",
" ***    ",
" *      ",
"***     ",
]
# 0xdf  
data8x8B[0xdf] = [
"        ",
"  **    ",
" *  *   ",
" ***    ",
" *  *   ",
" ***    ",
" *      ",
" *      ",
]
# 0xe0  
data8x8B[0xe0] = [
"***     ",
"        ",
" ***    ",
"    *   ",
" ****   ",
"*   *   ",
" ****   ",
"        ",
]
# 0xe1  
data8x8B[0xe1] = [
"  ***   ",
"        ",
" ***    ",
"    *   ",
" ****   ",
"*   *   ",
" ****   ",
"        ",
]
# 0xe2  
data8x8B[0xe2] = [
" ***    ",
"*   *   ",
" ***    ",
"    *   ",
" ****   ",
"*   *   ",
" ****   ",
"        ",
]
# 0xe3  
data8x8B[0xe3] = [
" ** *   ",
"*  *    ",
" ***    ",
"    *   ",
" ****   ",
"*   *   ",
" ****   ",
"        ",
]
# 0xe4  
data8x8B[0xe4] = [
" * *    ",
"        ",
" ***    ",
"    *   ",
" ****   ",
"*   *   ",
" ****   ",
"        ",
]
# 0xe5  
data8x8B[0xe5] = [
"  **    ",
"  **    ",
" ***    ",
"    *   ",
" ****   ",
"*   *   ",
" ****   ",
"        ",
]
# 0xe6  
data8x8B[0xe6] = [
"        ",
"        ",
" ****   ",
"   *    ",
" ****   ",
"*  *    ",
" ****   ",
"        ",
]
# 0xe7  
data8x8B[0xe7] = [
"        ",
"        ",
" ****   ",
"*       ",
"*       ",
" ***    ",
"    *   ",
"  **    ",
]
# 0xe8  
data8x8B[0xe8] = [
"***     ",
"        ",
" ***    ",
"*   *   ",
"*****   ",
"*       ",
" ***    ",
"        ",
]
# 0xe9  
data8x8B[0xe9] = [
"  ***   ",
"        ",
" ***    ",
"*   *   ",
"*****   ",
"*       ",
" ***    ",
"        ",
]
# 0xea  
data8x8B[0xea] = [
"  *     ",
" * *    ",
" ***    ",
"*   *   ",
"*****   ",
"*       ",
" ***    ",
"        ",
]
# 0xeb  
data8x8B[0xeb] = [
" * *    ",
"        ",
" ***    ",
"*   *   ",
"*****   ",
"*       ",
" ***    ",
"        ",
]
# 0xec  
data8x8B[0xec] = [
"***     ",
"        ",
" **     ",
"  *     ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0xed  
data8x8B[0xed] = [
"  ***   ",
"        ",
" **     ",
"  *     ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0xee  
data8x8B[0xee] = [
"  *     ",
" * *    ",
"        ",
" **     ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0xef  
data8x8B[0xef] = [
" * *    ",
"        ",
" **     ",
"  *     ",
"  *     ",
"  *     ",
" ***    ",
"        ",
]
# 0xf0  
data8x8B[0xf0] = [
"** **   ",
"  *     ",
"** *    ",
"    *   ",
" ****   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xf1  
data8x8B[0xf1] = [
" ** *   ",
"*  *    ",
"        ",
"****    ",
"*   *   ",
"*   *   ",
"*   *   ",
"        ",
]
# 0xf2  
data8x8B[0xf2] = [
"        ",
"***     ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xf3  
data8x8B[0xf3] = [
"        ",
"  ***   ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xf4  
data8x8B[0xf4] = [
"  *     ",
" * *    ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xf5  
data8x8B[0xf5] = [
" ** *   ",
"*  *    ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xf6  
data8x8B[0xf6] = [
"        ",
" * *    ",
"        ",
" ***    ",
"*   *   ",
"*   *   ",
" ***    ",
"        ",
]
# 0xf7  
data8x8B[0xf7] = [
"        ",
"  *     ",
"        ",
"*****   ",
"        ",
"  *     ",
"        ",
"        ",
]
# 0xf8  
data8x8B[0xf8] = [
"        ",
"    *   ",
" ***    ",
"*  **   ",
"* * *   ",
"**  *   ",
" ***    ",
"*       ",
]
# 0xf9  
data8x8B[0xf9] = [
"        ",
"***     ",
"        ",
"*   *   ",
"*   *   ",
"*   *   ",
" ****   ",
"        ",
]
# 0xfa  
data8x8B[0xfa] = [
"        ",
"  ***   ",
"        ",
"*   *   ",
"*   *   ",
"*   *   ",
" ****   ",
"        ",
]
# 0xfb  
data8x8B[0xfb] = [
"  *     ",
" * *    ",
"        ",
"*   *   ",
"*   *   ",
"*   *   ",
" ****   ",
"        ",
]
# 0xfc  
data8x8B[0xfc] = [
"        ",
" * *    ",
"        ",
"*   *   ",
"*   *   ",
"*   *   ",
" ****   ",
"        ",
]
# 0xfd  
data8x8B[0xfd] = [
"        ",
"  ***   ",
"        ",
"*   *   ",
"*   *   ",
" ****   ",
"    *   ",
"****    ",
]
# 0xfe  
data8x8B[0xfe] = [
"        ",
"        ",
"*       ",
"****    ",
"*   *   ",
"****    ",
"*       ",
"        ",
]
# 0xff  
data8x8B[0xff] = [
"        ",
" * *    ",
"        ",
"*   *   ",
"*   *   ",
" ****   ",
"    *   ",
"****    ",
]


def getColor(c):
    return c == '*' and (255, 255, 255) or (c == ',' and (127, 127, 127)) or (0, 0, 0)

def showTestImg():
    import PIL
    from PIL import Image
    img = Image.new('RGB', (17*8, 17*10), (0, 0, 0))
    pixels = img.load()
    for c in range(256):
        for y in range(8):
            for x in range(8):
                try:
                    pixels[(c%16)*8+x, (c/16)*10+y]= getColor(data8x8B[c][y][x])
                except:
                    print 'Error:0x%02x' % c, chr(c)
    img.show()

def getLongValueOfRow(text):
    v = 0
    for i in range(8):
        ch = text[i]
        if ch=='*':
            v = v | (0xf<<((7-i)*4))
        elif ch==',':
            v = v | (0x8<<((7-i)*4))
    return v

def makeCHeader(path):
    with open(path, "w") as f:
        f.write("#define Font8x8GetColor(c, x, y) font8x8[c][y]>>((7-x)*4)&0xf\n\n")
        f.write("unsigned long font8x8[256][8]={\n")
        for c in range(256):
            rows = data8x8B[c]
            longValues = [getLongValueOfRow(row) for row in rows]
            ch = unichr(c)
            f.write("  // 0x%02x '%s'\n" % (c, c>0x20 and c<0x80 and ch or ''))
            f.write("  { ")
            for i in range(8):
                if i>0:
                    f.write('    ')
                f.write('0x%08x' % longValues[i])
                if i < 7:
                    f.write(',\n')
                else:
                    f.write("},\n")
        f.write("};")

showTestImg()
makeCHeader("font8x8.h")
