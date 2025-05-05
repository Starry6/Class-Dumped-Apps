@interface EKEventAction : EKObject
@property (nonatomic) NSString externalID;
@property (nonatomic) NSString externalFolderID;
@property (nonatomic) NSString externalScheduleID;
@property (nonatomic) NSString externalModificationTag;
@property (nonatomic) NSData externalRepresentation;
- (id)externalID;
- (id)externalRepresentation;
- (void)setExternalID:;
- (id)externalModificationTag;
- (void)setExternalModificationTag:;
- (void)setExternalRepresentation:;
- (id)externalFolderID;
- (void)setExternalFolderID:;
- (id)externalScheduleID;
- (void)setExternalScheduleID:;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
@end
