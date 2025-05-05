@interface CVAIMUCalibration : NSObject
@property (nonatomic) NSArray noiseCharacteristics;
@property (nonatomic) NSArray gravity;
@property (nonatomic) double accelTimestampCorrection;
@property (nonatomic) NSArray accelConversion;
@property (nonatomic) NSArray gyroConversion;
@property (nonatomic) NSArray imuToIMURotation;
@property (nonatomic) NSArray imuToIMUTranslation;
- (id)initWithCoder:;
- (id)gravity;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setGravity:;
- (id)noiseCharacteristics;
- (void)setNoiseCharacteristics:;
- (double)accelTimestampCorrection;
- (void)setAccelTimestampCorrection:;
- (id)accelConversion;
- (void)setAccelConversion:;
- (id)gyroConversion;
- (void)setGyroConversion:;
- (id)imuToIMURotation;
- (void)setImuToIMURotation:;
- (id)imuToIMUTranslation;
- (void)setImuToIMUTranslation:;
+ (BOOL)supportsSecureCoding;
+ (id)classes;
@end
