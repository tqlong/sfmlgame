#include "pingponggame.h"
#include <memory>

using namespace std;

int main() {
    shared_ptr<Game> game = make_shared<PingPongGame>("Collision System", 10, 0.2f);
    game->createGame(game);
    game->loop();
    return 0;
}
