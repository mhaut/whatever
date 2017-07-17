// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `DifferentialRobot.ice'

#include <DifferentialRobot.h>
#include <IceE/LocalException.h>
#include <IceE/ObjectFactory.h>
#include <IceE/BasicStream.h>
#include <IceE/LocalException.h>
#include <IceE/Iterator.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

static const ::std::string __RoboCompDifferentialRobot__DifferentialRobot__getBaseState_name = "getBaseState";

static const ::std::string __RoboCompDifferentialRobot__DifferentialRobot__getBasePose_name = "getBasePose";

static const ::std::string __RoboCompDifferentialRobot__DifferentialRobot__setSpeedBase_name = "setSpeedBase";

static const ::std::string __RoboCompDifferentialRobot__DifferentialRobot__stopBase_name = "stopBase";

static const ::std::string __RoboCompDifferentialRobot__DifferentialRobot__resetOdometer_name = "resetOdometer";

static const ::std::string __RoboCompDifferentialRobot__DifferentialRobot__setOdometer_name = "setOdometer";

static const ::std::string __RoboCompDifferentialRobot__DifferentialRobot__setOdometerPose_name = "setOdometerPose";

static const ::std::string __RoboCompDifferentialRobot__DifferentialRobot__correctOdometer_name = "correctOdometer";

::Ice::Object* IceInternal::upCast(::RoboCompDifferentialRobot::DifferentialRobot* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::RoboCompDifferentialRobot::DifferentialRobot* p) { return p; }

void
RoboCompDifferentialRobot::__read(::IceInternal::BasicStream* __is, ::RoboCompDifferentialRobot::DifferentialRobotPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RoboCompDifferentialRobot::DifferentialRobot;
        v->__copyFrom(proxy);
    }
}

RoboCompDifferentialRobot::HardwareFailedException::HardwareFailedException(const ::std::string& __ice_what) :
    ::Ice::UserException(),
    what(__ice_what)
{
}

RoboCompDifferentialRobot::HardwareFailedException::~HardwareFailedException() throw()
{
}

static const char* __RoboCompDifferentialRobot__HardwareFailedException_name = "RoboCompDifferentialRobot::HardwareFailedException";

::std::string
RoboCompDifferentialRobot::HardwareFailedException::ice_name() const
{
    return __RoboCompDifferentialRobot__HardwareFailedException_name;
}

::Ice::Exception*
RoboCompDifferentialRobot::HardwareFailedException::ice_clone() const
{
    return new HardwareFailedException(*this);
}

void
RoboCompDifferentialRobot::HardwareFailedException::ice_throw() const
{
    throw *this;
}

void
RoboCompDifferentialRobot::HardwareFailedException::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(::std::string("::RoboCompDifferentialRobot::HardwareFailedException"), false);
    __os->startWriteSlice();
    __os->write(what);
    __os->endWriteSlice();
}

void
RoboCompDifferentialRobot::HardwareFailedException::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->read(myId, false);
    }
    __is->startReadSlice();
    __is->read(what);
    __is->endReadSlice();
}

struct __F__RoboCompDifferentialRobot__HardwareFailedException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow()
    {
        throw ::RoboCompDifferentialRobot::HardwareFailedException();
    }
};

static ::IceInternal::UserExceptionFactoryPtr __F__RoboCompDifferentialRobot__HardwareFailedException__Ptr = new __F__RoboCompDifferentialRobot__HardwareFailedException;

const ::IceInternal::UserExceptionFactoryPtr&
RoboCompDifferentialRobot::HardwareFailedException::ice_factory()
{
    return __F__RoboCompDifferentialRobot__HardwareFailedException__Ptr;
}

class __F__RoboCompDifferentialRobot__HardwareFailedException__Init
{
public:

    __F__RoboCompDifferentialRobot__HardwareFailedException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::RoboCompDifferentialRobot::HardwareFailedException", ::RoboCompDifferentialRobot::HardwareFailedException::ice_factory());
    }

    ~__F__RoboCompDifferentialRobot__HardwareFailedException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::RoboCompDifferentialRobot::HardwareFailedException");
    }
};

static __F__RoboCompDifferentialRobot__HardwareFailedException__Init __F__RoboCompDifferentialRobot__HardwareFailedException__i;

#ifdef __APPLE__
extern "C" { void __F__RoboCompDifferentialRobot__HardwareFailedException__initializer() {} }
#endif

bool
RoboCompDifferentialRobot::TMechParams::operator==(const TMechParams& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(wheelRadius != __rhs.wheelRadius)
    {
        return false;
    }
    if(axisLength != __rhs.axisLength)
    {
        return false;
    }
    if(encoderSteps != __rhs.encoderSteps)
    {
        return false;
    }
    if(gearRatio != __rhs.gearRatio)
    {
        return false;
    }
    if(temp != __rhs.temp)
    {
        return false;
    }
    if(maxVelAdv != __rhs.maxVelAdv)
    {
        return false;
    }
    if(maxVelRot != __rhs.maxVelRot)
    {
        return false;
    }
    if(device != __rhs.device)
    {
        return false;
    }
    if(handler != __rhs.handler)
    {
        return false;
    }
    return true;
}

bool
RoboCompDifferentialRobot::TMechParams::operator<(const TMechParams& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(wheelRadius < __rhs.wheelRadius)
    {
        return true;
    }
    else if(__rhs.wheelRadius < wheelRadius)
    {
        return false;
    }
    if(axisLength < __rhs.axisLength)
    {
        return true;
    }
    else if(__rhs.axisLength < axisLength)
    {
        return false;
    }
    if(encoderSteps < __rhs.encoderSteps)
    {
        return true;
    }
    else if(__rhs.encoderSteps < encoderSteps)
    {
        return false;
    }
    if(gearRatio < __rhs.gearRatio)
    {
        return true;
    }
    else if(__rhs.gearRatio < gearRatio)
    {
        return false;
    }
    if(temp < __rhs.temp)
    {
        return true;
    }
    else if(__rhs.temp < temp)
    {
        return false;
    }
    if(maxVelAdv < __rhs.maxVelAdv)
    {
        return true;
    }
    else if(__rhs.maxVelAdv < maxVelAdv)
    {
        return false;
    }
    if(maxVelRot < __rhs.maxVelRot)
    {
        return true;
    }
    else if(__rhs.maxVelRot < maxVelRot)
    {
        return false;
    }
    if(device < __rhs.device)
    {
        return true;
    }
    else if(__rhs.device < device)
    {
        return false;
    }
    if(handler < __rhs.handler)
    {
        return true;
    }
    else if(__rhs.handler < handler)
    {
        return false;
    }
    return false;
}

void
RoboCompDifferentialRobot::TMechParams::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(wheelRadius);
    __os->write(axisLength);
    __os->write(encoderSteps);
    __os->write(gearRatio);
    __os->write(temp);
    __os->write(maxVelAdv);
    __os->write(maxVelRot);
    __os->write(device);
    __os->write(handler);
}

void
RoboCompDifferentialRobot::TMechParams::__read(::IceInternal::BasicStream* __is)
{
    __is->read(wheelRadius);
    __is->read(axisLength);
    __is->read(encoderSteps);
    __is->read(gearRatio);
    __is->read(temp);
    __is->read(maxVelAdv);
    __is->read(maxVelRot);
    __is->read(device);
    __is->read(handler);
}

bool
RoboCompDifferentialRobot::TBaseState::operator==(const TBaseState& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(isMoving != __rhs.isMoving)
    {
        return false;
    }
    if(x != __rhs.x)
    {
        return false;
    }
    if(correctedX != __rhs.correctedX)
    {
        return false;
    }
    if(z != __rhs.z)
    {
        return false;
    }
    if(correctedZ != __rhs.correctedZ)
    {
        return false;
    }
    if(alpha != __rhs.alpha)
    {
        return false;
    }
    if(correctedAlpha != __rhs.correctedAlpha)
    {
        return false;
    }
    if(advV != __rhs.advV)
    {
        return false;
    }
    if(rotV != __rhs.rotV)
    {
        return false;
    }
    if(adv != __rhs.adv)
    {
        return false;
    }
    if(rot != __rhs.rot)
    {
        return false;
    }
    if(voltage != __rhs.voltage)
    {
        return false;
    }
    return true;
}

bool
RoboCompDifferentialRobot::TBaseState::operator<(const TBaseState& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(isMoving < __rhs.isMoving)
    {
        return true;
    }
    else if(__rhs.isMoving < isMoving)
    {
        return false;
    }
    if(x < __rhs.x)
    {
        return true;
    }
    else if(__rhs.x < x)
    {
        return false;
    }
    if(correctedX < __rhs.correctedX)
    {
        return true;
    }
    else if(__rhs.correctedX < correctedX)
    {
        return false;
    }
    if(z < __rhs.z)
    {
        return true;
    }
    else if(__rhs.z < z)
    {
        return false;
    }
    if(correctedZ < __rhs.correctedZ)
    {
        return true;
    }
    else if(__rhs.correctedZ < correctedZ)
    {
        return false;
    }
    if(alpha < __rhs.alpha)
    {
        return true;
    }
    else if(__rhs.alpha < alpha)
    {
        return false;
    }
    if(correctedAlpha < __rhs.correctedAlpha)
    {
        return true;
    }
    else if(__rhs.correctedAlpha < correctedAlpha)
    {
        return false;
    }
    if(advV < __rhs.advV)
    {
        return true;
    }
    else if(__rhs.advV < advV)
    {
        return false;
    }
    if(rotV < __rhs.rotV)
    {
        return true;
    }
    else if(__rhs.rotV < rotV)
    {
        return false;
    }
    if(adv < __rhs.adv)
    {
        return true;
    }
    else if(__rhs.adv < adv)
    {
        return false;
    }
    if(rot < __rhs.rot)
    {
        return true;
    }
    else if(__rhs.rot < rot)
    {
        return false;
    }
    if(voltage < __rhs.voltage)
    {
        return true;
    }
    else if(__rhs.voltage < voltage)
    {
        return false;
    }
    return false;
}

void
RoboCompDifferentialRobot::TBaseState::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(isMoving);
    __os->write(x);
    __os->write(correctedX);
    __os->write(z);
    __os->write(correctedZ);
    __os->write(alpha);
    __os->write(correctedAlpha);
    __os->write(advV);
    __os->write(rotV);
    __os->write(adv);
    __os->write(rot);
    __os->write(voltage);
}

void
RoboCompDifferentialRobot::TBaseState::__read(::IceInternal::BasicStream* __is)
{
    __is->read(isMoving);
    __is->read(x);
    __is->read(correctedX);
    __is->read(z);
    __is->read(correctedZ);
    __is->read(alpha);
    __is->read(correctedAlpha);
    __is->read(advV);
    __is->read(rotV);
    __is->read(adv);
    __is->read(rot);
    __is->read(voltage);
}

static const ::std::string __RoboCompDifferentialRobot__DifferentialRobot_ids[2] =
{
    "::Ice::Object",
    "::RoboCompDifferentialRobot::DifferentialRobot"
};

bool
RoboCompDifferentialRobot::DifferentialRobot::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__RoboCompDifferentialRobot__DifferentialRobot_ids, __RoboCompDifferentialRobot__DifferentialRobot_ids + 2, _s);
}

::std::vector< ::std::string>
RoboCompDifferentialRobot::DifferentialRobot::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__RoboCompDifferentialRobot__DifferentialRobot_ids[0], &__RoboCompDifferentialRobot__DifferentialRobot_ids[2]);
}

const ::std::string&
RoboCompDifferentialRobot::DifferentialRobot::ice_id(const ::Ice::Current&) const
{
    return __RoboCompDifferentialRobot__DifferentialRobot_ids[1];
}

const ::std::string&
RoboCompDifferentialRobot::DifferentialRobot::ice_staticId()
{
    return __RoboCompDifferentialRobot__DifferentialRobot_ids[1];
}

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompDifferentialRobot::DifferentialRobot::___getBaseState(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::RoboCompDifferentialRobot::TBaseState state;
    try
    {
        getBaseState(state, __current);
        state.__write(__os);
    }
    catch(const ::RoboCompDifferentialRobot::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompDifferentialRobot::DifferentialRobot::___getBasePose(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int x;
    ::Ice::Int z;
    ::Ice::Float alpha;
    try
    {
        getBasePose(x, z, alpha, __current);
        __os->write(x);
        __os->write(z);
        __os->write(alpha);
    }
    catch(const ::RoboCompDifferentialRobot::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompDifferentialRobot::DifferentialRobot::___setSpeedBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Float adv;
    ::Ice::Float rot;
    __is->read(adv);
    __is->read(rot);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        setSpeedBase(adv, rot, __current);
    }
    catch(const ::RoboCompDifferentialRobot::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompDifferentialRobot::DifferentialRobot::___stopBase(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        stopBase(__current);
    }
    catch(const ::RoboCompDifferentialRobot::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompDifferentialRobot::DifferentialRobot::___resetOdometer(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        resetOdometer(__current);
    }
    catch(const ::RoboCompDifferentialRobot::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompDifferentialRobot::DifferentialRobot::___setOdometer(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::RoboCompDifferentialRobot::TBaseState state;
    state.__read(__is);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        setOdometer(state, __current);
    }
    catch(const ::RoboCompDifferentialRobot::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompDifferentialRobot::DifferentialRobot::___setOdometerPose(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int x;
    ::Ice::Int z;
    ::Ice::Float alpha;
    __is->read(x);
    __is->read(z);
    __is->read(alpha);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        setOdometerPose(x, z, alpha, __current);
    }
    catch(const ::RoboCompDifferentialRobot::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
::Ice::DispatchStatus
RoboCompDifferentialRobot::DifferentialRobot::___correctOdometer(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    ::Ice::Int x;
    ::Ice::Int z;
    ::Ice::Float alpha;
    __is->read(x);
    __is->read(z);
    __is->read(alpha);
    ::IceInternal::BasicStream* __os = __inS.os();
    try
    {
        correctOdometer(x, z, alpha, __current);
    }
    catch(const ::RoboCompDifferentialRobot::HardwareFailedException& __ex)
    {
        __os->write(__ex);
        return ::Ice::DispatchUserException;
    }
    return ::Ice::DispatchOK;
}
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
static ::std::string __RoboCompDifferentialRobot__DifferentialRobot_all[] =
{
    "correctOdometer",
    "getBasePose",
    "getBaseState",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "resetOdometer",
    "setOdometer",
    "setOdometerPose",
    "setSpeedBase",
    "stopBase"
};

::Ice::DispatchStatus
RoboCompDifferentialRobot::DifferentialRobot::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__RoboCompDifferentialRobot__DifferentialRobot_all, __RoboCompDifferentialRobot__DifferentialRobot_all + 12, current.operation);
    if(r.first == r.second)
    {
        throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __RoboCompDifferentialRobot__DifferentialRobot_all)
    {
        case 0:
        {
            return ___correctOdometer(in, current);
        }
        case 1:
        {
            return ___getBasePose(in, current);
        }
        case 2:
        {
            return ___getBaseState(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
        case 7:
        {
            return ___resetOdometer(in, current);
        }
        case 8:
        {
            return ___setOdometer(in, current);
        }
        case 9:
        {
            return ___setOdometerPose(in, current);
        }
        case 10:
        {
            return ___setSpeedBase(in, current);
        }
        case 11:
        {
            return ___stopBase(in, current);
        }
    }

    assert(false);
    throw Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}
#endif // ICEE_PURE_CLIENT

void
RoboCompDifferentialRobot::DifferentialRobot::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
    ::Ice::Object::__write(__os);
}

void
RoboCompDifferentialRobot::DifferentialRobot::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
    ::Ice::Object::__read(__is, true);
}


bool
RoboCompDifferentialRobot::operator==(const ::RoboCompDifferentialRobot::DifferentialRobot& l, const ::RoboCompDifferentialRobot::DifferentialRobot& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
RoboCompDifferentialRobot::operator<(const ::RoboCompDifferentialRobot::DifferentialRobot& l, const ::RoboCompDifferentialRobot::DifferentialRobot& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

void 
RoboCompDifferentialRobot::__patch__DifferentialRobotPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::RoboCompDifferentialRobot::DifferentialRobotPtr* p = static_cast< ::RoboCompDifferentialRobot::DifferentialRobotPtr*>(__addr);
    assert(p);
    *p = ::RoboCompDifferentialRobot::DifferentialRobotPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::RoboCompDifferentialRobot::DifferentialRobot::ice_staticId(), v->ice_id());
    }
}

void
IceProxy::RoboCompDifferentialRobot::DifferentialRobot::getBaseState(::RoboCompDifferentialRobot::TBaseState& state, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompDifferentialRobot__DifferentialRobot__getBaseState_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompDifferentialRobot__DifferentialRobot__getBaseState_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompDifferentialRobot::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
                ::IceInternal::BasicStream* __is = __outS.is();
                state.__read(__is);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}

void
IceProxy::RoboCompDifferentialRobot::DifferentialRobot::getBasePose(::Ice::Int& x, ::Ice::Int& z, ::Ice::Float& alpha, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompDifferentialRobot__DifferentialRobot__getBasePose_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompDifferentialRobot__DifferentialRobot__getBasePose_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompDifferentialRobot::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
                ::IceInternal::BasicStream* __is = __outS.is();
                __is->read(x);
                __is->read(z);
                __is->read(alpha);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}

void
IceProxy::RoboCompDifferentialRobot::DifferentialRobot::setSpeedBase(::Ice::Float adv, ::Ice::Float rot, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompDifferentialRobot__DifferentialRobot__setSpeedBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompDifferentialRobot__DifferentialRobot__setSpeedBase_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(adv);
                __os->write(rot);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompDifferentialRobot::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}

void
IceProxy::RoboCompDifferentialRobot::DifferentialRobot::stopBase(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompDifferentialRobot__DifferentialRobot__stopBase_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompDifferentialRobot__DifferentialRobot__stopBase_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompDifferentialRobot::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}

void
IceProxy::RoboCompDifferentialRobot::DifferentialRobot::resetOdometer(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompDifferentialRobot__DifferentialRobot__resetOdometer_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompDifferentialRobot__DifferentialRobot__resetOdometer_name, ::Ice::Normal, __ctx);
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompDifferentialRobot::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}

void
IceProxy::RoboCompDifferentialRobot::DifferentialRobot::setOdometer(const ::RoboCompDifferentialRobot::TBaseState& state, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompDifferentialRobot__DifferentialRobot__setOdometer_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompDifferentialRobot__DifferentialRobot__setOdometer_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                state.__write(__os);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompDifferentialRobot::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}

void
IceProxy::RoboCompDifferentialRobot::DifferentialRobot::setOdometerPose(::Ice::Int x, ::Ice::Int z, ::Ice::Float alpha, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompDifferentialRobot__DifferentialRobot__setOdometerPose_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompDifferentialRobot__DifferentialRobot__setOdometerPose_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(x);
                __os->write(z);
                __os->write(alpha);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompDifferentialRobot::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}

void
IceProxy::RoboCompDifferentialRobot::DifferentialRobot::correctOdometer(::Ice::Int x, ::Ice::Int z, ::Ice::Float alpha, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::RequestHandlerPtr __handler;
        try
        {
            __checkTwowayOnly(__RoboCompDifferentialRobot__DifferentialRobot__correctOdometer_name);
            __handler = __getRequestHandler();
            ::IceInternal::Outgoing __outS(__handler.get(), _reference.get(), __RoboCompDifferentialRobot__DifferentialRobot__correctOdometer_name, ::Ice::Normal, __ctx);
            try
            {
                ::IceInternal::BasicStream* __os = __outS.os();
                __os->write(x);
                __os->write(z);
                __os->write(alpha);
            }
            catch(const ::Ice::LocalException& __ex)
            {
                __outS.abort(__ex);
            }
            bool __ok = __outS.invoke();
            try
            {
                if(!__ok)
                {
                    try
                    {
                        __outS.is()->throwException();
                    }
                    catch(const ::RoboCompDifferentialRobot::HardwareFailedException&)
                    {
                        throw;
                    }
                    catch(const ::Ice::UserException& __ex)
                    {
                        ::Ice::UnknownUserException __uex(__FILE__, __LINE__);
                        __uex.unknown = __ex.ice_name();
                        throw __uex;
                    }
                }
            }
            catch(const ::Ice::LocalException& __ex)
            {
                throw ::IceInternal::LocalExceptionWrapper(__ex, false);
            }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
            catch(...)
            {
                throw;
            }
#endif
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__handler, __ex);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__handler, __ex, __cnt);
        }
#if defined(_MSC_VER) && defined(_M_ARM) // ARM bug.
        catch(...)
        {
            throw;
        }
#endif
    }
}

const ::std::string&
IceProxy::RoboCompDifferentialRobot::DifferentialRobot::ice_staticId()
{
    return __RoboCompDifferentialRobot__DifferentialRobot_ids[1];
}

::IceProxy::Ice::Object*
IceProxy::RoboCompDifferentialRobot::DifferentialRobot::__newInstance() const
{
    return new DifferentialRobot;
}
