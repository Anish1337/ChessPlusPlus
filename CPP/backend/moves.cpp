// PieceMovement.cpp
#include "PieceMovement.h"
#include "ChessBoard.h" // Assuming you have a ChessBoard class

bool isValidPawnMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol) {
// forward
if endRow-startRow==1 && startCol==endCol{

  if(board.isEmpty()){
    return true;
    }
}

// 2-forward (start)

// capture

// enpassant

return false
}

bool isValidKnightMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol) {
}

bool isValidBishopMove(const ChessBoard &board, int startRow, int startCol, int endRow, int endCol) {

}

bool isValidQueenMove(const ChessBoard &board, int startRow, int startCOl, int endRow, int endCol){


}

bool isValidKingMove(const ChessBoard &board, int startRow, int startCOl, int endRow, int endCol){

}

bool isValidRookMove(const ChessBoard &board, int startRow, int startCOl, int endRow, int endCol){

}

// TODO fillout these functions for all piece
// make sure h file is updated as well
