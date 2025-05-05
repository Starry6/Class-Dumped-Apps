@interface SiriAnalyticsLogicalClockStatistics : NSObject
@property (nonatomic) Q startedOn;
@property (nonatomic) Q endedOn;
@property (nonatomic) Q lastMessageEmittedOn;
@property (nonatomic) Q messagesEmitted;
@property (nonatomic) Q clockAgeInNanoseconds;
@property (nonatomic) Q utilizationLifetimeInNanoseconds;
- (unsigned long long)clockAgeInNanoseconds;
- (unsigned long long)utilizationLifetimeInNanoseconds;
- (void)noteMessageEmitted;
- (unsigned long long)startedOn;
- (void)setStartedOn:;
- (unsigned long long)endedOn;
- (void)setEndedOn:;
- (unsigned long long)lastMessageEmittedOn;
- (void)setLastMessageEmittedOn:;
- (unsigned long long)messagesEmitted;
- (void)setMessagesEmitted:;
@end
