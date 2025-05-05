@interface EKInviteeTimeSpan : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSMutableArray conflictedParticipants;
- (id)startDate;
- (id)init;
- (void)setStartDate:;
- (void)setEndDate:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)conflictedParticipants;
- (void)setConflictedParticipants:;
@end
