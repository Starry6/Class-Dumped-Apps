@interface VELimitLogger : NSObject
@property (nonatomic) double limitInterval;
@property (nonatomic) double lastLoggerTime;
@property (nonatomic) Q limitCount;
@property (nonatomic) Q counter;
@property (nonatomic) q mode;
- (BOOL)checkLimitCount;
- (BOOL)checkLimitInterval;
- (void)doLogger:;
- (id)initWithLimitInterval:;
- (id)initWithLimitCount:;
- (double)limitInterval;
- (void)setLimitInterval:;
- (double)lastLoggerTime;
- (void)setLastLoggerTime:;
- (unsigned long long)limitCount;
- (void)setLimitCount:;
- (unsigned long long)counter;
- (long long)mode;
- (void)setCounter:;
- (void)setMode:;
@end
