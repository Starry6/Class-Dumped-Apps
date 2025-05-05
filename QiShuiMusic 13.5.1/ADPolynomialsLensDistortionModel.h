@interface ADPolynomialsLensDistortionModel : NSObject
@property (nonatomic) {CGPoint=dd} distortionCenter;
@property (nonatomic) r^{ADDistortionPolynomials=[8f][8f]} distortionPolynomials;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:;
- (id)copyWithZone:;
- (void)scale:;
- (id)distortionPolynomials;
- (id)distortionCenter;
- (id)initWithDistortionCenter:andPolynomials:;
- (id)dictionaryRepresentation:;
- (void)setDistortionCenter:;
- (void)distortPixels:undistortedPixels:withCameraCalibration:outDistortedPixels:;
- (void)undistortPixels:distortedPixels:withCameraCalibration:outUndistortedPixels:;
- (void)adjustForImageRotation:forDimensions:;
- (void)crop:fromDimensions:;
- (void)setDistortionPolynomials:;
- (id)initWithDistortionCenter:andPloynomials:;
- (double)getMaxDistortedRadius:;
- (void)distortPixels:undistortedPixels:withPixelSize:referenceDimensions:outDistortedPixels:;
- (void)undistortPixels:distortedPixels:withPixelSize:referenceDimensions:outUndistortedPixels:;
@end
