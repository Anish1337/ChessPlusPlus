// GameState.h
#ifndef GAME_STATE_H
#define GAME_STATE_H

class ChessBoard; // Forward declaration

bool isKingInCheck(const ChessBoard &board, Color kingColor);
bool isCheckmate(const ChessBoard &board, Color kingColor);
// Other game state checks...

#endif // GAME_STATE_H

