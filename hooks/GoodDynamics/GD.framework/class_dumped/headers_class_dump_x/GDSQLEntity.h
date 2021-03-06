/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@class NSArray, NSDictionary, NSEntityDescription, NSMutableArray, NSMutableDictionary, NSString;

@interface GDSQLEntity : _CATransform3DMakeScale
{
    NSString *_name;
    NSString *_tableName;
    NSEntityDescription *_entityDescription;
    NSMutableArray *_properties;
    NSDictionary *_propertiesByName;
    NSArray *_nonTransientProperties;
    GDSQLEntity *_rootEntity;
    NSMutableArray *_subEntities;
    GDSQLEntity *_parentEntity;
    long long _primaryKey;
    long long _maxPrimaryKey;
    NSMutableDictionary *_transientCache;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_sqlCache;
}

+ (id)propertiesToFetch:(id)fp8;
- (id)SQLfetchToOneRelationship:(id)fp8 destinationEntity:(id)fp12 storeDescriptor:(id)fp16 attributes:(id)fp20;
- (void)clearTransientCache;
- (void)moveTransientsToCache;
- (id)cachedObjectWithPrimaryKey:(long long)fp8;
- (void)removeCacheObjectWithPrimaryKey:(long long)fp8;
- (void)addCacheObjectIfNotPresent:(id)fp8;
- (void)addCacheObject:(id)fp8;
- (void)addTransientCacheObject:(id)fp8;
- (void)setRootEntity:(id)fp8;
- (void)setParentEntity:(id)fp8;
- (void)expandWithEntity:(id)fp8;
- (void)updateSubEntities:(id)fp8 property:(id)fp12;
- (BOOL)isPropertyDefinedInSuperEntities:(id)fp8;
- (id)entityOwner:(id)fp8;
- (BOOL)isEntity:(id)fp8 containedInInheritanceLineOfEntity:(id)fp12;
- (void)addChildEntity:(id)fp8;
- (id)parentEntity;
- (id)subEntities;
- (id)rootEntity;
- (id)nonTransientPropertiesDescription;
- (id)propertyByName:(id)fp8;
- (id)propertiesByName;
- (id)properties;
- (void)setPrimaryKey:(long long)fp8;
- (void)setMaximumPrimaryKey:(long long)fp8;
- (long long)maxChildrenPrimaryKey;
- (long long)primaryKey;
- (long long)maxPrimaryKey;
- (id)entityDescription;
- (id)tableName;
- (id)name;
- (void)dealloc;
- (id)initWithEntityDescription:(id)fp8;

@end

