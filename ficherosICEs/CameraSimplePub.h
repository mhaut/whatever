// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice-E is licensed to you under the terms described in the
// ICEE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice-E version 1.3.0
// Generated from file `CameraSimplePub.ice'

#ifndef __CameraSimplePub_h__
#define __CameraSimplePub_h__

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

namespace RoboCompCameraSimplePub
{

class CameraSimplePub;

}

}

namespace RoboCompCameraSimplePub
{

class CameraSimplePub;
bool operator==(const CameraSimplePub&, const CameraSimplePub&);
bool operator<(const CameraSimplePub&, const CameraSimplePub&);

}

namespace IceInternal
{

::Ice::Object* upCast(::RoboCompCameraSimplePub::CameraSimplePub*);
::IceProxy::Ice::Object* upCast(::IceProxy::RoboCompCameraSimplePub::CameraSimplePub*);

}

namespace RoboCompCameraSimplePub
{

typedef ::IceInternal::Handle< ::RoboCompCameraSimplePub::CameraSimplePub> CameraSimplePubPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::RoboCompCameraSimplePub::CameraSimplePub> CameraSimplePubPrx;

void __read(::IceInternal::BasicStream*, CameraSimplePubPrx&);
void __patch__CameraSimplePubPtr(void*, ::Ice::ObjectPtr&);

}

namespace RoboCompCameraSimplePub
{

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

namespace RoboCompCameraSimplePub
{

class CameraSimplePub : virtual public ::Ice::Object
{
public:

    typedef CameraSimplePubPrx ProxyType;
    typedef CameraSimplePubPtr PointerType;
    

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void putYUVImage(const ::RoboCompCameraSimplePub::TImg&, const ::Ice::Current& = ::Ice::Current()) = 0;
#ifndef ICEE_PURE_CLIENT
    ::Ice::DispatchStatus ___putYUVImage(::IceInternal::Incoming&, const ::Ice::Current&);
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

namespace RoboCompCameraSimplePub
{

class CameraSimplePub : virtual public ::IceProxy::Ice::Object
{
public:

    void putYUVImage(const ::RoboCompCameraSimplePub::TImg& img)
    {
        putYUVImage(img, 0);
    }
    void putYUVImage(const ::RoboCompCameraSimplePub::TImg& img, const ::Ice::Context& __ctx)
    {
        putYUVImage(img, &__ctx);
    }
    
private:

    void putYUVImage(const ::RoboCompCameraSimplePub::TImg&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_secure(bool __secure) const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
#ifdef ICEE_HAS_ROUTER
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
#endif // ICEE_HAS_ROUTER
    
#ifdef ICEE_HAS_LOCATOR
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_adapterId(const std::string& __id) const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
#endif // ICEE_HAS_LOCATOR
    
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_twoway() const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_oneway() const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_batchOneway() const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_datagram() const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_batchDatagram() const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<CameraSimplePub> ice_timeout(int __timeout) const
    {
        return dynamic_cast<CameraSimplePub*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    static const ::std::string& ice_staticId();
    
private:
    
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

#endif
