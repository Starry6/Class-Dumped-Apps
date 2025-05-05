@interface SuddenChangeParameters : NSObject
@property (nonatomic) NSInteger margin;
@property (nonatomic) NSInteger minSamplesCount;
@property (nonatomic) NSInteger minSamplesCountFastBandwidthEstimation;
@property (nonatomic) NSInteger minMarginRequired;
@property (nonatomic) double percentage;
@property (nonatomic) double durationThresholdUpward;
@property (nonatomic) double durationThresholdDownward;
- (int)margin;
- (void)setMargin:;
- (double)percentage;
- (void)setPercentage:;
- (int)minSamplesCount;
- (void)setMinSamplesCount:;
- (int)minSamplesCountFastBandwidthEstimation;
- (void)setMinSamplesCountFastBandwidthEstimation:;
- (int)minMarginRequired;
- (void)setMinMarginRequired:;
- (double)durationThresholdUpward;
- (void)setDurationThresholdUpward:;
- (double)durationThresholdDownward;
- (void)setDurationThresholdDownward:;
@end
