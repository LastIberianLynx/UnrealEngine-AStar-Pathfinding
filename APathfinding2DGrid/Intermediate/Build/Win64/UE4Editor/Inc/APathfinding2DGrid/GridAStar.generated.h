// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMvNode;
#ifdef APATHFINDING2DGRID_GridAStar_generated_h
#error "GridAStar.generated.h already included, missing '#pragma once' in GridAStar.h"
#endif
#define APATHFINDING2DGRID_GridAStar_generated_h

#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMvNode_Statics; \
	APATHFINDING2DGRID_API static class UScriptStruct* StaticStruct();


template<> APATHFINDING2DGRID_API UScriptStruct* StaticStruct<struct FMvNode>();

#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_SPARSE_DATA
#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSolve_AStar); \
	DECLARE_FUNCTION(execGetNeighbors); \
	DECLARE_FUNCTION(execOnUserUpdate); \
	DECLARE_FUNCTION(execOnUserCreate);


#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSolve_AStar); \
	DECLARE_FUNCTION(execGetNeighbors); \
	DECLARE_FUNCTION(execOnUserUpdate); \
	DECLARE_FUNCTION(execOnUserCreate);


#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridAStar(); \
	friend struct Z_Construct_UClass_AGridAStar_Statics; \
public: \
	DECLARE_CLASS(AGridAStar, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/APathfinding2DGrid"), NO_API) \
	DECLARE_SERIALIZER(AGridAStar)


#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAGridAStar(); \
	friend struct Z_Construct_UClass_AGridAStar_Statics; \
public: \
	DECLARE_CLASS(AGridAStar, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/APathfinding2DGrid"), NO_API) \
	DECLARE_SERIALIZER(AGridAStar)


#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGridAStar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGridAStar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridAStar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridAStar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridAStar(AGridAStar&&); \
	NO_API AGridAStar(const AGridAStar&); \
public:


#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridAStar(AGridAStar&&); \
	NO_API AGridAStar(const AGridAStar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridAStar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridAStar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridAStar)


#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_PRIVATE_PROPERTY_OFFSET
#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_28_PROLOG
#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_PRIVATE_PROPERTY_OFFSET \
	APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_SPARSE_DATA \
	APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_RPC_WRAPPERS \
	APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_INCLASS \
	APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_PRIVATE_PROPERTY_OFFSET \
	APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_SPARSE_DATA \
	APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_INCLASS_NO_PURE_DECLS \
	APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APATHFINDING2DGRID_API UClass* StaticClass<class AGridAStar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID APathfinding2DGrid_Source_APathfinding2DGrid_GridAStar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
