@interface EKPersistentSharee : EKPersistentObject
- (void)setLastName:;
- (id)externalID;
- (void)setFirstName:;
- (void)setUUID:;
- (void)setOwner:;
- (id)firstName;
- (void)setAddress:;
- (id)owner;
- (id)lastName;
- (void)setDisplayName:;
- (id)displayName;
- (void)setExternalID:;
- (int)entityType;
- (id)description;
- (id)address;
- (id)UUID;
- (id)copyWithZone:;
- (int)shareeStatusRaw;
- (void)setShareeStatusRaw:;
- (int)shareeAccessLevelRaw;
- (void)setShareeAccessLevelRaw:;
- (BOOL)shareeMuteRemoval;
- (void)setShareeMuteRemoval:;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
@end
