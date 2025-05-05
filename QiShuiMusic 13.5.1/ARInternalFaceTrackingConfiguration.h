@interface ARInternalFaceTrackingConfiguration : ARConfiguration
@property (nonatomic) q maximumNumberOfTrackedFaces;
@property (nonatomic) BOOL useAlternativeResources;
- (id)init;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setLightEstimationEnabled:;
- (void)setCameraPosition:;
- (long long)maximumNumberOfTrackedFaces;
- (void)createTechniques:;
- (id)imageSensorSettings;
- (void)setMirroredFrameOutput:;
- (id)renderingTechnique;
- (void)setMaximumNumberOfTrackedFaces:;
- (BOOL)useAlternativeResources;
- (void)setUseAlternativeResources:;
+ (id)new;
+ (BOOL)isSupported;
+ (id)supportedVideoFormats;
@end
