@interface AWEColdLaunchAdjustVolumePortraitStrategy : AWEColdLaunchAdjustVolumeBaseStrategy
@property (nonatomic) double volumeStableThreshold;
@property (nonatomic) BOOL isDeltaLowerThanStandardDeviation;
@property (nonatomic) double adjustThreshold;
- (double)adjustedVolume:;
- (double)volumeStableThreshold;
- (BOOL)isDeltaLowerThanStandardDeviation;
- (double)adjustThreshold;
@end
