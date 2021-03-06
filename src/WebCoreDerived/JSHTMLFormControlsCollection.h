/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSHTMLFormControlsCollection_h
#define JSHTMLFormControlsCollection_h

#include "HTMLFormControlsCollection.h"
#include "JSDOMBinding.h"
#include "JSHTMLCollection.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLFormControlsCollection : public JSHTMLCollection {
public:
    typedef JSHTMLCollection Base;
    static JSHTMLFormControlsCollection* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLFormControlsCollection> impl)
    {
        JSHTMLFormControlsCollection* ptr = new (NotNull, JSC::allocateCell<JSHTMLFormControlsCollection>(globalObject->vm().heap)) JSHTMLFormControlsCollection(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertySlotByIndex(JSC::JSObject*, JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static void getOwnPropertyNames(JSC::JSObject*, JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode mode = JSC::ExcludeDontEnumProperties);
    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);

    // Custom functions
    JSC::JSValue namedItem(JSC::ExecState*);
    HTMLFormControlsCollection& impl() const
    {
        return static_cast<HTMLFormControlsCollection&>(Base::impl());
    }
protected:
    JSHTMLFormControlsCollection(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLFormControlsCollection>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetPropertyNames | JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::HasImpureGetOwnPropertySlot | Base::StructureFlags;
    static JSC::EncodedJSValue indexGetter(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, unsigned);
private:
    static bool canGetItemsForName(JSC::ExecState*, HTMLFormControlsCollection*, JSC::PropertyName);
    static JSC::EncodedJSValue nameGetter(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
};

class JSHTMLFormControlsCollectionOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, HTMLFormControlsCollection*)
{
    DEFINE_STATIC_LOCAL(JSHTMLFormControlsCollectionOwner, jsHTMLFormControlsCollectionOwner, ());
    return &jsHTMLFormControlsCollectionOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, HTMLFormControlsCollection*)
{
    return &world;
}


class JSHTMLFormControlsCollectionPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSHTMLFormControlsCollectionPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLFormControlsCollectionPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLFormControlsCollectionPrototype>(vm.heap)) JSHTMLFormControlsCollectionPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSHTMLFormControlsCollectionPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLFormControlsCollectionConstructor : public DOMConstructorObject {
private:
    JSHTMLFormControlsCollectionConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLFormControlsCollectionConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLFormControlsCollectionConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLFormControlsCollectionConstructor>(vm.heap)) JSHTMLFormControlsCollectionConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLFormControlsCollectionPrototypeFunctionNamedItem(JSC::ExecState*);
// Attributes

JSC::EncodedJSValue jsHTMLFormControlsCollectionConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);

} // namespace WebCore

#endif
