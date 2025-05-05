@interface EKPersistentOrganizer : EKPersistentParticipant
@property (nonatomic) NSString displayNameRaw;
@property (nonatomic) NSString emailAddress;
@property (nonatomic) NSString URLString;
@property (nonatomic) BOOL isCurrentUser;
- (void)setOwner:;
- (id)owner;
- (int)entityType;
- (id)description;
- (id)copyWithZone:;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:;
- (long long)scheduleAgent;
- (void)setScheduleAgent:;
- (id)initWithName:emailAddress:address:isCurrentUser:;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)organizerWithName:emailAddress:address:isCurrentUser:;
@end
