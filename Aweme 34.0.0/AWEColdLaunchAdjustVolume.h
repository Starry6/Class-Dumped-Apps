@interface AWEColdLaunchAdjustVolume : NSObject
@property (nonatomic) NSDictionary strategyClassMap;
@property (nonatomic) double coldLaunchVolume;
@property (nonatomic) double adjustedVolumeForColdLaunch;
- (double)adjustedVolumeForColdLaunch;
- (void)adjustVolumeWhenColdLaunch;
- (double)coldLaunchVolume;
- (double)p_adjustedVolumeForColdLaunch:;
- (id)strategyClassMap;
- (double)limitedAdjustedVolume:originVolume:;
- (void)setStrategyClassMap:;
- (void)setColdLaunchVolume:;
- (void)setAdjustedVolumeForColdLaunch:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
