@interface MXAppLaunchMetric : MXMetric
@property (nonatomic) MXHistogram histogrammedTimeToFirstDraw;
@property (nonatomic) MXHistogram histogrammedApplicationResumeTime;
@property (nonatomic) MXHistogram histogrammedOptimizedTimeToFirstDraw;
@property (nonatomic) MXHistogram histogrammedExtendedLaunch;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithLaunchTimeData:withResumeTimeData:withActivationTimeData:withExtendedLaunchTimeData:;
- (id)initWithLaunchTimeData:withResumeTimeData:;
- (id)initWithLaunchTimeData:withResumeTimeData:withActivationTimeData:;
- (id)histogrammedTimeToFirstDraw;
- (id)histogrammedApplicationResumeTime;
- (id)histogrammedOptimizedTimeToFirstDraw;
- (id)histogrammedExtendedLaunch;
+ (BOOL)supportsSecureCoding;
@end
