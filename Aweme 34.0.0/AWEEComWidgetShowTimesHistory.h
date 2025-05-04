@interface AWEEComWidgetShowTimesHistory : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) q currentCount;
- (long long)currentCount;
- (void)setStartTime:;
- (double)startTime;
- (void)setCurrentCount:;
@end
