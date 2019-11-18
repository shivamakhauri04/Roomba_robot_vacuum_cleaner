[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://github.com/shivamakhauri04/Roomba_robot_vacuum_cleaner/blob/Week12_HW/LICENSE.txt)
# Roomba_robot_vacuum_cleaner

## Overview
This project involves a turtlebot which can move around the room to clean the room. It has collision avoidance behaviour and is developed using high quality C++ code.
The turtlebot moves in the room with linear velocity. When it comes close to a obstacle, the linear velocity is made 0 and the robot is made to turn, with non zero angular velocity.

## Pre- Requisites:
1. Ros Kinetic
2. Turtle bot installation: 

```
sudo apt-get install ros-kinetic-turtlebot-gazebo 
ros-kinetic-turtlebot-apps ros-kinetic-turtlebot-rviz-launchers
```

3. Catkin
4. Gazebo

## Installation :
```
1. git clone --recursive "https://github.com/shivamakhauri04/Roomba_robot_vacuum_cleaner.git"
2. cp <path to repository> <catkin_workspace/src/>
3. cd <catkin_workspace>
4. catkin_make
```

## Demo Steps
1. cd <catkin_workspace/>
2. source devel/setup.bash
3. roslaunch roombarobotvacuumcleaner roomba.launch
4. press Ctrl+C to end roslaunch

# RosBag

## Rosbag Link 
The below link contains about 20-25 seconds of recording of all topics (except camera related). The corresponding rosbag info is added as a text file in the results folder.

https://drive.google.com/file/d/1CM6UJL2xRyoI-KjTSuUw9KpxpUmoZPZn/view?usp=sharing

## To record another Rosbag

```
1. cd <catkin_workspace/src/>
2 .source devel/setup.bash
3. roslaunch roombarobotvacuumcleaner roomba.launch record_flag:="true"
4. Press ctrl+ C
Note: The <argument> is "false" by default. If one wants to record again, use "true".
```

## To inspect Rosbag
```
[Terminal 1] Roscore
Download the rosbag from the google drive to the results subfolder
[terminal 2]cd ~/catkin_ws/src/Roomba_robot_vacuum_cleaner/results
[terminal 2]rosbag play roombatopics.bag
To close the program press ctrl+C in each of the open terminals.
```

## Copyright

Copyright (C) 2019 Shivam Akhauri
For license information, see [LICENSE.txt](LICENSE.txt).

