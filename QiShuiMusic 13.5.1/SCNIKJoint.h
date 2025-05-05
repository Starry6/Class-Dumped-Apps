@interface SCNIKJoint : NSObject
@property (nonatomic) SCNNode joint;
@property (nonatomic) double maxAllowedRotationAngle;
- (id)joint;
- (void)setJoint:;
- (double)maxAllowedRotationAngle;
- (void)setMaxAllowedRotationAngle:;
@end
