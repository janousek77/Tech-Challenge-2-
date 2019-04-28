#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// CharacterController2D
struct CharacterController2D_t3553958352;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// CharacterController2D/BoolEvent
struct BoolEvent_t1824838212;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t1693969295;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t978947469;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// FollowPlayer
struct FollowPlayer_t2788059413;
// PlayerMovement
struct PlayerMovement_t2731566919;
// UnityEngine.Animator
struct Animator_t434523843;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t CharacterController2D__ctor_m1594635547_MetadataUsageId;
extern RuntimeClass* UnityEvent_t2581268647_il2cpp_TypeInfo_var;
extern RuntimeClass* BoolEvent_t1824838212_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const uint32_t CharacterController2D_Awake_m1203594283_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Physics2D_t1528932956_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t CharacterController2D_FixedUpdate_m1931902232_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1_Invoke_m1028385814_RuntimeMethod_var;
extern const uint32_t CharacterController2D_Move_m251580498_MetadataUsageId;
extern const RuntimeMethod* UnityEvent_1__ctor_m2675166221_RuntimeMethod_var;
extern const uint32_t BoolEvent__ctor_m3646748481_MetadataUsageId;
extern const uint32_t FollowPlayer_Update_m1580389478_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3556802456;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral1930566815;
extern String_t* _stringLiteral1712993986;
extern String_t* _stringLiteral3128541729;
extern String_t* _stringLiteral607676976;
extern const uint32_t PlayerMovement_Update_m1995258020_MetadataUsageId;
extern const uint32_t PlayerMovement_onLanding_m3504297698_MetadataUsageId;
extern const uint32_t PlayerMovement_onCrouch_m3812906803_MetadataUsageId;

struct Collider2DU5BU5D_t1693969295;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef UNITYEVENT_1_T978947469_H
#define UNITYEVENT_1_T978947469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_t978947469  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t978947469, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T978947469_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef BOOLEVENT_T1824838212_H
#define BOOLEVENT_T1824838212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterController2D/BoolEvent
struct  BoolEvent_t1824838212  : public UnityEvent_1_t978947469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEVENT_T1824838212_H
#ifndef SPACE_T654135784_H
#define SPACE_T654135784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t654135784 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t654135784, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T654135784_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef PLAYERMOVEMENT_T2731566919_H
#define PLAYERMOVEMENT_T2731566919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t2731566919  : public MonoBehaviour_t3962482529
{
public:
	// CharacterController2D PlayerMovement::controller
	CharacterController2D_t3553958352 * ___controller_2;
	// UnityEngine.Animator PlayerMovement::animator
	Animator_t434523843 * ___animator_3;
	// System.Single PlayerMovement::runSpeed
	float ___runSpeed_4;
	// System.Single PlayerMovement::horizontalMove
	float ___horizontalMove_5;
	// System.Boolean PlayerMovement::jump
	bool ___jump_6;
	// System.Boolean PlayerMovement::crouch
	bool ___crouch_7;

public:
	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___controller_2)); }
	inline CharacterController2D_t3553958352 * get_controller_2() const { return ___controller_2; }
	inline CharacterController2D_t3553958352 ** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(CharacterController2D_t3553958352 * value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier((&___controller_2), value);
	}

	inline static int32_t get_offset_of_animator_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___animator_3)); }
	inline Animator_t434523843 * get_animator_3() const { return ___animator_3; }
	inline Animator_t434523843 ** get_address_of_animator_3() { return &___animator_3; }
	inline void set_animator_3(Animator_t434523843 * value)
	{
		___animator_3 = value;
		Il2CppCodeGenWriteBarrier((&___animator_3), value);
	}

	inline static int32_t get_offset_of_runSpeed_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___runSpeed_4)); }
	inline float get_runSpeed_4() const { return ___runSpeed_4; }
	inline float* get_address_of_runSpeed_4() { return &___runSpeed_4; }
	inline void set_runSpeed_4(float value)
	{
		___runSpeed_4 = value;
	}

	inline static int32_t get_offset_of_horizontalMove_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___horizontalMove_5)); }
	inline float get_horizontalMove_5() const { return ___horizontalMove_5; }
	inline float* get_address_of_horizontalMove_5() { return &___horizontalMove_5; }
	inline void set_horizontalMove_5(float value)
	{
		___horizontalMove_5 = value;
	}

	inline static int32_t get_offset_of_jump_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___jump_6)); }
	inline bool get_jump_6() const { return ___jump_6; }
	inline bool* get_address_of_jump_6() { return &___jump_6; }
	inline void set_jump_6(bool value)
	{
		___jump_6 = value;
	}

	inline static int32_t get_offset_of_crouch_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___crouch_7)); }
	inline bool get_crouch_7() const { return ___crouch_7; }
	inline bool* get_address_of_crouch_7() { return &___crouch_7; }
	inline void set_crouch_7(bool value)
	{
		___crouch_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERMOVEMENT_T2731566919_H
#ifndef FOLLOWPLAYER_T2788059413_H
#define FOLLOWPLAYER_T2788059413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowPlayer
struct  FollowPlayer_t2788059413  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform FollowPlayer::target
	Transform_t3600365921 * ___target_2;
	// System.Single FollowPlayer::speed
	float ___speed_3;
	// System.Single FollowPlayer::distance
	float ___distance_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(FollowPlayer_t2788059413, ___target_2)); }
	inline Transform_t3600365921 * get_target_2() const { return ___target_2; }
	inline Transform_t3600365921 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3600365921 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(FollowPlayer_t2788059413, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(FollowPlayer_t2788059413, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWPLAYER_T2788059413_H
#ifndef CHARACTERCONTROLLER2D_T3553958352_H
#define CHARACTERCONTROLLER2D_T3553958352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterController2D
struct  CharacterController2D_t3553958352  : public MonoBehaviour_t3962482529
{
public:
	// System.Single CharacterController2D::m_JumpForce
	float ___m_JumpForce_2;
	// System.Single CharacterController2D::m_CrouchSpeed
	float ___m_CrouchSpeed_3;
	// System.Single CharacterController2D::m_MovementSmoothing
	float ___m_MovementSmoothing_4;
	// System.Boolean CharacterController2D::m_AirControl
	bool ___m_AirControl_5;
	// UnityEngine.LayerMask CharacterController2D::m_WhatIsGround
	LayerMask_t3493934918  ___m_WhatIsGround_6;
	// UnityEngine.Transform CharacterController2D::m_GroundCheck
	Transform_t3600365921 * ___m_GroundCheck_7;
	// UnityEngine.Transform CharacterController2D::m_CeilingCheck
	Transform_t3600365921 * ___m_CeilingCheck_8;
	// UnityEngine.Collider2D CharacterController2D::m_CrouchDisableCollider
	Collider2D_t2806799626 * ___m_CrouchDisableCollider_9;
	// System.Boolean CharacterController2D::m_Grounded
	bool ___m_Grounded_11;
	// UnityEngine.Rigidbody2D CharacterController2D::m_Rigidbody2D
	Rigidbody2D_t939494601 * ___m_Rigidbody2D_13;
	// System.Boolean CharacterController2D::m_FacingRight
	bool ___m_FacingRight_14;
	// UnityEngine.Vector3 CharacterController2D::m_Velocity
	Vector3_t3722313464  ___m_Velocity_15;
	// UnityEngine.Events.UnityEvent CharacterController2D::OnLandEvent
	UnityEvent_t2581268647 * ___OnLandEvent_16;
	// CharacterController2D/BoolEvent CharacterController2D::OnCrouchEvent
	BoolEvent_t1824838212 * ___OnCrouchEvent_17;
	// System.Boolean CharacterController2D::m_wasCrouching
	bool ___m_wasCrouching_18;

public:
	inline static int32_t get_offset_of_m_JumpForce_2() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_JumpForce_2)); }
	inline float get_m_JumpForce_2() const { return ___m_JumpForce_2; }
	inline float* get_address_of_m_JumpForce_2() { return &___m_JumpForce_2; }
	inline void set_m_JumpForce_2(float value)
	{
		___m_JumpForce_2 = value;
	}

	inline static int32_t get_offset_of_m_CrouchSpeed_3() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_CrouchSpeed_3)); }
	inline float get_m_CrouchSpeed_3() const { return ___m_CrouchSpeed_3; }
	inline float* get_address_of_m_CrouchSpeed_3() { return &___m_CrouchSpeed_3; }
	inline void set_m_CrouchSpeed_3(float value)
	{
		___m_CrouchSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_MovementSmoothing_4() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_MovementSmoothing_4)); }
	inline float get_m_MovementSmoothing_4() const { return ___m_MovementSmoothing_4; }
	inline float* get_address_of_m_MovementSmoothing_4() { return &___m_MovementSmoothing_4; }
	inline void set_m_MovementSmoothing_4(float value)
	{
		___m_MovementSmoothing_4 = value;
	}

	inline static int32_t get_offset_of_m_AirControl_5() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_AirControl_5)); }
	inline bool get_m_AirControl_5() const { return ___m_AirControl_5; }
	inline bool* get_address_of_m_AirControl_5() { return &___m_AirControl_5; }
	inline void set_m_AirControl_5(bool value)
	{
		___m_AirControl_5 = value;
	}

	inline static int32_t get_offset_of_m_WhatIsGround_6() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_WhatIsGround_6)); }
	inline LayerMask_t3493934918  get_m_WhatIsGround_6() const { return ___m_WhatIsGround_6; }
	inline LayerMask_t3493934918 * get_address_of_m_WhatIsGround_6() { return &___m_WhatIsGround_6; }
	inline void set_m_WhatIsGround_6(LayerMask_t3493934918  value)
	{
		___m_WhatIsGround_6 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheck_7() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_GroundCheck_7)); }
	inline Transform_t3600365921 * get_m_GroundCheck_7() const { return ___m_GroundCheck_7; }
	inline Transform_t3600365921 ** get_address_of_m_GroundCheck_7() { return &___m_GroundCheck_7; }
	inline void set_m_GroundCheck_7(Transform_t3600365921 * value)
	{
		___m_GroundCheck_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_GroundCheck_7), value);
	}

	inline static int32_t get_offset_of_m_CeilingCheck_8() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_CeilingCheck_8)); }
	inline Transform_t3600365921 * get_m_CeilingCheck_8() const { return ___m_CeilingCheck_8; }
	inline Transform_t3600365921 ** get_address_of_m_CeilingCheck_8() { return &___m_CeilingCheck_8; }
	inline void set_m_CeilingCheck_8(Transform_t3600365921 * value)
	{
		___m_CeilingCheck_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CeilingCheck_8), value);
	}

	inline static int32_t get_offset_of_m_CrouchDisableCollider_9() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_CrouchDisableCollider_9)); }
	inline Collider2D_t2806799626 * get_m_CrouchDisableCollider_9() const { return ___m_CrouchDisableCollider_9; }
	inline Collider2D_t2806799626 ** get_address_of_m_CrouchDisableCollider_9() { return &___m_CrouchDisableCollider_9; }
	inline void set_m_CrouchDisableCollider_9(Collider2D_t2806799626 * value)
	{
		___m_CrouchDisableCollider_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_CrouchDisableCollider_9), value);
	}

	inline static int32_t get_offset_of_m_Grounded_11() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_Grounded_11)); }
	inline bool get_m_Grounded_11() const { return ___m_Grounded_11; }
	inline bool* get_address_of_m_Grounded_11() { return &___m_Grounded_11; }
	inline void set_m_Grounded_11(bool value)
	{
		___m_Grounded_11 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody2D_13() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_Rigidbody2D_13)); }
	inline Rigidbody2D_t939494601 * get_m_Rigidbody2D_13() const { return ___m_Rigidbody2D_13; }
	inline Rigidbody2D_t939494601 ** get_address_of_m_Rigidbody2D_13() { return &___m_Rigidbody2D_13; }
	inline void set_m_Rigidbody2D_13(Rigidbody2D_t939494601 * value)
	{
		___m_Rigidbody2D_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody2D_13), value);
	}

	inline static int32_t get_offset_of_m_FacingRight_14() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_FacingRight_14)); }
	inline bool get_m_FacingRight_14() const { return ___m_FacingRight_14; }
	inline bool* get_address_of_m_FacingRight_14() { return &___m_FacingRight_14; }
	inline void set_m_FacingRight_14(bool value)
	{
		___m_FacingRight_14 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_15() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_Velocity_15)); }
	inline Vector3_t3722313464  get_m_Velocity_15() const { return ___m_Velocity_15; }
	inline Vector3_t3722313464 * get_address_of_m_Velocity_15() { return &___m_Velocity_15; }
	inline void set_m_Velocity_15(Vector3_t3722313464  value)
	{
		___m_Velocity_15 = value;
	}

	inline static int32_t get_offset_of_OnLandEvent_16() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___OnLandEvent_16)); }
	inline UnityEvent_t2581268647 * get_OnLandEvent_16() const { return ___OnLandEvent_16; }
	inline UnityEvent_t2581268647 ** get_address_of_OnLandEvent_16() { return &___OnLandEvent_16; }
	inline void set_OnLandEvent_16(UnityEvent_t2581268647 * value)
	{
		___OnLandEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___OnLandEvent_16), value);
	}

	inline static int32_t get_offset_of_OnCrouchEvent_17() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___OnCrouchEvent_17)); }
	inline BoolEvent_t1824838212 * get_OnCrouchEvent_17() const { return ___OnCrouchEvent_17; }
	inline BoolEvent_t1824838212 ** get_address_of_OnCrouchEvent_17() { return &___OnCrouchEvent_17; }
	inline void set_OnCrouchEvent_17(BoolEvent_t1824838212 * value)
	{
		___OnCrouchEvent_17 = value;
		Il2CppCodeGenWriteBarrier((&___OnCrouchEvent_17), value);
	}

	inline static int32_t get_offset_of_m_wasCrouching_18() { return static_cast<int32_t>(offsetof(CharacterController2D_t3553958352, ___m_wasCrouching_18)); }
	inline bool get_m_wasCrouching_18() const { return ___m_wasCrouching_18; }
	inline bool* get_address_of_m_wasCrouching_18() { return &___m_wasCrouching_18; }
	inline void set_m_wasCrouching_18(bool value)
	{
		___m_wasCrouching_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER2D_T3553958352_H
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t1693969295  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_t2806799626 * m_Items[1];

public:
	inline Collider2D_t2806799626 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_t2806799626 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_t2806799626 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider2D_t2806799626 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_t2806799626 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_t2806799626 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m1028385814_gshared (UnityEvent_1_t978947469 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m2675166221_gshared (UnityEvent_1_t978947469 * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent__ctor_m431206565 (UnityEvent_t2581268647 * __this, const RuntimeMethod* method);
// System.Void CharacterController2D/BoolEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BoolEvent__ctor_m3646748481 (BoolEvent_t1824838212 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C" IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m3296792737 (RuntimeObject * __this /* static, unused */, LayerMask_t3493934918  p0, const RuntimeMethod* method);
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Collider2DU5BU5D_t1693969295* Physics2D_OverlapCircleAll_m638049410 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, int32_t p2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_Invoke_m3065672636 (UnityEvent_t2581268647 * __this, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Collider2D_t2806799626 * Physics2D_OverlapCircle_m2858772865 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, int32_t p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
#define UnityEvent_1_Invoke_m1028385814(__this, p0, method) ((  void (*) (UnityEvent_1_t978947469 *, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m1028385814_gshared)(__this, p0, method)
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Rigidbody2D_get_velocity_m366589732 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_SmoothDamp_m1123559802 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, Vector3_t3722313464 * p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void CharacterController2D::Flip()
extern "C" IL2CPP_METHOD_ATTR void CharacterController2D_Flip_m1798509736 (CharacterController2D_t3553958352 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m1113499586 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
#define UnityEvent_1__ctor_m2675166221(__this, method) ((  void (*) (UnityEvent_1_t978947469 *, const RuntimeMethod*))UnityEvent_1__ctor_m2675166221_gshared)(__this, method)
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_LookAt_m3649447396 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_m1886816857 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, int32_t p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m1810197270 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_m1701463607 (Animator_t434523843 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m2316819917 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m3074252807 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBool_m234840832 (Animator_t434523843 * __this, String_t* p0, bool p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m4007681079 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m3595802076 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void CharacterController2D::Move(System.Single,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CharacterController2D_Move_m251580498 (CharacterController2D_t3553958352 * __this, float ___move0, bool ___crouch1, bool ___jump2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharacterController2D::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CharacterController2D__ctor_m1594635547 (CharacterController2D_t3553958352 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterController2D__ctor_m1594635547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_JumpForce_2((400.0f));
		__this->set_m_CrouchSpeed_3((0.36f));
		__this->set_m_MovementSmoothing_4((0.05f));
		__this->set_m_FacingRight_14((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Velocity_15(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CharacterController2D::Awake()
extern "C" IL2CPP_METHOD_ATTR void CharacterController2D_Awake_m1203594283 (CharacterController2D_t3553958352 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterController2D_Awake_m1203594283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t939494601 * L_0 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_m_Rigidbody2D_13(L_0);
		UnityEvent_t2581268647 * L_1 = __this->get_OnLandEvent_16();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		UnityEvent_t2581268647 * L_2 = (UnityEvent_t2581268647 *)il2cpp_codegen_object_new(UnityEvent_t2581268647_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m431206565(L_2, /*hidden argument*/NULL);
		__this->set_OnLandEvent_16(L_2);
	}

IL_0022:
	{
		BoolEvent_t1824838212 * L_3 = __this->get_OnCrouchEvent_17();
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		BoolEvent_t1824838212 * L_4 = (BoolEvent_t1824838212 *)il2cpp_codegen_object_new(BoolEvent_t1824838212_il2cpp_TypeInfo_var);
		BoolEvent__ctor_m3646748481(L_4, /*hidden argument*/NULL);
		__this->set_OnCrouchEvent_17(L_4);
	}

IL_0038:
	{
		return;
	}
}
// System.Void CharacterController2D::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void CharacterController2D_FixedUpdate_m1931902232 (CharacterController2D_t3553958352 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterController2D_FixedUpdate_m1931902232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Collider2DU5BU5D_t1693969295* V_1 = NULL;
	int32_t V_2 = 0;
	{
		bool L_0 = __this->get_m_Grounded_11();
		V_0 = L_0;
		__this->set_m_Grounded_11((bool)0);
		Transform_t3600365921 * L_1 = __this->get_m_GroundCheck_7();
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_4 = __this->get_m_WhatIsGround_6();
		int32_t L_5 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t1693969295* L_6 = Physics2D_OverlapCircleAll_m638049410(NULL /*static, unused*/, L_3, (0.2f), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		V_2 = 0;
		goto IL_006f;
	}

IL_003b:
	{
		Collider2DU5BU5D_t1693969295* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		Collider2D_t2806799626 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		__this->set_m_Grounded_11((bool)1);
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		UnityEvent_t2581268647 * L_15 = __this->get_OnLandEvent_16();
		UnityEvent_Invoke_m3065672636(L_15, /*hidden argument*/NULL);
	}

IL_006b:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_006f:
	{
		int32_t L_17 = V_2;
		Collider2DU5BU5D_t1693969295* L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Void CharacterController2D::Move(System.Single,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CharacterController2D_Move_m251580498 (CharacterController2D_t3553958352 * __this, float ___move0, bool ___crouch1, bool ___jump2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterController2D_Move_m251580498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = ___crouch1;
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		Transform_t3600365921 * L_1 = __this->get_m_CeilingCheck_8();
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_4 = __this->get_m_WhatIsGround_6();
		int32_t L_5 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		Collider2D_t2806799626 * L_6 = Physics2D_OverlapCircle_m2858772865(NULL /*static, unused*/, L_3, (0.2f), L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		___crouch1 = (bool)1;
	}

IL_0038:
	{
		bool L_8 = __this->get_m_Grounded_11();
		if (L_8)
		{
			goto IL_004e;
		}
	}
	{
		bool L_9 = __this->get_m_AirControl_5();
		if (!L_9)
		{
			goto IL_016d;
		}
	}

IL_004e:
	{
		bool L_10 = ___crouch1;
		if (!L_10)
		{
			goto IL_009e;
		}
	}
	{
		bool L_11 = __this->get_m_wasCrouching_18();
		if (L_11)
		{
			goto IL_0072;
		}
	}
	{
		__this->set_m_wasCrouching_18((bool)1);
		BoolEvent_t1824838212 * L_12 = __this->get_OnCrouchEvent_17();
		UnityEvent_1_Invoke_m1028385814(L_12, (bool)1, /*hidden argument*/UnityEvent_1_Invoke_m1028385814_RuntimeMethod_var);
	}

IL_0072:
	{
		float L_13 = ___move0;
		float L_14 = __this->get_m_CrouchSpeed_3();
		___move0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14));
		Collider2D_t2806799626 * L_15 = __this->get_m_CrouchDisableCollider_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		Collider2D_t2806799626 * L_17 = __this->get_m_CrouchDisableCollider_9();
		Behaviour_set_enabled_m20417929(L_17, (bool)0, /*hidden argument*/NULL);
	}

IL_0099:
	{
		goto IL_00d9;
	}

IL_009e:
	{
		Collider2D_t2806799626 * L_18 = __this->get_m_CrouchDisableCollider_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_18, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00bb;
		}
	}
	{
		Collider2D_t2806799626 * L_20 = __this->get_m_CrouchDisableCollider_9();
		Behaviour_set_enabled_m20417929(L_20, (bool)1, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		bool L_21 = __this->get_m_wasCrouching_18();
		if (!L_21)
		{
			goto IL_00d9;
		}
	}
	{
		__this->set_m_wasCrouching_18((bool)0);
		BoolEvent_t1824838212 * L_22 = __this->get_OnCrouchEvent_17();
		UnityEvent_1_Invoke_m1028385814(L_22, (bool)0, /*hidden argument*/UnityEvent_1_Invoke_m1028385814_RuntimeMethod_var);
	}

IL_00d9:
	{
		float L_23 = ___move0;
		Rigidbody2D_t939494601 * L_24 = __this->get_m_Rigidbody2D_13();
		Vector2_t2156229523  L_25 = Rigidbody2D_get_velocity_m366589732(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		float L_26 = (&V_1)->get_y_1();
		Vector2_t2156229523  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector2__ctor_m3970636864((&L_27), ((float)il2cpp_codegen_multiply((float)L_23, (float)(10.0f))), L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_28 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		Rigidbody2D_t939494601 * L_29 = __this->get_m_Rigidbody2D_13();
		Rigidbody2D_t939494601 * L_30 = __this->get_m_Rigidbody2D_13();
		Vector2_t2156229523  L_31 = Rigidbody2D_get_velocity_m366589732(L_30, /*hidden argument*/NULL);
		Vector3_t3722313464  L_32 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		Vector3_t3722313464  L_33 = V_0;
		Vector3_t3722313464 * L_34 = __this->get_address_of_m_Velocity_15();
		float L_35 = __this->get_m_MovementSmoothing_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_36 = Vector3_SmoothDamp_m1123559802(NULL /*static, unused*/, L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		Vector2_t2156229523  L_37 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_29, L_37, /*hidden argument*/NULL);
		float L_38 = ___move0;
		if ((!(((float)L_38) > ((float)(0.0f)))))
		{
			goto IL_0151;
		}
	}
	{
		bool L_39 = __this->get_m_FacingRight_14();
		if (L_39)
		{
			goto IL_0151;
		}
	}
	{
		CharacterController2D_Flip_m1798509736(__this, /*hidden argument*/NULL);
		goto IL_016d;
	}

IL_0151:
	{
		float L_40 = ___move0;
		if ((!(((float)L_40) < ((float)(0.0f)))))
		{
			goto IL_016d;
		}
	}
	{
		bool L_41 = __this->get_m_FacingRight_14();
		if (!L_41)
		{
			goto IL_016d;
		}
	}
	{
		CharacterController2D_Flip_m1798509736(__this, /*hidden argument*/NULL);
	}

IL_016d:
	{
		bool L_42 = __this->get_m_Grounded_11();
		if (!L_42)
		{
			goto IL_01a0;
		}
	}
	{
		bool L_43 = ___jump2;
		if (!L_43)
		{
			goto IL_01a0;
		}
	}
	{
		__this->set_m_Grounded_11((bool)0);
		Rigidbody2D_t939494601 * L_44 = __this->get_m_Rigidbody2D_13();
		float L_45 = __this->get_m_JumpForce_2();
		Vector2_t2156229523  L_46;
		memset(&L_46, 0, sizeof(L_46));
		Vector2__ctor_m3970636864((&L_46), (0.0f), L_45, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_m1113499586(L_44, L_46, /*hidden argument*/NULL);
	}

IL_01a0:
	{
		return;
	}
}
// System.Void CharacterController2D::Flip()
extern "C" IL2CPP_METHOD_ATTR void CharacterController2D_Flip_m1798509736 (CharacterController2D_t3553958352 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_m_FacingRight_14();
		__this->set_m_FacingRight_14((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_localScale_m129152068(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t3722313464 * L_3 = (&V_0);
		float L_4 = L_3->get_x_1();
		L_3->set_x_1(((float)il2cpp_codegen_multiply((float)L_4, (float)(-1.0f))));
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = V_0;
		Transform_set_localScale_m3053443106(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharacterController2D/BoolEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BoolEvent__ctor_m3646748481 (BoolEvent_t1824838212 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoolEvent__ctor_m3646748481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m2675166221(__this, /*hidden argument*/UnityEvent_1__ctor_m2675166221_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FollowPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FollowPlayer__ctor_m1808261062 (FollowPlayer_t2788059413 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_3((3.0f));
		__this->set_distance_4((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FollowPlayer::Start()
extern "C" IL2CPP_METHOD_ATTR void FollowPlayer_Start_m1219397192 (FollowPlayer_t2788059413 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void FollowPlayer::Update()
extern "C" IL2CPP_METHOD_ATTR void FollowPlayer_Update_m1580389478 (FollowPlayer_t2788059413 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FollowPlayer_Update_m1580389478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = __this->get_target_2();
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Transform_LookAt_m3649447396(L_0, L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m3353183577((&L_4), (0.0f), (-90.0f), (0.0f), /*hidden argument*/NULL);
		Transform_Rotate_m1886816857(L_3, L_4, 1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		Transform_t3600365921 * L_7 = __this->get_target_2();
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_9 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_distance_4();
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_0082;
		}
	}
	{
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_12 = __this->get_speed_3();
		float L_13 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), ((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_Translate_m1810197270(L_11, L_14, /*hidden argument*/NULL);
	}

IL_0082:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerMovement__ctor_m3994561284 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	{
		__this->set_runSpeed_4((40.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::Update()
extern "C" IL2CPP_METHOD_ATTR void PlayerMovement_Update_m1995258020 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Update_m1995258020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = __this->get_animator_3();
		float L_1 = __this->get_horizontalMove_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		Animator_SetFloat_m1701463607(L_0, _stringLiteral3556802456, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_3 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		float L_4 = __this->get_runSpeed_4();
		__this->set_horizontalMove_5(((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)));
		bool L_5 = Input_GetButtonDown_m3074252807(NULL /*static, unused*/, _stringLiteral1930566815, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		Animator_t434523843 * L_6 = __this->get_animator_3();
		Animator_SetBool_m234840832(L_6, _stringLiteral1712993986, (bool)1, /*hidden argument*/NULL);
		__this->set_jump_6((bool)1);
	}

IL_0059:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetButtonDown_m3074252807(NULL /*static, unused*/, _stringLiteral3128541729, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0085;
		}
	}
	{
		Animator_t434523843 * L_8 = __this->get_animator_3();
		Animator_SetBool_m234840832(L_8, _stringLiteral607676976, (bool)1, /*hidden argument*/NULL);
		__this->set_crouch_7((bool)1);
		goto IL_009b;
	}

IL_0085:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetButtonUp_m4007681079(NULL /*static, unused*/, _stringLiteral3128541729, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_009b;
		}
	}
	{
		__this->set_crouch_7((bool)0);
	}

IL_009b:
	{
		return;
	}
}
// System.Void PlayerMovement::onLanding()
extern "C" IL2CPP_METHOD_ATTR void PlayerMovement_onLanding_m3504297698 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_onLanding_m3504297698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = __this->get_animator_3();
		Animator_SetBool_m234840832(L_0, _stringLiteral1712993986, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::onCrouch(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PlayerMovement_onCrouch_m3812906803 (PlayerMovement_t2731566919 * __this, bool ___isCrouching0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_onCrouch_m3812906803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = __this->get_animator_3();
		bool L_1 = ___isCrouching0;
		Animator_SetBool_m234840832(L_0, _stringLiteral607676976, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void PlayerMovement_FixedUpdate_m2788581829 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	{
		CharacterController2D_t3553958352 * L_0 = __this->get_controller_2();
		float L_1 = __this->get_horizontalMove_5();
		float L_2 = Time_get_fixedDeltaTime_m3595802076(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = __this->get_crouch_7();
		bool L_4 = __this->get_jump_6();
		CharacterController2D_Move_m251580498(L_0, ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), L_3, L_4, /*hidden argument*/NULL);
		__this->set_jump_6((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
