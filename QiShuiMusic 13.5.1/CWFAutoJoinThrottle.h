@interface CWFAutoJoinThrottle : NSObject
@property (nonatomic) q trigger;
@property (nonatomic) NSDictionary intervals;
- (void)setTrigger:;
- (long long)trigger;
- (void).cxx_destruct;
- (id)intervals;
- (id)description;
- (void)setIntervals:;
- (id)copyWithZone:;
+ (id)autoJoinThrottleWithTrigger:intervals:;
@end
