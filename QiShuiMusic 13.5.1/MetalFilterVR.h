@interface MetalFilterVR : MetalFilterDefault
@property (nonatomic) VPVRHeadTracker headTracker;
@property (nonatomic) BOOL isheadTrackEnable;
@property (nonatomic) q postNotifiVRPoseInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHeadTracker:;
- (id)getVertexShader;
- (BOOL)needUseRightEye;
- (void)rotateWithPitch:andYaw:andRoll:;
- (id)createPixelTextureWithFrame:format:;
- (void)drawFrame:withRenderEncoder:;
- (void)drawFrame:withRenderEncoder:forEye:;
- (id)getEffectPatameterStr;
- (id)getExtraQuat;
- (id)getFragmentShader;
- (id)headTracker;
- (void)initHeadTrackerLeftEye:rightEye:headTrackingEnabled:extraQuaternion:;
- (BOOL)isTouchRotationInWorldCoord;
- (BOOL)isheadTrackEnable;
- (long long)postNotifiVRPoseInterval;
- (id)processingTextureSize;
- (void)recenter;
- (long long)renderAfter;
- (long long)renderBefore:frame:;
- (void)setIsheadTrackEnable:;
- (void)setPostNotifiVRPoseInterval:;
- (void)updateBackStickerWithImage:;
- (void)updateExtraHeadPoseQuaternion;
- (void)updateParams;
- (void)updateSpaceWithRenderEncoder:;
- (void)updateTextureWithFrame:renderEncoder:;
- (id)viewportWithEye:;
- (id)init;
- (id)process:;
- (void)setEffect:;
- (void).cxx_destruct;
@end
