@interface CNGroup : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString externalURI;
@property (nonatomic) NSString externalIdentifier;
@property (nonatomic) NSData externalRepresentation;
@property (nonatomic) NSString externalModificationTag;
@property (nonatomic) NSString externalUUID;
@property (nonatomic) CNGroup snapshot;
@property (nonatomic) NSInteger iOSLegacyIdentifier;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate modificationDate;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
- (id)externalIdentifier;
- (id)init;
- (id)identifier;
- (id)modificationDate;
- (id)initWithName:;
- (id)externalRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithIdentifier:name:;
- (void)encodeWithCoder:;
- (id)externalModificationTag;
- (void).cxx_destruct;
- (id)snapshot;
- (id)description;
- (id)name;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)creationDate;
- (int)iOSLegacyIdentifier;
- (id)initWithGroup:;
- (id)externalURI;
- (id)externalUUID;
- (id)initWithIdentifier:name:creationDate:modificationDate:iOSLegacyIdentifier:;
+ (id)localizedStringForKey:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateForGroupsWithNameMatching:;
+ (id)predicateForGroupsInContainerWithIdentifier:;
+ (id)predicateForGroupWithNameMatching:;
+ (id)predicateForGroupsWithMemberContact:includeAllParentGroups:;
+ (id)identifierProvider;
+ (id)predicateForiOSLegacyIdentifier:;
+ (id)makeIdentifierString;
+ (id)predicateForSubgroupsInGroupWithIdentifier:;
+ (id)predicateForGroupsWithMemberGroup:includeAllParentGroups:;
+ (id)predicateForGroupsWithIdentifiers:;
+ (id)makeIdentifier;
@end
