#pragma once

#include <actor-zeta/forwards.hpp>

namespace actor_zeta {
    namespace environment {
        struct abstract_environment {

            virtual int                              start()                    = 0;

            virtual executor::abstract_coordinator & manager_execution_device() = 0;

            virtual cooperation &                    manager_group()            = 0;

            virtual ~abstract_environment() = default;

        };

    }
}