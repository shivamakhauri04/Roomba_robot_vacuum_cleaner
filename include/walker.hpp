/**
Copyright [MIT] 2019 Shivam Akhauri

Permission is hereby granted, free of charge, to any person obtaining a copy of 
this software and associated documentation files (the "Software"), to deal in 
the Software without restriction, including without limitation the rights to 
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:

The above copyright notice and this permission notice shall be included in all 
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
 COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER 
 IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN 
 CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**/
/**
* @file depthCalculator.hpp
* @author Shivam Akhauri 
* @date 16 November 2019
* @copyright 2019 Shivam Akhauri [MIT]
* @brief depthCalculator class to suscribe to the depthCalculator
* topic and publish velocities accordingly
*/

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "sensor_msgs/LaserScan.h"
#include "depthCalculator.hpp"

/**
 * @brief Class walker
 * This class contains members to generate linear and angular
 * velocities to the turtulebot based on the depth from 
 * the obstacle information received from the depthCalculator
*/

class walker {
 private:
    ros::NodeHandle nh;
    geometry_msgs::Twist_msg;
    ros::Publisher velocity;
    ros::Suscriber distance;
    depthCalculator depth;

 public:
    walker();

    ~walker();

    void walk();
};
