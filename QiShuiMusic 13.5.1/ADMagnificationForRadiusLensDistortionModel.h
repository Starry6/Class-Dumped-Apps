@interface ADMagnificationForRadiusLensDistortionModel : NSObject
@property (nonatomic) {CGPoint=dd} distortionCenter;
@property (nonatomic) NSData lensDistortionLookupTable;
@property (nonatomic) NSData inverseLensDistortionLookupTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)scale:;
- (id)inverseLensDistortionLookupTable;
- (id)lensDistortionLookupTable;
- (id)distortionCenter;
- (id)initWithDistortionCenter:lensDistortionLookupTable:inverseLensDistortionLookupTable:;
- (id)dictionaryRepresentation:;
- (void)setDistortionCenter:;
- (void)setLensDistortionLookupTable:;
- (void)setInverseLensDistortionLookupTable:;
- (void)distortPixels:undistortedPixels:withCameraCalibration:outDistortedPixels:;
- (void)undistortPixels:distortedPixels:withCameraCalibration:outUndistortedPixels:;
- (void)adjustForImageRotation:forDimensions:;
- (void)crop:fromDimensions:;
- (void)applyDistortionModelToPixels:inPixels:intrinsicsMatrix:referenceDimensions:magnificationLookupTable:outPixels:;
@end
