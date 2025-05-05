@interface CEKLightingCube : NSObject
- (id)initWithRotationAngle:;
- (void)points:forOutlineWithSize:;
- (id)pathForOutlineWithSize:cornerRadius:;
- (id)centerShadowPathWithSize:width:;
- (id)centerPathWithSize:;
- (void)points:forPlane:size:;
- (id)pathForPlane:size:;
- (double)intensityForPlane:;
@end
