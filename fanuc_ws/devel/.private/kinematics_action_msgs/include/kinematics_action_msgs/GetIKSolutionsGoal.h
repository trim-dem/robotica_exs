// Generated by gencpp from file kinematics_action_msgs/GetIKSolutionsGoal.msg
// DO NOT EDIT!


#ifndef KINEMATICS_ACTION_MSGS_MESSAGE_GETIKSOLUTIONSGOAL_H
#define KINEMATICS_ACTION_MSGS_MESSAGE_GETIKSOLUTIONSGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace kinematics_action_msgs
{
template <class ContainerAllocator>
struct GetIKSolutionsGoal_
{
  typedef GetIKSolutionsGoal_<ContainerAllocator> Type;

  GetIKSolutionsGoal_()
    : end_effector_pose()  {
    }
  GetIKSolutionsGoal_(const ContainerAllocator& _alloc)
    : end_effector_pose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _end_effector_pose_type;
  _end_effector_pose_type end_effector_pose;





  typedef boost::shared_ptr< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> const> ConstPtr;

}; // struct GetIKSolutionsGoal_

typedef ::kinematics_action_msgs::GetIKSolutionsGoal_<std::allocator<void> > GetIKSolutionsGoal;

typedef boost::shared_ptr< ::kinematics_action_msgs::GetIKSolutionsGoal > GetIKSolutionsGoalPtr;
typedef boost::shared_ptr< ::kinematics_action_msgs::GetIKSolutionsGoal const> GetIKSolutionsGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator1> & lhs, const ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator2> & rhs)
{
  return lhs.end_effector_pose == rhs.end_effector_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator1> & lhs, const ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kinematics_action_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9be2bcfd9d56e8cd78063c8b79e875d0";
  }

  static const char* value(const ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9be2bcfd9d56e8cdULL;
  static const uint64_t static_value2 = 0x78063c8b79e875d0ULL;
};

template<class ContainerAllocator>
struct DataType< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kinematics_action_msgs/GetIKSolutionsGoal";
  }

  static const char* value(const ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"geometry_msgs/Pose end_effector_pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.end_effector_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetIKSolutionsGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kinematics_action_msgs::GetIKSolutionsGoal_<ContainerAllocator>& v)
  {
    s << indent << "end_effector_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.end_effector_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KINEMATICS_ACTION_MSGS_MESSAGE_GETIKSOLUTIONSGOAL_H
