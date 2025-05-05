@interface ADMillimeterRadiusPairsLensDistortionModel : NSObject
@property (nonatomic) {CGPoint=dd} distortionCenter;
@property (nonatomic) NSData distortedRadii;
@property (nonatomic) NSData undistortedRadii;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)scale:;
- (id)distortionCenter;
- (id)dictionaryRepresentation:;
- (void)setDistortionCenter:;
- (void)distortPixels:undistortedPixels:withCameraCalibration:outDistortedPixels:;
- (void)undistortPixels:distortedPixels:withCameraCalibration:outUndistortedPixels:;
- (void)adjustForImageRotation:forDimensions:;
- (void)crop:fromDimensions:;
- (id)initWithDistortionCenter:distortedRadii:undistortedRadii:;
- (void)applyDistortionModelToPixels:inPixels:intrinsicsMatrix:pixelSize:distort:outPixels:;
- (id)distortedRadii;
- (void)setDistortedRadii:;
- (id)undistortedRadii;
- (void)setUndistortedRadii:;
@end
