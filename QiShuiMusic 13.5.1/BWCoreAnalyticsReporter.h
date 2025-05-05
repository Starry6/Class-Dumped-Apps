@interface BWCoreAnalyticsReporter : NSObject
- (id)init;
- (void)sendEvent:;
- (void)dealloc;
+ (id)sharedInstance;
+ (id)geometricDistortionCorrectionSourceToShortString:;
+ (int)clientApplicationIDType:;
+ (id)shallowDepthOfFieldEffectStatusToString:;
@end
