//
// Created by david on 31/01/17.
//

#ifndef DEADVINT_2_ZOMBIEMANAGER_H
#define DEADVINT_2_ZOMBIEMANAGER_H

#include "../scene/SceneNode.hpp"
#include "../entities/Zombie.hpp"
#include "../entities/Spawner.hpp"

class ZombieManager{
public:
    explicit ZombieManager(Human* human, std::vector<Zombie*>& activeEnemies,  TextureHolder& textures, SceneNode* layer);
    void addSpawner(int x, int y);
    void update(sf::Time dt);

    void setPathFindingGrid(PathFindingGrid& grid);


private:
    void updatePlayerGridPosition();
    void updateEnemiesPath();


private:
    Human* mPlayerHuman;
    std::vector<Zombie*>& mActiveEnemies;
    std::vector<Spawner*> mSpawners;
    SceneNode* mLayer;
    TextureHolder& mTextures;

    PathFindingGrid* mPathfindingGrid;
    PathFindingGrid::Position mPlayerGridPosition;

};

#endif //DEADVINT_2_ZOMBIEMANAGER_H