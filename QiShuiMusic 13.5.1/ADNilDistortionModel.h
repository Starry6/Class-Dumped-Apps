@interface ADNilDistortionModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:;
- (id)copyWithZone:;
- (void)scale:;
- (id)dictionaryRepresentation:;
- (void)distortPixels:undistortedPixels:withCameraCalibration:outDistortedPixels:;
- (void)undistortPixels:distortedPixels:withCameraCalibration:outUndistortedPixels:;
- (void)adjustForImageRotation:forDimensions:;
- (void)crop:fromDimensions:;
@end
