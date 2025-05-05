@interface ADMutableCameraCalibration : ADCameraCalibration
@property (nonatomic) {?=[3]} intrinsicMatrix;
@property (nonatomic) {CGSize=dd} referenceDimensions;
@property (nonatomic) {?=[4]} cameraToPlatformTransform;
@property (nonatomic) float pixelSize;
@property (nonatomic) <ADLensDistortionModel> distortionModel;
- (id)init;
- (void)setPixelSize:;
- (BOOL)scale:;
- (BOOL)adjustForImageRotation:;
- (void)setDistortionModel:;
- (void)setIntrinsicMatrix:;
- (void)crop:;
- (void)setCameraToPlatformTransform:;
- (void)setReferenceDimensions:;
- (void)centerCrop:;
+ (id)new;
@end
