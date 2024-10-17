// ChessBoard.h
#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H

class ChessPiece; // Forward declaration

class ChessBoard {
public:
    ChessBoard();
    void setupBoard();
    ChessPiece getPieceAt(int row, int col);
    bool movePiece(int startRow, int startCol, int endRow, int endCol);

private:
    ChessPiece board[8][8]; // Representation of the chessboard
};

#endif // CHESS_BOARD_H

