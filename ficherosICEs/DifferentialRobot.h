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

#ifndef __DifferentialRobot_h__
#define __DifferentialRobot_h__

#include <IceE/ProxyF.h>
#include <IceE/ObjectF.h>
#include <IceE/Exception.h>
#include <IceE/ScopedArray.h>
#include <IceE/Proxy.h>
#include <IceE/Object.h>
#ifndef ICEE_PURE_CLIENT
#  include <IceE/Incoming.h>
#endif
#include <IceE/Outgoing.h>
#include <IceE/UserExceptionFactory.h>
#include <IceE/FactoryTable.h>
#include <IceE/UndefSysMacros.h>

#ifndef ICEE_IGNORE_VERSION
#   if ICEE_INT_VERSION / 100 != 103
#       error IceE version mismatch!
#   endif
#   if ICEE_INT_VERSION % 100 < 0
#       error IceE patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace RoboCompDifferentialRobot
{

class DifferentialRobot;

}

}

namespace RoboCompDifferentialRobot
{

class DifferentialRobot;
bool operator==(const DifferentialRobot&, const DifferentialRobot&);
bool operator<(const DifferentialRobot&, const DifferentialRobot&);

}

namespace IceInternal
{

::Ice::Object* upCast(::RoboCompDifferentialRobot::DifferentialRobot*);
::IceProxy::Ice::Object* upCast(::IceProxy::RoboCompDifferentialRobot::DifferentialRobot*);

}

namespace RoboCompDifferentialRobot
{

typedef ::IceInternal::Handle< ::RoboCompDifferentialRobot::DifferentialRobot> DifferentialRobotPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::RoboCompDifferentialRobot::DifferentialRobot> DifferentialRobotPrx;

void __read(::IceInternal::BasicStream*, DifferentialRobotPrx&);
void __patch__DifferentialRobotPtr(void*, ::Ice::ObjectPtr&);

}

namespace RoboCompDifferentialRobot
{

class HardwareFailedException : public ::Ice::UserException
{
public:

    HardwareFailedException() {}
    explicit HardwareFailedException(const ::std::string&);
    virtual ~HardwareFailedException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string what;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

static HardwareFailedException __HardwareFailedException_init;

struct TMechParams
{
    ::Ice::Int wheelRadius;
    ::Ice::Int axisLength;
    ::Ice::Int encoderSteps;
    ::Ice::Int gearRatio;
    ::Ice::Float temp;
    ::Ice::Float maxVelAdv;
    ::Ice::Float maxVelRot;
    ::std::string device;
    ::std::string handler;

    bool operator==(const TMechParams&) const;
    bool operator<(const TMechParams&) const;
    bool operator!=(const TMechParams& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const TMechParams& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const TMechParams& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const TMechParams& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct TBaseState
{
    bool isMoving;
    ::Ice::Float x;
    ::Ice::Float correctedX;
    ::Ice::Float z;
    ::Ice::Float correctedZ;
    ::Ice::Float alpha;
    ::Ice::Float correctedAlpha;
    ::Ice::Float advV;
    ::Ice::Float rotV;
    ::Ice::Float adv;
    ::Ice::Float rot;
    ::Ice::Float voltage;

    bool operator==(const TBaseState&) const;
    bool operator<(const TBaseState&) const;
    bool operator!=(const TBaseState& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const TBaseState& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const TBaseState& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const TBaseState& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

}

namespace RoboCompDifferentialRobot
{

class DifferentialRobot : virtual public ::Ice::Object
{
public:

    typedef DifferentialRobotPrx ProxyType;
    typedef DifferentialRobotPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void getBaseState(::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getBaseState(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void getBasePose(::Ice::Int&, ::Ice::Int&, ::Ice::Float&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getBasePose(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void setSpeedBase(::Ice::Float, ::Ice::Float, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___setSpeedBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void stopBase(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___stopBase(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void resetOdometer(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___resetOdometer(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void setOdometer(const ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___setOdometer(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void setOdometerPose(::Ice::Int, ::Ice::Int, ::Ice::Float, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___setOdometerPose(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void correctOdometer(::Ice::Int, ::Ice::Int, ::Ice::Float, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___correctOdometer(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

#ifndef ICEE_PURE_CLIENT
    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

}

namespace IceProxy
{

namespace RoboCompDifferentialRobot
{

class DifferentialRobot : virtual public ::IceProxy::Ice::Object
{
public:

    void getBaseState(::RoboCompDifferentialRobot::TBaseState& state)
    {
        getBaseState(state, 0);
    }
    void getBaseState(::RoboCompDifferentialRobot::TBaseState& state, const ::Ice::Context& __ctx)
    {
        getBaseState(state, &__ctx);
    }
    
private:

    void getBaseState(::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);
    
public:

    void getBasePose(::Ice::Int& x, ::Ice::Int& z, ::Ice::Float& alpha)
    {
        getBasePose(x, z, alpha, 0);
    }
    void getBasePose(::Ice::Int& x, ::Ice::Int& z, ::Ice::Float& alpha, const ::Ice::Context& __ctx)
    {
        getBasePose(x, z, alpha, &__ctx);
    }
    
private:

    void getBasePose(::Ice::Int&, ::Ice::Int&, ::Ice::Float&, const ::Ice::Context*);
    
public:

    void setSpeedBase(::Ice::Float adv, ::Ice::Float rot)
    {
        setSpeedBase(adv, rot, 0);
    }
    void setSpeedBase(::Ice::Float adv, ::Ice::Float rot, const ::Ice::Context& __ctx)
    {
        setSpeedBase(adv, rot, &__ctx);
    }
    
private:

    void setSpeedBase(::Ice::Float, ::Ice::Float, const ::Ice::Context*);
    
public:

    void stopBase()
    {
        stopBase(0);
    }
    void stopBase(const ::Ice::Context& __ctx)
    {
        stopBase(&__ctx);
    }
    
private:

    void stopBase(const ::Ice::Context*);
    
public:

    void resetOdometer()
    {
        resetOdometer(0);
    }
    void resetOdometer(const ::Ice::Context& __ctx)
    {
        resetOdometer(&__ctx);
    }
    
private:

    void resetOdometer(const ::Ice::Context*);
    
public:

    void setOdometer(const ::RoboCompDifferentialRobot::TBaseState& state)
    {
        setOdometer(state, 0);
    }
    void setOdometer(const ::RoboCompDifferentialRobot::TBaseState& state, const ::Ice::Context& __ctx)
    {
        setOdometer(state, &__ctx);
    }
    
private:

    void setOdometer(const ::RoboCompDifferentialRobot::TBaseState&, const ::Ice::Context*);
    
public:

    void setOdometerPose(::Ice::Int x, ::Ice::Int z, ::Ice::Float alpha)
    {
        setOdometerPose(x, z, alpha, 0);
    }
    void setOdometerPose(::Ice::Int x, ::Ice::Int z, ::Ice::Float alpha, const ::Ice::Context& __ctx)
    {
        setOdometerPose(x, z, alpha, &__ctx);
    }
    
private:

    void setOdometerPose(::Ice::Int, ::Ice::Int, ::Ice::Float, const ::Ice::Context*);
    
public:

    void correctOdometer(::Ice::Int x, ::Ice::Int z, ::Ice::Float alpha)
    {
        correctOdometer(x, z, alpha, 0);
    }
    void correctOdometer(::Ice::Int x, ::Ice::Int z, ::Ice::Float alpha, const ::Ice::Context& __ctx)
    {
        correctOdometer(x, z, alpha, &__ctx);
    }
    
private:

    void correctOdometer(::Ice::Int, ::Ice::Int, ::Ice::Float, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_secure(bool __secure) const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_twoway() const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_oneway() const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_batchOneway() const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_datagram() const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_batchDatagram() const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<DifferentialRobot> ice_timeout(int __timeout) const
    {
        return dynamic_cast<DifferentialRobot*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
