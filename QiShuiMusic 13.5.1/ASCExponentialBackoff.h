@interface ASCExponentialBackoff : NSObject
@property (nonatomic) double baseSleepTimeInterval;
@property (nonatomic) double maxSleepTimeInterval;
@property (nonatomic) JEUnfairLock attemptLock;
@property (nonatomic) q attemptsMade;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)reset;
- (double)nextSleepTimeInterval;
- (id)initWithBaseSleepTimeInterval:maxSleepTimeInterval:;
- (double)baseSleepTimeInterval;
- (double)maxSleepTimeInterval;
- (id)attemptLock;
- (long long)attemptsMade;
- (void)setAttemptsMade:;
@end
