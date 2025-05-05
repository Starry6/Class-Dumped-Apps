@interface MDMPowerAssertion : DMCPowerAssertion
@property (nonatomic) NSDate creationDate;
@property (nonatomic) UMUserSwitchBlockingTask blockingTask;
- (void)dealloc;
- (id)initWithReason:;
- (void)setBlockingTask:;
- (id)blockingTask;
- (void).cxx_destruct;
- (id)description;
- (id)creationDate;
+ (id)_dateFormatter;
+ (id)assertionDescriptions;
+ (id)_currentAssertions;
@end
