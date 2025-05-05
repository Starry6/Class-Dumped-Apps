@interface BWPreviewRegistration : NSObject
@property (nonatomic) NSInteger previewRegistrationType;
- (void)dealloc;
- (int)previewRegistrationType;
- (void)cleanupResources;
- (id)initWithCameraInfoByPortType:sensorBinningFactor:registrationType:;
- (void)allocateResourcesAsynchronouslyWithVideoFormat:;
- (void)registerWiderCamera:narrowerCamera:widerToNarrowerCameraScale:isMacroScene:macroTransitionType:completionHandler:;
- (void)waitForRegistrationToComplete;
- (id)computeCameraShiftForWiderCamera:narrowerCamera:widerToNarrowerCameraScale:;
@end
