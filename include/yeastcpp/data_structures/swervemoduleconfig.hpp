#pragma once

#include <iostream>

#include "yeastcpp/yeastcpp.hpp"

namespace yeast_motion
{
    class SwerveModuleConfig : JSONParsable
    {
        public:
        Translation2D translation;

        SwerveModuleConfig(nlohmann::json json);
        nlohmann::json to_json();
        void from_json(nlohmann::json json);
    };
}