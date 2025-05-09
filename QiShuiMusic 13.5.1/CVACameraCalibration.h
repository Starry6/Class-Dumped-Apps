@interface CVACameraCalibration : NSObject
@property (nonatomic) NSString metadataID;
@property (nonatomic) I imageWidth;
@property (nonatomic) I imageHeight;
@property (nonatomic) double principalPointX;
@property (nonatomic) double principalPointY;
@property (nonatomic) double focalLengthX;
@property (nonatomic) double focalLengthY;
@property (nonatomic) q lensDistortionModel;
@property (nonatomic) NSArray radialDistortion;
@property (nonatomic) NSArray tangentialDistortion;
@property (nonatomic) NSArray lensOffset;
@property (nonatomic) NSArray chipOffset;
@property (nonatomic) double timestampCorrection;
@property (nonatomic) NSNumber readoutTime;
@property (nonatomic) NSArray cameraToIMURotation;
@property (nonatomic) NSArray cameraToIMUTranslation;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned int)imageWidth;
- (unsigned int)imageHeight;
- (id)radialDistortion;
- (void)setRadialDistortion:;
- (id)tangentialDistortion;
- (void)setTangentialDistortion:;
- (void)setImageHeight:;
- (void)setImageWidth:;
- (id)metadataID;
- (void)setMetadataID:;
- (double)principalPointX;
- (void)setPrincipalPointX:;
- (double)principalPointY;
- (void)setPrincipalPointY:;
- (double)focalLengthX;
- (void)setFocalLengthX:;
- (double)focalLengthY;
- (void)setFocalLengthY:;
- (long long)lensDistortionModel;
- (void)setLensDistortionModel:;
- (id)lensOffset;
- (void)setLensOffset:;
- (id)chipOffset;
- (void)setChipOffset:;
- (double)timestampCorrection;
- (void)setTimestampCorrection:;
- (id)readoutTime;
- (void)setReadoutTime:;
- (id)cameraToIMURotation;
- (void)setCameraToIMURotation:;
- (id)cameraToIMUTranslation;
- (void)setCameraToIMUTranslation:;
+ (BOOL)supportsSecureCoding;
+ (id)classes;
@end
