@interface AXMCameraFrameContext : NSObject
@property (nonatomic) float videoFieldOfView;
@property (nonatomic) float videoZoomFactor;
@property (nonatomic) q videoSourceWidth;
@property (nonatomic) q videoSourceHeight;
@property (nonatomic) double presentationTimestamp;
@property (nonatomic) CMAttitude deviceAttitude;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)deviceAttitude;
- (void).cxx_destruct;
- (float)videoZoomFactor;
- (float)videoFieldOfView;
- (id)initWithVideoFieldOfView:zoomFactor:sourceWidth:sourceHeight:presentationTimestamp:attitude:;
- (id)motionCorrectedNormalizedFrame:targetAttitude:targetZoomFactor:interfaceOrientation:mirrored:;
- (long long)videoSourceWidth;
- (long long)videoSourceHeight;
- (double)presentationTimestamp;
+ (BOOL)supportsSecureCoding;
@end
