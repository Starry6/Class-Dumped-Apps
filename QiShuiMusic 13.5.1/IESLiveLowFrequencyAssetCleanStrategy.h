@interface IESLiveLowFrequencyAssetCleanStrategy : NSObject
@property (nonatomic) IESLiveEffectsDownloadOptimizeStrategyConfig downloadOptimizeStrategyConfig;
@property (nonatomic) IESLiveCountTimer resourceMiddleCleanTimer;
@property (nonatomic) NSArray zipSweepMarkAssetsArray;
@property (nonatomic) <IESLiveEffectCleanDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelMiddleCleanTimer;
- (void)cleanLiveGiftEffectsThroughResourceCleanStrategyWithContext:;
- (id)downloadOptimizeStrategyConfig;
- (BOOL)enableDeleteZipSweepAsset;
- (long long)handleTrimEffectMoment;
- (void)handleTrimEffectWithContext:;
- (void)resetMiddleCleanTimerWithContext:;
- (id)resourceMiddleCleanTimer;
- (void)setDownloadOptimizeStrategyConfig:;
- (void)setResourceMiddleCleanTimer:;
- (void)setZipSweepMarkAssetsArray:;
- (id)zipSweepMarkAssetsArray;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
