@interface SKTransformNode : SKNode
@property (nonatomic) double xRotation;
@property (nonatomic) double yRotation;
- (id)rotationMatrix;
- (id)quaternion;
- (void)setQuaternion:;
- (id)eulerAngles;
- (double)zRotation;
- (void)setZRotation:;
- (void)setRotationMatrix:;
- (void)setEulerAngles:;
- (id)_makeBackingNode;
- (void)_didMakeBackingNode;
- (void)setXRotation:;
- (void)setYRotation:;
- (double)xRotation;
- (double)yRotation;
@end
