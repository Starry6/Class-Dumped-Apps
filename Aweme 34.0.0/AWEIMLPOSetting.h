@interface AWEIMLPOSetting : HTSService
@property (nonatomic) NSSet lowPowFeatures;
@property (nonatomic) NSSet allFeatures;
@property (nonatomic) NSSet lowPowModeBlockFeature;
@property (nonatomic) Q lowPowOptimizeStrategy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (BOOL)featureAllowedToEnableWithKey:;
- (BOOL)featureEnableWithKey:;
- (BOOL)featureEnableWithKey:defaultValue:;
- (BOOL)__isValidWithFeatureKey:;
- (id)__featureABValueForKey:;
- (BOOL)__lowPowOptimizeEnable;
- (BOOL)__isLowPowDevice;
- (id)__transformArrayToSet:;
- (id)lowPowFeatures;
- (id)lowPowModeBlockFeature;
- (unsigned long long)lowPowOptimizeStrategy;
- (id)allFeatures;
- (void).cxx_destruct;
@end
