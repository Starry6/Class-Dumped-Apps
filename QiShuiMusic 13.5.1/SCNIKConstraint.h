@interface SCNIKConstraint : SCNConstraint
@property (nonatomic) SCNNode chainRootNode;
@property (nonatomic) {SCNVector3=fff} targetPosition;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)targetPosition;
- (void)setTargetPosition:;
- (id)initWithChainRootNode:;
- (void)setMaxAllowedRotationAngle:forJoint:;
- (double)maxAllowedRotationAngleForJoint:;
- (id)chainRootNode;
- (void)setChainRootNode:;
- (id)jointForNode:;
- (void)_didDecodeSCNIKConstraint:;
- (void)_customEncodingOfSCNIKConstraint:;
- (void)_customDecodingOfSCNIKConstraint:;
+ (BOOL)supportsSecureCoding;
+ (id)inverseKinematicsConstraintWithChainRootNode:;
@end
