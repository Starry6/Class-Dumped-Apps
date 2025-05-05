@interface CVACalibration : NSObject
@property (nonatomic) NSArray cameraCalibrations;
@property (nonatomic) CVAIMUCalibration imuCalibration;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)cameraCalibrations;
- (void)setCameraCalibrations:;
- (id)imuCalibration;
- (void)setImuCalibration:;
+ (BOOL)supportsSecureCoding;
+ (id)classes;
@end
