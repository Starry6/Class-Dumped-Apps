@interface EKOrganizer : EKParticipant
@property (nonatomic) q scheduleAgent;
- (void)setCurrentUser:;
- (id)owner;
- (id)description;
- (id)copyWithZone:;
- (BOOL)isCurrentUser;
- (long long)participantType;
- (long long)participantRole;
- (long long)participantStatus;
- (long long)scheduleAgent;
- (void)setScheduleAgent:;
- (id)initWithName:emailAddress:phoneNumber:address:isCurrentUser:;
+ (Class)frozenClass;
+ (id)organizerWithName:emailAddress:phoneNumber:address:isCurrentUser:;
@end
