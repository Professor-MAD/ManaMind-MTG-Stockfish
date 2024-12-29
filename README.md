manaMind: The Magic Stockfish

Magic: The Gathering (MTG) Simulation Project

Overview:

This project is a C-based simulation of Magic: The Gathering (MTG), a collectible card game. The goal is to create a modular and extensible framework for representing cards, decks, and gameplay mechanics. The project is organized into several modules, each responsible for specific functionalities such as card initialization, deck management, and gameplay logic.

Features:

Representation of different MTG card types: creatures, sorceries, lands, and enchantments.

Dynamic hand management, including adding and discarding cards.

Randomized card removal and gameplay simulations.

Modular and organized codebase with separate folders for source, headers, and build artifacts.

File Structure:

project_root/
├── Makefile
├── src/
│   ├── main.c
│   ├── cards.c
│   ├── hand.c
│   ├── game_logic.c
│   ├── green_deck.c
│   ├── card_helpers.c
├── include/
│   ├── cards.h
│   ├── hand.h
│   ├── game_logic.h
│   ├── green_deck.h
│   ├── card_helpers.h
│   ├── creature_card.h
│   ├── sorcery_card.h
│   ├── land_card.h
│   ├── enchantment_card.h
│   ├── shared_definitions.h
├── build/
│   └── (Compiled object files and the executable)

How to Build:

Ensure you have a C compiler installed (e.g., GCC or Clang).

Navigate to the project root directory.

Run the following commands:

mingw32-make clean
mingw32-make

The executable will be generated in the build/ directory.

How to Run:

After building, navigate to the build/ directory:

cd build

Run the executable:

./game-engine.exe

Modules:

1. cards

Defines and initializes different card types, including creatures, sorceries, lands, and enchantments. Each card type has unique properties and effects.

2. hand

Manages the player's hand. Provides functions for adding cards, removing cards, and displaying the current hand.

3. game_logic

Implements core gameplay mechanics, such as drawing cards, playing cards, and interacting with the game state.

4. green_deck

Initializes a predefined deck of green cards, including examples such as "Grizzly Bears," "Llanowar Elves," and "Elemental Bond."

5. card_helpers

Provides utility functions for resetting card effects and initializing shared properties among cards.

Example Output

Hand contains 7 cards:
Card 1: Grizzly Bears (Creature)
Card 2: Llanowar Elves (Creature)
Card 3: Basic Land (Type: Forest)
Card 4: Giant Growth (Sorcery)
Card 5: Basic Land (Type: Forest)
Card 6: Basic Land (Type: Forest)
Card 7: Basic Land (Type: Forest)
Removing card at index 3...
Removing card at index 1...
Hand contains 5 cards:
Card 1: Grizzly Bears (Creature)
Card 2: Basic Land (Type: Forest)
Card 3: Giant Growth (Sorcery)
Card 4: Basic Land (Type: Forest)
Card 5: Basic Land (Type: Forest)

Future Enhancements

Expand card types to include instants, artifacts, and planeswalkers.

Implement a deck shuffling algorithm.

Add support for multiplayer interactions.

Create a command-line interface for user input.

Contribution Guidelines

Fork the repository.

Create a new branch for your feature or bug fix.

Write clean and well-documented code.

Submit a pull request with a detailed description of your changes.

License

This project is licensed under the MIT License. See LICENSE for details.

Acknowledgments

Special thanks to the Magic: The Gathering community for inspiration and resources.

For any questions or feedback, please contact professormad@proton.me.
