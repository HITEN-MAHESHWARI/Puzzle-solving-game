# Puzzle-solving-game
**Name: Hiten Kalani**
**Roll No: 25k-6549**
- NumberLink Puzzle – Conditions / Rules
1. Grid Size
The game uses a 6 × 6 grid containing numbers from 1 to 36.

## 2. Pre-filled Anchor Numbers
Some numbers are already present in the grid at fixed positions.
These numbers cannot be changed.
**Example anchors:\**
1, 6, 9, 13, 15, 19, 24, 31, 36

## 3. Sequential Filling
The player must fill the grid with numbers in increasing order from 1 to 36.
The program automatically detects the next missing number.

**Example:\**
If 6 is already in the grid,
the program will automatically ask for 7.
## 4. Bounds Condition
The row and column entered by the user must be between 0 and 5.
0 ≤ row ≤ 5
0 ≤ column ≤ 5
If the position is outside this range, the program prints "Invalid position".

## 5. Cell Occupancy Condition
A number can only be placed in an empty cell.
grid[row][column] == 0
If the cell already contains a number, the program displays a message.

## 6. Parity Rule
Even numbers cannot be placed on coordinates where both row and column are odd.
**Example invalid position for even numbers:\**
(1,1)
(1,3)
(3,3)
## 7. Adjacency Rule
Each number must be placed exactly one step away from the previous number.
**Allowed directions:\**
Up
Down
Left
Right
Diagonal positions are not allowed.

**Example:\**
(previousRow + 1, previousColumn)
(previousRow - 1, previousColumn)
(previousRow, previousColumn + 1)
(previousRow, previousColumn - 1)
## 8. Winning Condition
The game ends successfully when all numbers from 1 to 36 are correctly placed, connecting 35 to 36.
The program then prints a congratulation message.
