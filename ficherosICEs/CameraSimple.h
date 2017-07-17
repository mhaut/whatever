// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `CameraSimple.ice'

#ifndef __CameraSimple_h__
#define __CameraSimple_h__

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

namespace RoboCompCameraSimple
{

class CameraSimple;

}

}

namespace RoboCompCameraSimple
{

class CameraSimple;
bool operator==(const CameraSimple&, const CameraSimple&);
bool operator<(const CameraSimple&, const CameraSimple&);

}

namespace IceInternal
{

::Ice::Object* upCast(::RoboCompCameraSimple::CameraSimple*);
::IceProxy::Ice::Object* upCast(::IceProxy::RoboCompCameraSimple::CameraSimple*);

}

namespace RoboCompCameraSimple
{

typedef ::IceInternal::Handle< ::RoboCompCameraSimple::CameraSimple> CameraSimplePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::RoboCompCameraSimple::CameraSimple> CameraSimplePrx;

void __read(::IceInternal::BasicStream*, CameraSimplePrx&);
void __patch__CameraSimplePtr(void*, ::Ice::ObjectPtr&);

}

namespace RoboCompCameraSimple
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

struct TCamParams
{
    ::Ice::Int focal;
    ::Ice::Int width;
    ::Ice::Int height;
    ::Ice::Int size;
    ::Ice::Int FPS;
    ::Ice::Int timerPeriod;
    ::Ice::Int inverted;
    ::Ice::Int rotated;
    ::Ice::Int saturation;
    ::Ice::Int lineFreq;
    ::std::string name;
    ::std::string driver;
    ::std::string device;
    ::std::string mode;

    bool operator==(const TCamParams&) const;
    bool operator<(const TCamParams&) const;
    bool operator!=(const TCamParams& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const TCamParams& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const TCamParams& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const TCamParams& __rhs) const
    {
        return !operator<(__rhs);
    }

    void __write(::IceInternal::BasicStream*) const;
    void __read(::IceInternal::BasicStream*);
};

typedef ::std::vector< ::Ice::Byte> TImg;

}

namespace RoboCompCameraSimple
{

class CameraSimple : virtual public ::Ice::Object
{
public:

    typedef CameraSimplePrx ProxyType;
    typedef CameraSimplePtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::RoboCompCameraSimple::TImg getYUVImage(const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___getYUVImage(::IceInternal::Incoming&, const ::Ice::Current&);
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

namespace RoboCompCameraSimple
{

class CameraSimple : virtual public ::IceProxy::Ice::Object
{
public:

    ::RoboCompCameraSimple::TImg getYUVImage()
    {
        return getYUVImage(0);
    }
    ::RoboCompCameraSimple::TImg getYUVImage(const ::Ice::Context& __ctx)
    {
        return getYUVImage(&__ctx);
    }
    
private:

    ::RoboCompCameraSimple::TImg getYUVImage(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<CameraSimple> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimple> ice_secure(bool __secure) const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<CameraSimple> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<CameraSimple> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimple> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<CameraSimple> ice_twoway() const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimple> ice_oneway() const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimple> ice_batchOneway() const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimple> ice_datagram() const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimple> ice_batchDatagram() const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimple> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CameraSimple*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
