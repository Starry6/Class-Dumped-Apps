@interface ARCoachingGeoTrackingRenderer : NSObject
@property (nonatomic) double currentAnimationTime;
@property (nonatomic) ARCoachingGlyphState state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)prepareWithCompletionHandler:;
- (id)state;
- (void).cxx_destruct;
- (id)initWithLayer:device:pixelFormat:sampleCount:deviceMaskImage:;
- (void)resizeIfNeeded:;
- (void)drawWithTimeDelta:drawable:commandBuffer:;
- (void)setOrientationAngle:;
- (void)resetAnimationTime:;
- (double)currentAnimationTime;
- (void)drawDeviceWithTimeDelta:drawable:commandBuffer:;
- (void)drawBuildingOutlineWithTimeDelta:drawable:commandBuffer:;
- (BOOL)loadOutlineModelWith:;
- (void)updateFrameStateWithTimeDelta:;
@end
