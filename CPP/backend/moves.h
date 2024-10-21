// PieceMovement.h
#ifndef PIECE_MOVEMENT_H
#define PIECE_MOVEMENT_H

class ChessBoard; // Forward declaration

bool isValidPawnMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol);
bool isValidKnightMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol);
bool isValidBishopMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol);
bool isValidKingMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol);
bool isValidRookMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol);
bool isValidQueenMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol);

#endif // PIECE_MOVEMENT_H

