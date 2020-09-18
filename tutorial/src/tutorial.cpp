     #include <ros/ros.h>
     #include <geometry_msgs/Twist.h>
     #include <sensor_msgs/Joy.h>
   4 
   5/* 
   6 class Tutorial
   7 {
   8 public:
   9   Tutorial();
  10 
  11 private:
  12   void joyCallback(const sensor_msgs::Joy::ConstPtr& joy);
  13 
  14   ros::NodeHandle nh_;
  15 
  16   int linear_, angular_;
  17   double l_scale_, a_scale_;
  18   ros::Publisher vel_pub_;
  19   ros::Subscriber joy_sub_;
  20 
  21 };
  22 
  23 
  24 Tutorial::Tutorial():
  25   linear_(1),
  26   angular_(2)
  27 {
  28 
  29   nh_.param("axis_linear", linear_, linear_);
  30   nh_.param("axis_angular", angular_, angular_);
  31   nh_.param("scale_angular", a_scale_, a_scale_);
  32   nh_.param("scale_linear", l_scale_, l_scale_);
  33 
  34 
  35   vel_pub_ = nh_.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 1);
  36 
  37 
  38   joy_sub_ = nh_.subscribe<sensor_msgs::Joy>("joy", 10, &TeleopTurtle::joyCallback, this);
  39 
  40 }
  41 
  42 void TeleopTurtle::joyCallback(const sensor_msgs::Joy::ConstPtr& joy)
  43 {
  44   geometry_msgs::Twist twist;
  45   twist.angular.z = a_scale_*joy->axes[angular_];
  46   twist.linear.x = l_scale_*joy->axes[linear_];
  47   vel_pub_.publish(twist);
  48 }
  49 
  50 
  51 int main(int argc, char** argv)
  52 {
  53   ros::init(argc, argv, "tutorial");
  54   TeleopTurtle tutorial;
  55 
  56   ros::spin();
  57 }
  */
 int main(argc, argc, "tutorial")
 {
 ros::NodeHandle n;
 ros::publisher tutorialPub = n.advertise<geometry_msgs::Twist>("coordinates", 100);
 ros::Rate loops_rate(10);
 int count = 0;
 while(ros::ok())
 {
   geometry_msgs::Twist twist;
   twist.angular.z = 100*joy->axes[angular_];
   twist.linear.x = 100*joy->axes[linear_];
   tutorialPub.publish(twist);
   ros::spinOnce();
   loop_rate.sleep();
   ++count;
 }
 return 0;
 }