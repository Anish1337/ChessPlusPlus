const chessboard = document.getElementById('chessboard');

// Create board
for (let row = 0; row < 8; row++) {
    for (let col = 0; col < 8; col++) {
        const square = document.createElement('div');
        square.classList.add('square');
        // Alternate between light and dark squares
        if ((row + col) % 2 === 0) {
            square.classList.add('light');
        } else {
            square.classList.add('dark');
        }
        chessboard.appendChild(square);
    }
}

