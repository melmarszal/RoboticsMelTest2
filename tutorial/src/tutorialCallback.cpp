#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/Joy.h>
#include <ros/console.h>
void tutorialCallback(const sensor_msgs::Joy::ConstPtr& joy)
{
cout << 100*(joy->axes[1] + " "+ 100*(joy->axes[2]);
}
int main(int argc, char **argv)
{
ros::init(argc, argv, "subscriber");
ros::NodeHandle nh;
ros::Subscriber sub = n.subscribe("joy", 100, tutorialCallback);
ros::spin();
return 0;
}
