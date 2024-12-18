#ifndef POLYGON_PLUGINS__POLYGON_PLUGINS_HPP_
#define POLYGON_PLUGINS__POLYGON_PLUGINS_HPP_

#include <iostream>
#include <cmath>

#include "polygon_base/polygon_base.hpp"

namespace polygon_plugins
{


class Square : public polygon_base::RegularPolygon {
public:
    void init(double side_length) override ;

    double area() override;

protected:
    double side_length_;
};

class EquilateralTriangle : public polygon_base::RegularPolygon {
public:
    void init(double side_length) override;

    double getHight();

    double area() override;


protected:
    double side_length_;
};

}  // namespace polygon_plugins

// #include "pluginlib/class_list_macros.hpp"

// PLUGINLIB_EXPORT_CLASS(polygon_plugins::Square, polygon_base::RegularPolygon)
// PLUGINLIB_EXPORT_CLASS(polygon_plugins::EquilateralTriangle, polygon_base::RegularPolygon)


#endif