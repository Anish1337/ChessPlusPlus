iconst pieces = {
    'R': '♖',  // Rook
    'N': '♘',  // Knight
    'B': '♗',  // Bishop
    'Q': '♕',  // Queen
    'K': '♔',  // King
    'P': '♙',  // Pawn
    'r': '♜',  // Black rook, etc...
};

function renderPiece(row, col, piece) {
    const square = board[row * 8 + col];  // Row and column to 1D index
    square.innerHTML = `<div class="piece">${pieces[piece]}</div>`;
}

// Example: Render a black rook on a8 (0, 0)
renderPiece(0, 0, 'r');

