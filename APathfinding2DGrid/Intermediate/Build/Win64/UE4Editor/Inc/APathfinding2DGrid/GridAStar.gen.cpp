// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "APathfinding2DGrid/GridAStar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridAStar() {}
// Cross Module References
	APATHFINDING2DGRID_API UScriptStruct* Z_Construct_UScriptStruct_FMvNode();
	UPackage* Z_Construct_UPackage__Script_APathfinding2DGrid();
	APATHFINDING2DGRID_API UClass* Z_Construct_UClass_AGridAStar_NoRegister();
	APATHFINDING2DGRID_API UClass* Z_Construct_UClass_AGridAStar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FMvNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern APATHFINDING2DGRID_API uint32 Get_Z_Construct_UScriptStruct_FMvNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMvNode, Z_Construct_UPackage__Script_APathfinding2DGrid(), TEXT("MvNode"), sizeof(FMvNode), Get_Z_Construct_UScriptStruct_FMvNode_Hash());
	}
	return Singleton;
}
template<> APATHFINDING2DGRID_API UScriptStruct* StaticStruct<FMvNode>()
{
	return FMvNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMvNode(FMvNode::StaticStruct, TEXT("/Script/APathfinding2DGrid"), TEXT("MvNode"), false, nullptr, nullptr);
static struct FScriptStruct_APathfinding2DGrid_StaticRegisterNativesFMvNode
{
	FScriptStruct_APathfinding2DGrid_StaticRegisterNativesFMvNode()
	{
		UScriptStruct::DeferCppStructOps<FMvNode>(FName(TEXT("MvNode")));
	}
} ScriptStruct_APathfinding2DGrid_StaticRegisterNativesFMvNode;
	struct Z_Construct_UScriptStruct_FMvNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMvNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// MvTask: Remake A*\n" },
		{ "ModuleRelativePath", "GridAStar.h" },
		{ "ToolTip", "MvTask: Remake A*" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMvNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMvNode>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMvNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_APathfinding2DGrid,
		nullptr,
		&NewStructOps,
		"MvNode",
		sizeof(FMvNode),
		alignof(FMvNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMvNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMvNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMvNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMvNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_APathfinding2DGrid();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MvNode"), sizeof(FMvNode), Get_Z_Construct_UScriptStruct_FMvNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMvNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMvNode_Hash() { return 2334208184U; }
	DEFINE_FUNCTION(AGridAStar::execSolve_AStar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Solve_AStar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridAStar::execGetNeighbors)
	{
		P_GET_STRUCT_REF(FMvNode,Z_Param_Out_currentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMvNode>*)Z_Param__Result=P_THIS->GetNeighbors(Z_Param_Out_currentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridAStar::execOnUserUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnUserUpdate(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridAStar::execOnUserCreate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnUserCreate();
		P_NATIVE_END;
	}
	void AGridAStar::StaticRegisterNativesAGridAStar()
	{
		UClass* Class = AGridAStar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNeighbors", &AGridAStar::execGetNeighbors },
			{ "OnUserCreate", &AGridAStar::execOnUserCreate },
			{ "OnUserUpdate", &AGridAStar::execOnUserUpdate },
			{ "Solve_AStar", &AGridAStar::execSolve_AStar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics
	{
		struct GridAStar_eventGetNeighbors_Parms
		{
			FMvNode currentNode;
			TArray<FMvNode> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentNode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::NewProp_currentNode = { "currentNode", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridAStar_eventGetNeighbors_Parms, currentNode), Z_Construct_UScriptStruct_FMvNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMvNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridAStar_eventGetNeighbors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::NewProp_currentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridAStar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridAStar, nullptr, "GetNeighbors", nullptr, nullptr, sizeof(GridAStar_eventGetNeighbors_Parms), Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridAStar_GetNeighbors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridAStar_GetNeighbors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics
	{
		struct GridAStar_eventOnUserCreate_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridAStar_eventOnUserCreate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridAStar_eventOnUserCreate_Parms), &Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridAStar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridAStar, nullptr, "OnUserCreate", nullptr, nullptr, sizeof(GridAStar_eventOnUserCreate_Parms), Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridAStar_OnUserCreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridAStar_OnUserCreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics
	{
		struct GridAStar_eventOnUserUpdate_Parms
		{
			float DeltaTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GridAStar_eventOnUserUpdate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridAStar_eventOnUserUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GridAStar_eventOnUserUpdate_Parms), &Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridAStar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridAStar, nullptr, "OnUserUpdate", nullptr, nullptr, sizeof(GridAStar_eventOnUserUpdate_Parms), Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridAStar_OnUserUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridAStar_OnUserUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridAStar_Solve_AStar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridAStar_Solve_AStar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridAStar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridAStar_Solve_AStar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridAStar, nullptr, "Solve_AStar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridAStar_Solve_AStar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridAStar_Solve_AStar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridAStar_Solve_AStar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGridAStar_Solve_AStar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGridAStar_NoRegister()
	{
		return AGridAStar::StaticClass();
	}
	struct Z_Construct_UClass_AGridAStar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridAStar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_APathfinding2DGrid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridAStar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridAStar_GetNeighbors, "GetNeighbors" }, // 3523091795
		{ &Z_Construct_UFunction_AGridAStar_OnUserCreate, "OnUserCreate" }, // 373916012
		{ &Z_Construct_UFunction_AGridAStar_OnUserUpdate, "OnUserUpdate" }, // 4113207153
		{ &Z_Construct_UFunction_AGridAStar_Solve_AStar, "Solve_AStar" }, // 2457128972
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridAStar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridAStar.h" },
		{ "ModuleRelativePath", "GridAStar.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridAStar_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMvNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridAStar_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "GridAStar.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridAStar_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGridAStar, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGridAStar_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridAStar_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridAStar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridAStar_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridAStar_Statics::NewProp_Nodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridAStar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridAStar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGridAStar_Statics::ClassParams = {
		&AGridAStar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGridAStar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridAStar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridAStar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridAStar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridAStar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGridAStar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGridAStar, 3339352243);
	template<> APATHFINDING2DGRID_API UClass* StaticClass<AGridAStar>()
	{
		return AGridAStar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGridAStar(Z_Construct_UClass_AGridAStar, &AGridAStar::StaticClass, TEXT("/Script/APathfinding2DGrid"), TEXT("AGridAStar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridAStar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
