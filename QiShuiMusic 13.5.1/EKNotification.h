@interface EKNotification : EKObject
@property (nonatomic) EKObjectID objectID;
@property (nonatomic) NSString externalID;
@property (nonatomic) NSString externalModificationTag;
@property (nonatomic) NSString UUID;
@property (nonatomic) NSURL hostURL;
- (id)objectID;
- (id)calendar;
- (id)externalID;
- (void)setUUID:;
- (BOOL)save:;
- (void)setExternalID:;
- (id)externalModificationTag;
- (void)setExternalModificationTag:;
- (id)UUID;
- (id)hostURL;
- (void)setHostURL:;
+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;
@end
