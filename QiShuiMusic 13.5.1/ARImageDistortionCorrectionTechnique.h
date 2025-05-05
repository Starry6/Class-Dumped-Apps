@interface ARImageDistortionCorrectionTechnique : ARTechnique
@property (nonatomic) {CGSize=dd} imageSize;
- (void)dealloc;
- (id)imageSize;
- (id)processData:;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)initWithImageSize:;
- (void)buildUVMapWithDistortedPixelProviderBlock:;
- (void)buildUVMapWithCameraCalibrationData:;
- (void)buildUVMapFromHardcodedCalibrationParameters;
- (void)undistortImage:toTargetImage:imageRotationAngle:;
- (id)lensDistortionPointForPoint:lookupTable:distortionOpticalCenter:imageSize:;
@end
