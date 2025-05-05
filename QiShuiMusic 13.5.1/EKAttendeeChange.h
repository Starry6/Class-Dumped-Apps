@interface EKAttendeeChange : EKParticipantChange
@property (nonatomic) EKObjectID ownerID;
@property (nonatomic) BOOL attendeeRole;
@property (nonatomic) BOOL attendeeStatus;
@property (nonatomic) NSString attendeeEmailAddress;
- (void).cxx_destruct;
- (id)ownerID;
- (id)initWithChangeProperties:;
- (BOOL)attendeeRole;
- (BOOL)attendeeStatus;
- (id)attendeeEmailAddress;
+ (int)entityType;
@end
