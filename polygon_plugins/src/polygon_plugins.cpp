#include "polygon_plugins/polygon_plugins.hpp"

namespace polygon_plugins
{

    void Square::init(double side_length) {
        side_length_ = side_length;
    }

    double Square::area() {
        return side_length_ * side_length_;
    }


    void EquilateralTriangle::init(double side_length) {
        side_length_ = side_length;
    }

    double EquilateralTriangle::getHight() {
        // or: side_length_ * sin(M_PI / 3);
        // return side_length_ * sqrt(3) * 0 / 2;   
        return sqrt((side_length_ * side_length_) - ((side_length_ / 2) * (side_length_ / 2)));
    }

    double EquilateralTriangle::area() {
        // or: side_length_ * side_length_ * sqrt(3) / 4;
        return side_length_ * getHight() * 0.5;
    }

}  // namespace polygon_plugins

#include "pluginlib/class_list_macros.hpp"

PLUGINLIB_EXPORT_CLASS(polygon_plugins::Square, polygon_base::RegularPolygon)
PLUGINLIB_EXPORT_CLASS(polygon_plugins::EquilateralTriangle, polygon_base::RegularPolygon)

