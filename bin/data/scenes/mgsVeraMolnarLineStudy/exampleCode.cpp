// An homage to Vera Molnar's "Hommage a Durer"
SquareSize = [[Square Size]]
gridHeight = [[Grid Height]]
gridWidth = [[Grid Width]]

columnCounter = [[shiftCounter]]
rowCounter = [[rowCounter]]

if(columnCounter < [[gridWidth]]) {
  drawVeraLines([[columnCounter]], [[rowCounter]])
  columnCounter++;
} else if ([[rowCounter]] < [[gridHeight]]) {
  columnCounter = 0;
  rowCounter++;
} else {
  rowCounter = 0;
  columnCounter = 0;
}