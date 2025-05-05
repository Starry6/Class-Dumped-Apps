@interface IESLiveANRRecord : NSObject
@property (nonatomic) q count;
@property (nonatomic) double durationSum;
@property (nonatomic) double durationMax;
@property (nonatomic) double startTime;
@property (nonatomic) double validTime;
- (void)setDurationSum:;
- (void)setDurationMax:;
- (float)countPer100Seconds;
- (double)durationMax;
- (double)durationPer100Seconds;
- (double)durationSum;
- (id)initWithValidTime:;
- (double)validTime;
- (void)setCount:;
- (double)startTime;
- (BOOL)isValid;
- (long long)count;
- (double)activeTime;
@end
