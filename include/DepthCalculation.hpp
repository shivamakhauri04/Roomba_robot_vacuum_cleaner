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
* @file depthCalculation.hpp
* @author Shivam Akhauri 
* @date 16 November 2019
* @copyright 2019 Shivam Akhauri [MIT]
* @brief depthCalculator class to calculate 
* the distance of the turtlebot from the obstacles 
* using the laserscan 
*/

#ifndef INCLUDE_DEPTHCALCULATION_HPP_
#define INCLUDE_DEPTHCALCULATION_HPP_

#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "sensor_msgs/LaserScan.h"


/**
 * @brief Class depthCalculatio
 * This class contains members to calculate distance 
 * for the objects which is obtained from laserscan topic.
 * It also contains members to raise a flag if about to collide
*/


class DepthCalculation {
 private:
  // raise flag if very close to the obstacle
  bool collisionStatus = false;

 public:
 /**
  * @brief constructor DepthCalculation
  * @param none
  * @return none
  * initializes the collisionStatus flag
  */
  DepthCalculation();

 /**
  * @brief destructor DepthCalculation
  * @param none
  * @return none
  * destroy the DepthCalculation
  */
  ~DepthCalculation();

 /**
  * @brief function findLaserDepth
  * @param msg type sensor_msgs::LaserScan
  * @return none 
  * function to read LaserScan sensor messages and raise flag 
  * if distance of the obstacle is less than threshold 
  */
  void findLaserDepth(const sensor_msgs::LaserScan::ConstPtr& msg);

 /**
  * @brief function flagCollision
  * @param none
  * @return 1 if very close to obstacle and 0 if not close
  * Return the current value of collisionStatus
  */
  bool flagCollision();
};

#endif  // INCLUDE_DEPTHCALCULATION_HPP_


