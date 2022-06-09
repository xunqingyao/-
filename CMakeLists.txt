cmake_minimum_required(VERSION 3.21)
project(final_work)

set(CMAKE_CXX_STANDARD 14)

add_executable(final_work main.cpp src/CourseInformation.cpp  src/CourseTime.cpp src/StringExtendMethod.cpp  src/Cache.cpp src/UserInfo.cpp src/Request.cpp src/Request.h src/Response.cpp src/Response.h src/Time.cpp src/Time.h src/ConflictCheck.cpp src/ConflictCheck.h src/AfterActivity.cpp src/AfterActivity.h src/Alarm.cpp src/Alarm.h src/Compress.cpp src/Compress.h)
