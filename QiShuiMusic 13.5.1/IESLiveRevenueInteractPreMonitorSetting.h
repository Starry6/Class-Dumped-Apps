@interface IESLiveRevenueInteractPreMonitorSetting : NSObject
@property (nonatomic) double checkInterval;
@property (nonatomic) double duration;
@property (nonatomic) q sampleCount;
- (double)checkInterval;
- (id)initWithSettingDict:;
- (void)setCheckInterval:;
- (long long)sampleCount;
- (void)setSampleCount:;
- (void)setDuration:;
- (double)duration;
@end
