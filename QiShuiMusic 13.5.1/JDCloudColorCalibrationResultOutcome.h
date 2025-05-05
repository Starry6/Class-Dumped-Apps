@interface JDCloudColorCalibrationResultOutcome : NSObject
@property (nonatomic) float rotationX;
@property (nonatomic) float rotationY;
@property (nonatomic) float rotationZ;
@property (nonatomic) float stdX;
@property (nonatomic) float stdY;
@property (nonatomic) float stdZ;
- (float)rotationX;
- (float)rotationY;
- (float)rotationZ;
- (id)initWithRotX:rotY:rotZ:stdX:stdY:stdZ:;
- (void)applyFactorToResults:;
- (float)stdX;
- (float)stdY;
- (float)stdZ;
@end
