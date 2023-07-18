#ifndef RECIPE_FINDER_RECIPE_H
#define RECIPE_FINDER_RECIPE_H
#include <vector>
#include <string>
class Recipe {

public:

    Recipe(const std::string &name, const std::vector<std::string> &ingredients, const std::string &instructions)
            : name(name), ingredients(ingredients), instructions(instructions) {}

    const std::string &getName() const {
        return name;
    }

    const std::vector<std::string> &getIngredients() const {
        return ingredients;
    }

    const std::string &getInstructions() const {
        return instructions;
    }

private:
    std::string name;
    std::vector<std::string> ingredients;
    std::string instructions;
};
#endif //RECIPE_FINDER_RECIPE_H
