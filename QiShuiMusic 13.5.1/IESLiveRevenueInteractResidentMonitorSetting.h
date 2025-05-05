@interface IESLiveRevenueInteractResidentMonitorSetting : NSObject
@property (nonatomic) double checkInterval;
@property (nonatomic) double sampleInterval;
@property (nonatomic) double duration;
@property (nonatomic) Q sampleCount;
- (double)checkInterval;
- (id)initWithSettingDict:;
- (void)setCheckInterval:;
- (unsigned long long)sampleCount;
- (void)setSampleInterval:;
- (void)setSampleCount:;
- (double)sampleInterval;
- (void)setDuration:;
- (double)duration;
@end
