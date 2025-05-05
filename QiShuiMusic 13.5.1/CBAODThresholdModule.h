@interface CBAODThresholdModule : CBModule
@property (nonatomic) float brightenLuxThreshold;
@property (nonatomic) float dimLuxThreshold;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)removeHIDServiceClient:;
- (BOOL)addHIDServiceClient:;
- (BOOL)handleHIDEvent:from:;
- (void)dealloc;
- (id)copyPropertyForKey:;
- (BOOL)setProperty:forKey:;
- (void)checkBootArgsConfiguration;
- (id)initWithQueue:;
- (void)sendNotificationForKey:andValue:;
- (void)reevaluateALSThresholds;
- (void)updateALSThresholdsWithBrightness:brightnessLimit:lux:;
- (id)copyPdeltaThresholdsForLux:;
- (BOOL)thresholdsCrossedForLux:;
- (float)brightenLuxThreshold;
- (void)setBrightenLuxThreshold:;
- (float)dimLuxThreshold;
- (void)setDimLuxThreshold:;
@end
