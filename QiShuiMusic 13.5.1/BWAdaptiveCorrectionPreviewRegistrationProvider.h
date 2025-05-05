@interface BWAdaptiveCorrectionPreviewRegistrationProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)cleanupResources;
- (id)initWithCameraInfoByPortType:;
- (void)allocateResourcesWithVideoFormat:metalContext:;
- (id)computeCameraShiftForWiderCamera:narrowerCamera:widerToNarrowerCameraScale:;
- (id)registerWiderCamera:narrowerCamera:widerToNarrowerCameraScale:isMacroScene:macroTransitionType:;
@end
