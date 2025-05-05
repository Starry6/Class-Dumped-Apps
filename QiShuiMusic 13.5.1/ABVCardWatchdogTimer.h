@interface ABVCardWatchdogTimer : NSObject
@property (nonatomic) Q ticks;
@property (nonatomic) <ABVCardTimeProvider> timeProvider;
@property (nonatomic) NSDate startTime;
@property (nonatomic) BOOL valid;
- (BOOL)isStarted;
- (id)timeProvider;
- (void)dealloc;
- (BOOL)valid;
- (void)start;
- (void)setStartTime:;
- (void)setValid:;
- (id)startTime;
- (BOOL)isValid;
- (id)initWithTimeProvider:;
- (void)checkValidity;
- (unsigned long long)ticks;
- (void)setTicks:;
+ (id)timerWithTimeProvider:;
+ (BOOL)shouldCheckTime;
@end
