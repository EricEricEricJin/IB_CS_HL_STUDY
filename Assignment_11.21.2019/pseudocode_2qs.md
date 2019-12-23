#### Q1
```
DECLEAR number: INTEGER
number <- 0
NumIn:
INPUT "Please input a denary number between 500 and 1000" number
IF number > 1000 or number < 500 THEN
  OUTPUT "Input invalid. Please input again."
  GOTO NumIn
ENDIF

DECLARE result: INTEGER
result <- 0

WHILE True
  result <- result + (10 ^ Counter) * (number % 2)
  number <- number / 2
  IF number == 0 THEN
    BREAK
  ENDIF
ENDWHILE

OUTPUT "The binary is: " result
```
#### Q2
```
DECLARE p1: INTEGER
p1 <- 0
DECLARE p2: INTEGER
p2 <- 0

P1in:
INPUT "First player's die number" p1
IF p1 > 6 or p1 < 1 THEN
  OUTPUT "Please reinput a valid die number."
  GOTO P1in
ENDIF

P2in:
INPUT "Second player's die number" p2
IF p2 > 6 or p2 < 1 THEN
  OUTPUT "Please reinput a valid die number."
  GOTO P2in
ENDIF

IF p1 == p2 THEN
  OUTPUT "No winner, play again."
  GOTO P1in
ELSE IF p1 > p2 THEN
  IF p1 % 2 == 0 THEN
    OUTPUT "No winner, play again."
    GOTO P1in
  ELSE
    OUTPUT "Player 1 win"
  ENDIF
ELSE
  IF p2 % 2 == 0 THEN
    OUTPUT "No winner, play again."
    GOTO P1in
  ELSE
    OUTPUT "Player 2 win"
  ENDIF
ENDIF

```
