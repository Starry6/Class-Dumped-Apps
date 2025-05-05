@interface SSMetricsLogEvent : SSMetricsMutableEvent
@property (nonatomic) Q logLevel;
@property (nonatomic) NSString logSubsystem;
@property (nonatomic) NSString message;
- (id)init;
- (void)setMessage:;
- (void)setLogLevel:;
- (unsigned long long)logLevel;
- (id)message;
- (id)description;
- (id)logSubsystem;
- (void)setLogSubsystem:;
+ (unsigned long long)_logLevelFromString:;
+ (id)_stringFromLogLevel:;
@end
