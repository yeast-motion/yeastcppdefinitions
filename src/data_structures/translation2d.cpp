#include "yeastcpp/data_structures/translation2d.hpp"

namespace yeast_motion
{
    Translation2D::Translation2D(nlohmann::json json)
    {
        this->from_json(json);
    }

    void Translation2D::from_json(nlohmann::json json)
    {
        this->x = json["x"];
        this->y = json["y"];
        this->theta = json["theta"];
    }

    nlohmann::json Translation2D::to_json(void)
    {
        nlohmann::json json;
        json["x"] = x;
        json["y"] = y;
        json["theta"] = theta;
        return json;
    }
}