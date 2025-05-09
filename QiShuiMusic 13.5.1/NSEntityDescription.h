@interface NSEntityDescription : NSObject
@property (nonatomic) NSEntityDescription ph_baseEntity;
@property (nonatomic) NSAttributeDescription referenceValueAttribute;
@property (nonatomic) NSManagedObjectModel managedObjectModel;
@property (nonatomic) NSString managedObjectClassName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL abstract;
@property (nonatomic) NSDictionary subentitiesByName;
@property (nonatomic) NSArray subentities;
@property (nonatomic) NSEntityDescription superentity;
@property (nonatomic) NSDictionary propertiesByName;
@property (nonatomic) NSArray properties;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSDictionary attributesByName;
@property (nonatomic) NSDictionary relationshipsByName;
@property (nonatomic) NSData versionHash;
@property (nonatomic) NSString versionHashModifier;
@property (nonatomic) NSString renamingIdentifier;
@property (nonatomic) NSArray indexes;
@property (nonatomic) NSArray uniquenessConstraints;
@property (nonatomic) NSArray compoundIndexes;
@property (nonatomic) NSExpression coreSpotlightDisplayNameExpression;
- (id)ph_baseEntity;
- (id)ph_relationshipDescriptionsForKeyPath:;
- (void)vs_setUserInfoValue:forKey:;
- (id)vs_referenceValueAttribute;
- (void)vs_setReferenceValueAttribute:;
- (void)setRenamingIdentifier:;
- (id)elementID;
- (void)setElementID:;
- (void)_throwIfNotEditable;
- (void)_stripForMigration;
- (id)_initWithName:;
- (BOOL)_isSchemaEqual:;
- (id)renamingIdentifier;
- (BOOL)_skipValidation;
- (id)versionHash;
- (BOOL)_isEditable;
- (id)init;
- (id)managedObjectModel;
- (void)dealloc;
- (void)setName:;
- (void)_restoreValidation;
- (id)userInfo;
- (void)setProperties:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (void)setVersionHashModifier:;
- (BOOL)_isDeallocating;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)_createCachesAndOptimizeState;
- (id)release;
- (void)encodeWithCoder:;
- (id)indexes;
- (id)retain;
- (BOOL)_tryRetain;
- (void)setUserInfo:;
- (id)properties;
- (id)description;
- (id)name;
- (unsigned long long)retainCount;
- (void)_writeIntoData:propertiesDict:uniquedPropertyNames:uniquedStrings:uniquedData:uniquedMappings:entities:;
- (BOOL)isEqual:;
- (id)versionHashModifier;
- (id)copyWithZone:;
- (id)attributeKeys;
- (id)managedObjectClassName;
- (id)attributesByName;
- (id)relationshipsByName;
- (BOOL)isAbstract;
- (BOOL)isKindOfEntity:;
- (id)superentity;
- (id)subentities;
- (void)setSubentities:;
- (id)subentitiesByName;
- (id)relationshipsWithDestinationEntity:;
- (id)propertiesByName;
- (id)coreSpotlightDisplayNameExpression;
- (void)setCoreSpotlightDisplayNameExpression:;
- (void)setManagedObjectClassName:;
- (void)setAbstract:;
- (void)setIndexes:;
- (id)compoundIndexes;
- (void)setCompoundIndexes:;
- (id)uniquenessConstraints;
- (void)setUniquenessConstraints:;
- (id)keypathsToPrefetchForDeletePropagation;
- (void)_addSubentity:;
- (void)_addProperty:;
- (void)_addFactoryToRetainList:;
- (id)_uniquenessConstraintsAsFetchIndexes;
- (id)_propertyWithRenamingIdentifier:;
- (id)_newMappingForPropertiesOfRange:;
- (id)toManyRelationshipKeys;
- (id)toOneRelationshipKeys;
- (id)inverseForRelationshipKey:;
- (id)_localRelationshipNamed:;
- (void)_setIsEditable:;
- (BOOL)_subentitiesIncludes:;
- (id)_propertySearchMapping;
- (id)_propertyRangesByType;
- (unsigned long long)_offsetRelationshipIndex:fromSuperEntity:andIsToMany:;
- (id)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:;
- (id)_leopardStyleRelationshipsByName;
- (id)_leopardStyleAttributesByName;
- (void)_flattenProperties;
+ (id)vs_subscriptionEntityForVersion:;
+ (BOOL)supportsSecureCoding;
+ (id)insertNewObjectForEntityForName:inManagedObjectContext:;
+ (id)entityForName:inManagedObjectContext:;
+ (id)_MOClassName;
@end
