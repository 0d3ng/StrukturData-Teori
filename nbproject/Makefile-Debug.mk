#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/week10/DoubleLinkedList.o \
	${OBJECTDIR}/week3/Week3.o \
	${OBJECTDIR}/week4/Week4.o \
	${OBJECTDIR}/week5/Week5.o \
	${OBJECTDIR}/week6/Week6.o \
	${OBJECTDIR}/week7/Week7.o \
	${OBJECTDIR}/week8/Stack.o \
	${OBJECTDIR}/week8/StackLinkedList.o \
	${OBJECTDIR}/week9/Queue.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/strukturdata-teori

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/strukturdata-teori: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/strukturdata-teori ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/week10/DoubleLinkedList.o: week10/DoubleLinkedList.cpp
	${MKDIR} -p ${OBJECTDIR}/week10
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/week10/DoubleLinkedList.o week10/DoubleLinkedList.cpp

${OBJECTDIR}/week3/Week3.o: week3/Week3.cpp
	${MKDIR} -p ${OBJECTDIR}/week3
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/week3/Week3.o week3/Week3.cpp

${OBJECTDIR}/week4/Week4.o: week4/Week4.cpp
	${MKDIR} -p ${OBJECTDIR}/week4
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/week4/Week4.o week4/Week4.cpp

${OBJECTDIR}/week5/Week5.o: week5/Week5.cpp
	${MKDIR} -p ${OBJECTDIR}/week5
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/week5/Week5.o week5/Week5.cpp

${OBJECTDIR}/week6/Week6.o: week6/Week6.cpp
	${MKDIR} -p ${OBJECTDIR}/week6
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/week6/Week6.o week6/Week6.cpp

${OBJECTDIR}/week7/Week7.o: week7/Week7.cpp
	${MKDIR} -p ${OBJECTDIR}/week7
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/week7/Week7.o week7/Week7.cpp

${OBJECTDIR}/week8/Stack.o: week8/Stack.cpp
	${MKDIR} -p ${OBJECTDIR}/week8
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/week8/Stack.o week8/Stack.cpp

${OBJECTDIR}/week8/StackLinkedList.o: week8/StackLinkedList.cpp
	${MKDIR} -p ${OBJECTDIR}/week8
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/week8/StackLinkedList.o week8/StackLinkedList.cpp

${OBJECTDIR}/week9/Queue.o: week9/Queue.cpp
	${MKDIR} -p ${OBJECTDIR}/week9
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/week9/Queue.o week9/Queue.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
