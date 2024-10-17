// PieceMovement.h
#ifndef PIECE_MOVEMENT_H
#define PIECE_MOVEMENT_H

class ChessBoard; // Forward declaration

bool isValidPawnMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol);
bool isValidKnightMove(int startRow, int startCol, int endRow, int endCol);
bool isValidBishopMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol);
//TODO add other pieces

#endif // PIECE_MOVEMENT_H

