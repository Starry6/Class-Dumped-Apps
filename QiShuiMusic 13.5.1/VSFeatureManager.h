@interface VSFeatureManager : NSObject
@property (nonatomic) VSPreferences preferences;
- (void)setPreferences:;
- (id)init;
- (id)preferences;
- (BOOL)featureIsEnabled:;
- (void)disableFeature:;
- (void)resetFeature:;
- (void).cxx_destruct;
- (void)enableFeature:;
+ (id)sharedFeatureManager;
@end
