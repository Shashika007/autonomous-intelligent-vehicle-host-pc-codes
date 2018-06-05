# Setting up source.list file for kinetic version
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -cs) main" > /etc/apt/sources.list.d/ros-latest.list'

# Setting up keys
wget http://packages.ros.org/ros.key -O - | sudo apt-key add -

# Install ROS
sudo apt-get update
sudo apt-get install ros-kinetic-desktop-full

# Initializing rosdep
sudo rosdep init
rosdep update

# Setting up the environment
source /opt/ros/kinetic/setup.bash
echo "source /opt/ros/kinetic/setup.bash" >> ~/.bashrc
source ~/.bashrc

# rosinstall
sudo apt-get install python-rosinstall

# Create the workspace for AIV
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/src
catkin_init_workspace
cd ~/catkin_ws
catkin_make
source devel/setup.bash
echo "source /opt/ros/kinetic/setup.bash" >> ~/.bashrc



