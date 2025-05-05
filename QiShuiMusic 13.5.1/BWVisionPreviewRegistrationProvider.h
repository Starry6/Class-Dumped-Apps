@interface BWVisionPreviewRegistrationProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)cleanupResources;
- (void)allocateResourcesWithVideoFormat:metalContext:;
- (id)computeCameraShiftForWiderCamera:narrowerCamera:widerToNarrowerCameraScale:;
- (id)registerWiderCamera:narrowerCamera:widerToNarrowerCameraScale:isMacroScene:macroTransitionType:;
- (id)initWithCameraInfoByPortType:sensorBinningFactor:;
@end
