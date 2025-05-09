@interface NSRelationshipDescription : NSPropertyDescription
@property (nonatomic) NSEntityDescription destinationEntity;
@property (nonatomic) NSRelationshipDescription inverseRelationship;
@property (nonatomic) Q maxCount;
@property (nonatomic) Q minCount;
@property (nonatomic) Q deleteRule;
@property (nonatomic) BOOL toMany;
@property (nonatomic) NSData versionHash;
@property (nonatomic) BOOL ordered;
- (unsigned long long)_propertyType;
- (BOOL)isIndexed;
- (id)_initWithName:;
- (BOOL)_isSchemaEqual:;
- (BOOL)_isRelationship;
- (id)versionHash;
- (void)setMinCount:;
- (void)setOrdered:;
- (unsigned long long)minCount;
- (id)init;
- (id)inverseRelationship;
- (BOOL)isOrdered;
- (void)dealloc;
- (unsigned long long)maxCount;
- (void)setMaxCount:;
- (void)_versionHash:inStyle:proxyContext:;
- (void)_writeIntoData:propertiesDict:uniquedPropertyNames:uniquedStrings:uniquedData:entitiesSlots:fetchRequests:;
- (BOOL)_isToManyRelationship;
- (id)initWithCoder:;
- (unsigned long long)deleteRule;
- (void)_createCachesAndOptimizeState;
- (void)setDeleteRule:;
- (void)encodeWithCoder:;
- (BOOL)_nonPredicateValidateValue:forKey:inObject:error:;
- (void)setDestinationEntity:;
- (void)setInverseRelationship:;
- (id)description;
- (BOOL)isToMany;
- (id)destinationEntity;
- (void)_versionHash:inStyle:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
