#include <string>
#include "GameEntity.hpp"

int init_status = init();

    if(init_status == 0)
        run();

    close();

    return 0;