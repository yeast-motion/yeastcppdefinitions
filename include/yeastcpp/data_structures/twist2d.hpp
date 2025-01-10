#pragma once

#include "yeastcpp/json_parsable.hpp"

#include <iostream>

namespace yeast_motion
{
    class Twist2D : JSONParsable
    {
        public:
            float x = 0.0;
            float y = 0.0;
            float omega = 0.0;

            void from_json(nlohmann::json json);
            nlohmann::json to_json(void);
    };
}