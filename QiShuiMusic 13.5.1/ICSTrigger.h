@interface ICSTrigger : ICSProperty
- (id)initWithDuration:;
- (id)travelRelativeDuration;
- (id)initWithDate:;
- (void)setDuration:;
- (void)setDate:;
- (id)initWithDuration:travelRelativeDuration:;
- (void)fixAlarmTrigger;
- (BOOL)isDurationBased;
@end
