enum Piece {
    EMPTY,
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
};

enum Color {
    NONE,
    WHITE,
    BLACK
};

struct ChessPiece {
    Piece type;
    Color color;

    ChessPiece(Piece p = EMPTY, Color c = NONE) : type(p), color(c) {}
};

class ChessBoard {
private:
    ChessPiece board[8][8];
    
public:
    ChessBoard() {
        // init board
        setupBoard();
    }

    void setupBoard() {

        // TODO: Combine into one loop!

        // pawns
        for(int i=0; i<8; i++){
            board[0][i]=ChessPiece(PAWN,WHITE);
            board[1][i]=ChessPiece(PAWN,BLACK); 
        }

        // other pieces, cool trick
        Pieces other[] = {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK}
        for(int i=0; i<8; i++){
          board[0][i]=ChessPiece(other[col],WHITE);
          board[7][i]=ChessPiece(other[col],BLACK);
        }
    }

    // get piece
    ChessPiece getPieceAt(int row, int col) {
        return board[row][col];
    }
};

