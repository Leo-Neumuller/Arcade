/*
** EPITECH PROJECT, 2022
** B-OOP-400-LIL-4-1-arcade-marine.poteau
** File description:
** Pacman
*/

#include "Pacman.hpp"

namespace arcade {

Pacman::Pacman() : GameLibrary() {
    std::cout << "PACMAN" << std::endl;
}

void Pacman::setGameObjects() {
    gameText.text = "Pacman";
    gameText.posX = 34;
    pacman.texturePath = "./assets/pacman.png";

    gameObjects.push_back(gameText);
}

void Pacman::updateGameObjects() {
    
}

extern "C" IGameLibrary* create_game() {
    return new Pacman();
}

}