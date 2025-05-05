@interface EKInviteeAlternativeTime : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSArray conflictedParticipants;
- (id)startDate;
- (void)setStartDate:;
- (void)setEndDate:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStartDate:endDate:conflictedParticipants:;
- (id)conflictedParticipants;
- (void)setConflictedParticipants:;
@end
