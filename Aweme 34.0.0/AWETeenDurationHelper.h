@interface AWETeenDurationHelper : NSObject
@property (nonatomic) double startTime;
- (double)durationTime;
- (void)startCounting;
- (double)durationTimeAndResetStart:;
- (void)setStartTime:;
- (double)startTime;
@end
