@interface ADXThetaDistortionModel : NSObject
@property (nonatomic) {CGPoint=dd} distortionCenter;
@property (nonatomic) Q XThetaType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:;
- (id)copyWithZone:;
- (void)scale:;
- (id)distortionCenter;
- (id)dictionaryRepresentation:;
- (unsigned long long)XThetaType;
- (void)setDistortionCenter:;
- (void)distortPixels:undistortedPixels:withCameraCalibration:outDistortedPixels:;
- (void)undistortPixels:distortedPixels:withCameraCalibration:outUndistortedPixels:;
- (void)adjustForImageRotation:forDimensions:;
- (void)crop:fromDimensions:;
- (void)applyDistortionModelToPixels:inPixels:intrinsicsMatrix:pixelSize:distort:outPixels:;
- (id)initWithDistortionCenter:XThetaType:;
@end
