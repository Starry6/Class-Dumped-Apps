@interface ARPositionalTrackingConfiguration : ARConfiguration
@property (nonatomic) BOOL relocalizationEnabled;
@property (nonatomic) BOOL vioFusionEnabled;
@property (nonatomic) Q planeDetection;
@property (nonatomic) ARWorldMap initialWorldMap;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setPlaneDetection:;
- (id)initialWorldMap;
- (void)createTechniques:;
- (id)imageSensorSettings;
- (void)setRelocalizationEnabled:;
- (void)setInitialWorldMap:;
- (unsigned long long)planeDetection;
- (id)worldTrackingOptions;
- (BOOL)isRelocalizationEnabled;
- (BOOL)isVIOFusionEnabled;
- (void)setVioFusionEnabled:;
+ (id)new;
+ (BOOL)isSupported;
+ (id)supportedVideoFormats;
+ (id)_querySupportedVideoFormats;
@end
