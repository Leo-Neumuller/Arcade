/*
** EPITECH PROJECT, 2022
** B-OOP-400-LIL-4-1-arcade
** File description:
** ncurses_game_library
*/

#pragma once

#pragma once

#include "graphic_library.hpp"
#include <ncurses.h>
#include "exception.hpp"
#include <vector>
#include <memory>

namespace arcade {

class NCursesGraphicLibrary : public GraphicLibrary {
    private:
        WINDOW *window;
        std::vector<object> textObjects;

        void initTextObjects(object &gameObject);
        void renderTextObjects();
    public:
        NCursesGraphicLibrary(const Parameters &parameters);
        ~NCursesGraphicLibrary() = default;
        
        void createWindow() override;
        std::string getName() const override;
        void closeWindow() override;
        void loadObjects(std::vector<object> gameObjects) override;
        void loop() override;
};

extern "C" GraphicLibrary *create(const GraphicLibrary::Parameters &parameters);

}