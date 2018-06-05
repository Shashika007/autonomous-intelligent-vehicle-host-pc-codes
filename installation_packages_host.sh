# installing external packages of ROS

sudo apt-get install ros-kinetic-rosserial ros-kinetic-rosserial-arduino

sudo apt-get install python-pip python-dev python-wstool build-essential python-rosdep python-catkin-tools

sudo apt-get install ros-kinetic-rviz

sudo apt-get install ros-kinetic-turtlebot ros-kinetic-turtlebot-apps ros-kinetic-turtlebot-interactions ros-kinetic-turtlebot-simulator ros-kinetic-kobuki-ftdi ros-kinetic-turtlebot-gazebo

sudo apt-get install openssh-server

sudo apt-get install ros-kinetic-joy ros-kinetic-teleop-twist-joy ros-kinetic-teleop-twist-keyboard ros-kinetic-rosserial-server ros-kinetic-rosserial-client ros-kinetic-rosserial-msgs ros-kinetic-amcl ros-kinetic-map-server ros-kinetic-move-base ros-kinetic-urdf ros-kinetic-xacro ros-kinetic-gmapping ros-kinetic-navigation

sudo apt-get install ros-kinetic-gazebo-ros-pkgs ros-kinetic-gazebo-ros-control ros-kinetic-ros-control ros-kinetic-ros-controllers





# installing aiv packages from github

cd ~/catkin_ws/src

cd ~/catkin_ws

catkin_make

git clone https://github.com/Shashika007/autonomous-intelligent-vehicle-host-pc-codes.git
