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

#include "config.h"
#include "JSUIEvent.h"

#include "DOMWindow.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSDictionary.h"
#include "UIEvent.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSUIEventTableValues[] =
{
    { "view", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUIEventView), (intptr_t)0 },
    { "detail", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUIEventDetail), (intptr_t)0 },
    { "keyCode", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUIEventKeyCode), (intptr_t)0 },
    { "charCode", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUIEventCharCode), (intptr_t)0 },
    { "layerX", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUIEventLayerX), (intptr_t)0 },
    { "layerY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUIEventLayerY), (intptr_t)0 },
    { "pageX", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUIEventPageX), (intptr_t)0 },
    { "pageY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUIEventPageY), (intptr_t)0 },
    { "which", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUIEventWhich), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsUIEventConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSUIEventTable = { 34, 31, JSUIEventTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSUIEventConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSUIEventConstructorTable = { 1, 0, JSUIEventConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSUIEventConstructor::constructJSUIEvent(ExecState* exec)
{
    JSUIEventConstructor* jsConstructor = jsCast<JSUIEventConstructor*>(exec->callee());

    ScriptExecutionContext* executionContext = jsConstructor->scriptExecutionContext();
    if (!executionContext)
        return throwVMError(exec, createReferenceError(exec, "Constructor associated execution context is unavailable"));

    AtomicString eventType = exec->argument(0).toString(exec)->value(exec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    UIEventInit eventInit;

    JSValue initializerValue = exec->argument(1);
    if (!initializerValue.isUndefinedOrNull()) {
        // Given the above test, this will always yield an object.
        JSObject* initializerObject = initializerValue.toObject(exec);

        // Create the dictionary wrapper from the initializer object.
        JSDictionary dictionary(exec, initializerObject);

        // Attempt to fill in the EventInit.
        if (!fillUIEventInit(eventInit, dictionary))
            return JSValue::encode(jsUndefined());
    }

    RefPtr<UIEvent> event = UIEvent::create(eventType, eventInit);
    return JSValue::encode(toJS(exec, jsConstructor->globalObject(), event.get()));
}

bool fillUIEventInit(UIEventInit& eventInit, JSDictionary& dictionary)
{
    if (!fillEventInit(eventInit, dictionary))
        return false;

    if (!dictionary.tryGetProperty("view", eventInit.view))
        return false;
    if (!dictionary.tryGetProperty("detail", eventInit.detail))
        return false;
    return true;
}

const ClassInfo JSUIEventConstructor::s_info = { "UIEventConstructor", &Base::s_info, &JSUIEventConstructorTable, 0, CREATE_METHOD_TABLE(JSUIEventConstructor) };

JSUIEventConstructor::JSUIEventConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSUIEventConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSUIEventPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSUIEventConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSUIEventConstructor, JSDOMWrapper>(exec, JSUIEventConstructorTable, jsCast<JSUIEventConstructor*>(object), propertyName, slot);
}

#if ENABLE(DOM4_EVENTS_CONSTRUCTOR)
ConstructType JSUIEventConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSUIEvent;
    return ConstructTypeHost;
}
#endif // ENABLE(DOM4_EVENTS_CONSTRUCTOR)

/* Hash table for prototype */

static const HashTableValue JSUIEventPrototypeTableValues[] =
{
    { "initUIEvent", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsUIEventPrototypeFunctionInitUIEvent), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSUIEventPrototypeTable = { 2, 1, JSUIEventPrototypeTableValues, 0 };
const ClassInfo JSUIEventPrototype::s_info = { "UIEventPrototype", &Base::s_info, &JSUIEventPrototypeTable, 0, CREATE_METHOD_TABLE(JSUIEventPrototype) };

JSObject* JSUIEventPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSUIEvent>(vm, globalObject);
}

bool JSUIEventPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSUIEventPrototype* thisObject = jsCast<JSUIEventPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSUIEventPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSUIEvent::s_info = { "UIEvent", &Base::s_info, &JSUIEventTable, 0 , CREATE_METHOD_TABLE(JSUIEvent) };

JSUIEvent::JSUIEvent(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<UIEvent> impl)
    : JSEvent(structure, globalObject, impl)
{
}

void JSUIEvent::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSUIEvent::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSUIEventPrototype::create(vm, globalObject, JSUIEventPrototype::createStructure(vm, globalObject, JSEventPrototype::self(vm, globalObject)));
}

bool JSUIEvent::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSUIEvent* thisObject = jsCast<JSUIEvent*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSUIEvent, Base>(exec, JSUIEventTable, thisObject, propertyName, slot);
}

EncodedJSValue jsUIEventView(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSUIEvent* castedThis = jsDynamicCast<JSUIEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    UIEvent& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.view()));
    return JSValue::encode(result);
}


EncodedJSValue jsUIEventDetail(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSUIEvent* castedThis = jsDynamicCast<JSUIEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    UIEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.detail());
    return JSValue::encode(result);
}


EncodedJSValue jsUIEventKeyCode(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSUIEvent* castedThis = jsDynamicCast<JSUIEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    UIEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.keyCode());
    return JSValue::encode(result);
}


EncodedJSValue jsUIEventCharCode(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSUIEvent* castedThis = jsDynamicCast<JSUIEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    UIEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.charCode());
    return JSValue::encode(result);
}


EncodedJSValue jsUIEventLayerX(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSUIEvent* castedThis = jsDynamicCast<JSUIEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    UIEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.layerX());
    return JSValue::encode(result);
}


EncodedJSValue jsUIEventLayerY(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSUIEvent* castedThis = jsDynamicCast<JSUIEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    UIEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.layerY());
    return JSValue::encode(result);
}


EncodedJSValue jsUIEventPageX(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSUIEvent* castedThis = jsDynamicCast<JSUIEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    UIEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.pageX());
    return JSValue::encode(result);
}


EncodedJSValue jsUIEventPageY(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSUIEvent* castedThis = jsDynamicCast<JSUIEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    UIEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.pageY());
    return JSValue::encode(result);
}


EncodedJSValue jsUIEventWhich(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSUIEvent* castedThis = jsDynamicCast<JSUIEvent*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    UIEvent& impl = castedThis->impl();
    JSValue result = jsNumber(impl.which());
    return JSValue::encode(result);
}


EncodedJSValue jsUIEventConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSUIEvent* domObject = jsDynamicCast<JSUIEvent*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSUIEvent::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSUIEvent::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSUIEventConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsUIEventPrototypeFunctionInitUIEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSUIEvent* castedThis = jsDynamicCast<JSUIEvent*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSUIEvent::info());
    UIEvent& impl = castedThis->impl();
    const String& type(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool canBubble(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool cancelable(exec->argument(2).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    DOMWindow* view(toDOMWindow(exec->argument(3)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int detail(toInt32(exec, exec->argument(4), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.initUIEvent(type, canBubble, cancelable, view, detail);
    return JSValue::encode(jsUndefined());
}


}