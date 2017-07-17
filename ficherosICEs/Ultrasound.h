// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `Ultrasound.ice'

#ifndef __Ultrasound_h__
#define __Ultrasound_h__

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

namespace RoboCompUltrasound
{

class Ultrasound;

}

}

namespace RoboCompUltrasound
{

class Ultrasound;
bool operator==(const Ultrasound&, const Ultrasound&);
bool operator<(const Ultrasound&, const Ultrasound&);

}

namespace IceInternal
{

::Ice::Object* upCast(::RoboCompUltrasound::Ultrasound*);
::IceProxy::Ice::Object* upCast(::IceProxy::RoboCompUltrasound::Ultrasound*);

}

namespace RoboCompUltrasound
{

typedef ::IceInternal::Handle< ::RoboCompUltrasound::Ultrasound> UltrasoundPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::RoboCompUltrasound::Ultrasound> UltrasoundPrx;

void __read(::IceInternal::BasicStream*, UltrasoundPrx&);
void __patch__UltrasoundPtr(void*, ::Ice::ObjectPtr&);

}

namespace RoboCompUltrasound
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

class UnknownSensorException : public ::Ice::UserException
{
public:

    UnknownSensorException() {}
    explicit UnknownSensorException(const ::std::string&);
    virtual ~UnknownSensorException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string what;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
};

struct BusParams
{
    ::Ice::Int numSensors;
    ::Ice::Int baudRate;
    ::Ice::Int basicPeriod;

    bool operator==(const BusParams&) const;
    bool operator<(const BusParams&) const;
    bool operator!=(const BusParams& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const BusParams& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const BusParams& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const BusParams& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

struct SensorParams
{
    ::std::string device;
    ::Ice::Int busId;
    ::std::string name;

    bool operator==(const SensorParams&) const;
    bool operator<(const SensorParams&) const;
    bool operator!=(const SensorParams& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const SensorParams& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const SensorParams& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const SensorParams& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::RoboCompUltrasound::SensorParams> SensorParamsList;
void __writeSensorParamsList(::IceInternal::BasicStream*, const ::RoboCompUltrasound::SensorParams*, const ::RoboCompUltrasound::SensorParams*);
void __readSensorParamsList(::IceInternal::BasicStream*, SensorParamsList&);

typedef ::std::vector< ::Ice::Int> SensorsState;

}

namespace RoboCompUltrasound
{

class Ultrasound : virtual public ::Ice::Object
{
public:

    typedef UltrasoundPrx ProxyType;
    typedef UltrasoundPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::RoboCompUltrasound::BusParams getBusParams(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getBusParams(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::RoboCompUltrasound::SensorParams getSensorParams(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getSensorParams(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::RoboCompUltrasound::SensorParamsList getAllSensorParams(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getAllSensorParams(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::std::string getSensorDistance(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getSensorDistance(::IceInternal::Incoming&, const ::Ice::Current&);
#endif // ICEE_PURE_CLIENT

    virtual ::RoboCompUltrasound::SensorsState getAllSensorDistances(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getAllSensorDistances(::IceInternal::Incoming&, const ::Ice::Current&);
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

namespace RoboCompUltrasound
{

class Ultrasound : virtual public ::IceProxy::Ice::Object
{
public:

    ::RoboCompUltrasound::BusParams getBusParams()
    {
        return getBusParams(0);
    }
    ::RoboCompUltrasound::BusParams getBusParams(const ::Ice::Context& __ctx)
    {
        return getBusParams(&__ctx);
    }
    
private:

    ::RoboCompUltrasound::BusParams getBusParams(const ::Ice::Context*);
    
public:

    ::RoboCompUltrasound::SensorParams getSensorParams(const ::std::string& sensor)
    {
        return getSensorParams(sensor, 0);
    }
    ::RoboCompUltrasound::SensorParams getSensorParams(const ::std::string& sensor, const ::Ice::Context& __ctx)
    {
        return getSensorParams(sensor, &__ctx);
    }
    
private:

    ::RoboCompUltrasound::SensorParams getSensorParams(const ::std::string&, const ::Ice::Context*);
    
public:

    ::RoboCompUltrasound::SensorParamsList getAllSensorParams()
    {
        return getAllSensorParams(0);
    }
    ::RoboCompUltrasound::SensorParamsList getAllSensorParams(const ::Ice::Context& __ctx)
    {
        return getAllSensorParams(&__ctx);
    }
    
private:

    ::RoboCompUltrasound::SensorParamsList getAllSensorParams(const ::Ice::Context*);
    
public:

    ::std::string getSensorDistance(const ::std::string& sensor)
    {
        return getSensorDistance(sensor, 0);
    }
    ::std::string getSensorDistance(const ::std::string& sensor, const ::Ice::Context& __ctx)
    {
        return getSensorDistance(sensor, &__ctx);
    }
    
private:

    ::std::string getSensorDistance(const ::std::string&, const ::Ice::Context*);
    
public:

    ::RoboCompUltrasound::SensorsState getAllSensorDistances()
    {
        return getAllSensorDistances(0);
    }
    ::RoboCompUltrasound::SensorsState getAllSensorDistances(const ::Ice::Context& __ctx)
    {
        return getAllSensorDistances(&__ctx);
    }
    
private:

    ::RoboCompUltrasound::SensorsState getAllSensorDistances(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Ultrasound> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Ultrasound> ice_secure(bool __secure) const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<Ultrasound> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<Ultrasound> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Ultrasound> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<Ultrasound> ice_twoway() const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Ultrasound> ice_oneway() const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Ultrasound> ice_batchOneway() const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Ultrasound> ice_datagram() const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Ultrasound> ice_batchDatagram() const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Ultrasound> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Ultrasound*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
