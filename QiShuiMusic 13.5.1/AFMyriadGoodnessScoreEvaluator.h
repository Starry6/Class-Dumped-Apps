@interface AFMyriadGoodnessScoreEvaluator : NSObject
@property (nonatomic) BOOL evaluateForAudioAccessory;
@property (nonatomic) double lastActivationTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_settingsConnectionDidDisconnect;
- (void)preheat;
- (void).cxx_destruct;
- (double)lastActivationTime;
- (id)initWithDeviceInstanceContext:queue:;
- (id)initWithDeviceInstanceContext:preferences:queue:;
- (id)initWithDeviceInstanceContext:preferences:queue:instrumentation:;
- (unsigned char)_getRecentBump:ignoreAdjustedBoost:recentlyWonBySmallAmount:;
- (unsigned char)getPlatformBias;
- (unsigned char)_bumpGoodnessScore:lastActivationTime:mediaPlaybackInterruptedTime:ignoreAdjustedBoost:recentlyWonBySmallAmount:;
- (void)_updatePlatformBias:;
- (id)_createSettingsConnectionIfRequired;
- (void)_fetchDevicePlatformBiasIfRequired;
- (BOOL)_supportsConfigurableBoost;
- (void)_updateBiasValueWithDefault:;
- (unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:;
- (BOOL)evaluateForAudioAccessory;
- (void)setLastActivationTime:;
@end
