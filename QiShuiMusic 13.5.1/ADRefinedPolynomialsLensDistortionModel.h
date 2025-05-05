@interface ADRefinedPolynomialsLensDistortionModel : ADDynamicPolynomialsLensDistortionModel
@property (nonatomic) float pixelSize;
@property (nonatomic) float focalLength;
- (float)focalLength;
- (float)pixelSize;
- (void)setPixelSize:;
- (id)copyWithZone:;
- (void)setFocalLength:;
- (void)distortPixels:undistortedPixels:withCameraCalibration:outDistortedPixels:;
- (void)undistortPixels:distortedPixels:withCameraCalibration:outUndistortedPixels:;
- (void)setDynamicFactor:;
- (void)updateDynamicFactor;
- (id)initWithDistortionCenter:pixelSize:focalLength:polynomialsBase:polynomialsDynamic:;
@end
