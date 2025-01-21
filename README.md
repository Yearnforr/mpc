# Exo Humanoid Simulation Software in ROS

## Dependencies:
* [Boost](http://www.boost.org) (version 1.5.4 or higher)
* [CMake](http://www.cmake.org) (version 2.8.3 or higher)
* [LCM](https://lcm-proj.github.io) (version 1.4.0 or higher)
* [ROS](http://wiki.ros.org/) Neotic
* [Gazebo](https://gazebosim.org/home) 11
* [Eigen3](https://eigen.tuxfamily.org/index.php?title=Main_Page) (>3.3)
* unitree_legged_sdk 
* [qpOASES](https://github.com/coin-or/qpOASES)
* ROS_Packages
* [Pinocchio](https://github.com/stack-of-tasks/pinocchio)
* [trac_ik](https://github.com/aurone/trac_ik)
```
sudo apt-get install ros-noetic-controller-manager ros-noetic-ros-control ros-noetic-ros-controllers ros-noetic-joint-state-controller ros-noetic-effort-controllers ros-noetic-velocity-controllers ros-noetic-position-controllers ros-noetic-robot-controllers ros-noetic-robot-state-publisher ros-noetic-gazebo-ros-pkgs ros-noetic-gazebo-ros-control
```

## System Requirements:
If you want to simulate with [Gazebo](http://gazebosim.org/), we recommend **x86 platform**. **ARM platform** is not suggested for simulation. So, if you run this code on ARM platform, please remove *Simulation related* folder first.

The current system environment is: 

* Ubuntu 20.04 + ROS Noetic* (recommended, tested stable) 


## Configuration:
Use command to open .bashrc file:
* `gedit ~/.bashrc`

Make sure the following exist in your `~/.bashrc` file or export them in terminal. `noetic`, `gazebo-11` and `~/catkin_ws` should be replaced in your own case.
```
source /opt/ros/noetic/setup.bash
source /usr/share/gazebo-11/setup.sh
source ~/catkin_ws/devel/setup.bash
export ROS_PACKAGE_PATH=~/catkin_ws:${ROS_PACKAGE_PATH}
export GAZEBO_PLUGIN_PATH=~/catkin_ws/devel/lib:${GAZEBO_PLUGIN_PATH}
export LD_LIBRARY_PATH=~/catkin_ws/devel/lib:${LD_LIBRARY_PATH}
```

## Build:
* `cd ~/catkin_ws`
* `catkin_make`

### launch and run gazebo simulation:
* `roslaunch unitree_gazebo exo_biped.launch`
The robot should be standing on the ground 

* In a new terminal, enter and source your workspace, then run: `rosrun exo_humanoid_control exo_humanoid_ctrl`

* Click the start button at the bottom of the simulator, the robot should stand up/move away
* In some occasions the controller does not kick in after starting, please terminate the controller with ctrl + \\. Then go back to the simulator, pause, and reset (ctrl + R). Rerun controller. 

## Keyboard Control: 
* Inside the terminal window, use W or S to control x direction speed
* Use A or D to control robot turning 
