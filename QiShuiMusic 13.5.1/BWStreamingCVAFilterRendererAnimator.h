@interface BWStreamingCVAFilterRendererAnimator : NSObject
@property (nonatomic) BOOL depthAvailable;
- (id)init;
- (void)dealloc;
- (id)initWithEffectStatus:;
- (id)simulateNextFrameWithEffectStatus:portraitStability:clientSuppliedSimulatedAperture:;
- (BOOL)isDepthAvailable;
@end
