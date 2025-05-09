@interface ARCamera : NSObject
@property (nonatomic) {CGSize=dd} imageResolution;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureOffset;
@property (nonatomic) {?=[3]} intrinsics;
@property (nonatomic) Q lensType;
@property (nonatomic)  radialDistortion;
@property (nonatomic)  tangentialDistortion;
@property (nonatomic) {?=[4]} transform;
@property (nonatomic) q trackingState;
@property (nonatomic) q trackingStateReason;
@property (nonatomic) q devicePosition;
@property (nonatomic) AVCameraCalibrationData calibrationData;
@property (nonatomic) NSDictionary extrinsicsMap;
@property (nonatomic)  eulerAngles;
@property (nonatomic) {?=[4]} projectionMatrix;
- (id)focalLength;
- (id)debugQuickLookObject;
- (id)init;
- (long long)devicePosition;
- (void)setTransform:;
- (id)initWithCoder:;
- (void)setDevicePosition:;
- (void)encodeWithCoder:;
- (id)transform;
- (void).cxx_destruct;
- (id)description;
- (void)setExposureDuration:;
- (double)exposureDuration;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)lensType;
- (long long)trackingState;
- (void)setTrackingState:;
- (id)calibrationData;
- (id)intrinsics;
- (id)imageResolution;
- (long long)trackingStateReason;
- (id)eulerAngles;
- (void)setImageResolution:;
- (void)setLensType:;
- (id)radialDistortion;
- (void)setRadialDistortion:;
- (id)tangentialDistortion;
- (void)setTangentialDistortion:;
- (id)extrinsicsMap;
- (id)extrinsicMatrix4x4ToDeviceType:;
- (id)extrinsicMatrixToDeviceType:;
- (void)setCalibrationData:;
- (void)setExtrinsicsMap:;
- (id)principalPoint;
- (id)_description:;
- (id)initWithIntrinsics:imageResolution:;
- (id)displayCenterTransform;
- (id)projectionMatrix;
- (id)projectPoint:orientation:viewportSize:;
- (id)unprojectPoint:ontoPlaneWithTransform:orientation:viewportSize:;
- (id)projectionMatrixForOrientation:viewportSize:zNear:zFar:;
- (id)viewMatrixForOrientation:;
- (void)setTrackingStateReason:;
- (void)setIntrinsics:;
- (float)exposureOffset;
- (void)setExposureOffset:;
+ (BOOL)supportsSecureCoding;
@end
