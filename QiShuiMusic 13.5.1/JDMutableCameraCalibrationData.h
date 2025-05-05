@interface JDMutableCameraCalibrationData : JDCameraCalibrationData
@property (nonatomic) {?=[3]} intrinsicMatrix;
@property (nonatomic) {CGSize=dd} referenceDimensions;
@property (nonatomic) {?=[4]} cameraToPlatformTransform;
@property (nonatomic) float pixelSize;
@property (nonatomic) {CGPoint=dd} lensDistortionCenter;
@property (nonatomic) NSInteger distortionModel;
@property (nonatomic) NSData distortedRadii;
@property (nonatomic) NSData undistortedRadii;
@property (nonatomic) r^{JDGDCPolynomials=[8f][8f]} distortionPolynomials;
- (void)setPixelSize:;
- (BOOL)scale:;
- (void)setDistortionModel:;
- (void)setIntrinsicMatrix:;
- (void)crop:;
- (void)setCameraToPlatformTransform:;
- (void)setLensDistortionCenter:;
- (void)setDistortedRadii:;
- (void)setUndistortedRadii:;
- (void)setDistortionPolynomials:;
- (void)setReferenceDimensions:;
- (void)centerCrop:;
- (void)setInternalCalib:;
- (void)setDistortionModelToWarperMesh:width:height:;
@end
