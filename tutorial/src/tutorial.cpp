#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <sensor_msgs/Joy.h>
#include <ros/console.h>
class Tutorial
{
public:
    Tutorial();
private:
    void tutorialCallback(const sensor_msgs::Joy::ConstPtr& joy);
    ros::NodeHandle n;
    ros::Subscriber sub;
    ros::Publisher pub;
};
Tutorial::Tutorial()
{
   sub = n.subscribe("joy", 100, tutorialCallback); 
   pub = n.advertise<std_msgs::String>("joystick", 1000);
}
void Tutorial::tutorialCallback(const sensor_msgs::Joy::ConstPtr& joy)
{
pub.publish(100*(joy->axes[1] + " "+ 100*(joy->axes[2]));
}
int main(int argc, char **argv)
{
ros::init(argc, argv, "subscriber");
Tutorial tutorial;
ros::Rate loop_rate(10);
while(ros::ok())
{
ros::spin();
}
return 0;
} 
}
