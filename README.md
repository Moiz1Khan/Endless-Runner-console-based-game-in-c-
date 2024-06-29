# Endless-Runner-console-based-game-in-c++

# Console Game: Simple Character Movement with Obstacles and Coins

## Project Description

This project is a simple console game where a player character represented by `$` moves around a game board, avoiding obstacles and collecting coins. The game is implemented in C++ and uses basic console input and output functions. The player can move up, down, left, right, and jump to avoid obstacles and collect coins. The game continues until the player loses all lives.

## Table of Contents

- [Features](#features)
- [Gameplay](#gameplay)
- [Code Overview](#code-overview)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features

- **Player Movement**: The player can move in four directions and jump.
- **Obstacles**: Randomly placed obstacles appear on the game board.
- **Coins**: Randomly placed coins appear on the game board for the player to collect.
- **Lives**: The player has a limited number of lives.
- **Score**: The game tracks the player's score based on collected coins.

## Gameplay

- The player character is represented by `$` and starts near the bottom center of the screen.
- The player can move using the following keys:
  - `w`: Move up
  - `a`: Move left
  - `s`: Move down
  - `d`: Move right
  - `space`: Jump
- Coins (`+`) and obstacles (`*`) randomly appear on the game board.
- The player must avoid obstacles and collect coins to increase their score.
- The game ends when the player loses all lives.

## Code Overview

### GameBoard Function
Sets up the game board, placing borders, the player character, and empty spaces.

### CharacterMovement Function
Handles player movement based on keyboard input.

### Coins Function
Randomly places coins on the game board.

### Hurdeles Function
Randomly places obstacles on the game board.

### PrintingGame Function
Displays the current state of the game board, including the player's score and remaining lives.

### Main Function
Initializes the game board, player position, score, and lives. Contains the main game loop, which updates the game board, handles player movement, places coins and obstacles, prints the game state, and controls the game flow.

## Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/console-game.git
   cd console-game
   ```

2. **Compile the code**:
   ```bash
   g++ -o game main.cpp
   ```

## Usage

1. **Run the game**:
   ```bash
   ./game
   ```

2. **Control the player** using the keyboard inputs mentioned in the [Gameplay](#gameplay) section.

## Contributing

Contributions are welcome! Please follow these steps:

1. Fork the repository.
2. Create a new branch: `git checkout -b my-feature-branch`.
3. Make your changes and commit them: `git commit -m 'Add some feature'`.
4. Push to the branch: `git push origin my-feature-branch`.
5. Submit a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

Feel free to customize this README file according to your project's specific requirements and details.
