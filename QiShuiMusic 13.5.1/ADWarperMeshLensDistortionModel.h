@interface ADWarperMeshLensDistortionModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) NSData warperMesh;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:;
- (long long)height;
- (long long)width;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:;
- (void)scale:;
- (id)dictionaryRepresentation:;
- (void)distortPixels:undistortedPixels:withCameraCalibration:outDistortedPixels:;
- (void)undistortPixels:distortedPixels:withCameraCalibration:outUndistortedPixels:;
- (void)adjustForImageRotation:forDimensions:;
- (void)crop:fromDimensions:;
- (id)initWithWarperMesh:type:width:height:;
- (id)warperMesh;
@end
