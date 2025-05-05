@interface PFSlowMotionTimeRangeMapperScaledRegion : NSObject
@property (nonatomic) float rate;
@property (nonatomic) float rampInStartTime;
@property (nonatomic) float rampInEndTime;
@property (nonatomic) float rampOutStartTime;
@property (nonatomic) float rampOutEndTime;
- (void)setRate:;
- (float)rate;
- (float)rampInStartTime;
- (void)setRampInStartTime:;
- (float)rampInEndTime;
- (void)setRampInEndTime:;
- (float)rampOutStartTime;
- (void)setRampOutStartTime:;
- (float)rampOutEndTime;
- (void)setRampOutEndTime:;
@end
