@interface CSJFrequencyControlMonitor : NSObject
@property (nonatomic) NSDate lastRecordDate;
@property (nonatomic) q millisecond;
- (void)setMillisecond:;
- (id)initWithMillisecond:;
- (id)lastRecordDate;
- (long long)millisecond;
- (void)setLastRecordDate:;
- (void).cxx_destruct;
- (BOOL)check;
@end
