Name:           ros-indigo-micros-swarm-framework
Version:        0.0.6
Release:        2%{?dist}
Summary:        ROS micros_swarm_framework package

Group:          Development/Libraries
License:        BSD
URL:            http://wiki.ros.org/micros_swarm_framework
Source0:        %{name}-%{version}.tar.gz

Requires:       ros-indigo-geometry-msgs
Requires:       ros-indigo-message-runtime
Requires:       ros-indigo-nav-msgs
Requires:       ros-indigo-roscpp
Requires:       ros-indigo-rospy
Requires:       ros-indigo-std-msgs
BuildRequires:  ros-indigo-catkin
BuildRequires:  ros-indigo-geometry-msgs
BuildRequires:  ros-indigo-message-generation
BuildRequires:  ros-indigo-nav-msgs
BuildRequires:  ros-indigo-roscpp
BuildRequires:  ros-indigo-rospy
BuildRequires:  ros-indigo-std-msgs

%description
A programming framework for robot swarms, including a communication kernel and a
synchronization protocol. This package also provides essential data structures
for swarm robotics, such as Swarm, Neighbors, and Virtual Stigmergy.

%prep
%setup -q

%build
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree that was dropped by catkin, and source it.  It will
# set things like CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/indigo/setup.sh" ]; then . "/opt/ros/indigo/setup.sh"; fi
mkdir -p obj-%{_target_platform} && cd obj-%{_target_platform}
%cmake .. \
        -UINCLUDE_INSTALL_DIR \
        -ULIB_INSTALL_DIR \
        -USYSCONF_INSTALL_DIR \
        -USHARE_INSTALL_PREFIX \
        -ULIB_SUFFIX \
        -DCMAKE_INSTALL_LIBDIR="lib" \
        -DCMAKE_INSTALL_PREFIX="/opt/ros/indigo" \
        -DCMAKE_PREFIX_PATH="/opt/ros/indigo" \
        -DSETUPTOOLS_DEB_LAYOUT=OFF \
        -DCATKIN_BUILD_BINARY_PACKAGE="1" \

make %{?_smp_mflags}

%install
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree that was dropped by catkin, and source it.  It will
# set things like CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/indigo/setup.sh" ]; then . "/opt/ros/indigo/setup.sh"; fi
cd obj-%{_target_platform}
make %{?_smp_mflags} install DESTDIR=%{buildroot}

%files
/opt/ros/indigo

%changelog
* Tue May 17 2016 Xuefeng Chang <changxuefengcn@163.com> - 0.0.6-2
- Autogenerated by Bloom

* Tue May 17 2016 Xuefeng Chang <changxuefengcn@163.com> - 0.0.6-1
- Autogenerated by Bloom

* Tue May 17 2016 Xuefeng Chang <changxuefengcn@163.com> - 0.0.6-0
- Autogenerated by Bloom

* Fri May 13 2016 Xuefeng Chang <changxuefengcn@163.com> - 0.0.5-0
- Autogenerated by Bloom

* Wed May 11 2016 Xuefeng Chang <changxuefengcn@163.com> - 0.0.4-0
- Autogenerated by Bloom

* Wed May 11 2016 Xuefeng Chang <changxuefengcn@163.com> - 0.0.3-0
- Autogenerated by Bloom

* Tue May 10 2016 Xuefeng Chang <changxuefengcn@163.com> - 0.0.2-1
- Autogenerated by Bloom

* Tue May 10 2016 Xuefeng Chang <changxuefengcn@163.com> - 0.0.2-0
- Autogenerated by Bloom

