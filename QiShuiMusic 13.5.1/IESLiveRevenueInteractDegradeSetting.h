@interface IESLiveRevenueInteractDegradeSetting : NSObject
@property (nonatomic) BOOL enableFeature;
@property (nonatomic) BOOL enableDegrade;
@property (nonatomic) BOOL enableBaseDegrade;
@property (nonatomic) double monitorDelay;
@property (nonatomic) Q fpsThreshold;
@property (nonatomic) IESLiveRevenueInteractPreMonitorSetting preMonitorSetting;
@property (nonatomic) IESLiveRevenueInteractResidentMonitorSetting residentMonitorSetting;
- (BOOL)enableBaseDegrade;
- (BOOL)enableDegrade;
- (unsigned long long)fpsThreshold;
- (id)initWithDIContext:;
- (double)monitorDelay;
- (id)preMonitorSetting;
- (id)residentMonitorSetting;
- (void)setEnableBaseDegrade:;
- (void)setEnableDegrade:;
- (void)setEnableFeature:;
- (void)setFpsThreshold:;
- (void)setMonitorDelay:;
- (void)setPreMonitorSetting:;
- (void)setResidentMonitorSetting:;
- (void).cxx_destruct;
- (BOOL)enableFeature;
@end
