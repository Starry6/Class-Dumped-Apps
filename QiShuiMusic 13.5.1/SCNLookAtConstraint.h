@interface SCNLookAtConstraint : SCNConstraint
@property (nonatomic) SCNNode target;
@property (nonatomic) {SCNVector3=fff} targetOffset;
@property (nonatomic) {SCNVector3=fff} localFront;
@property (nonatomic) {SCNVector3=fff} worldUp;
@property (nonatomic) BOOL gimbalLockEnabled;
- (void)dealloc;
- (id)initWithTarget:;
- (id)initWithCoder:;
- (void)setTarget:;
- (void)encodeWithCoder:;
- (id)target;
- (id)upVector;
- (id)copyWithZone:;
- (id)targetOffset;
- (void)setTargetOffset:;
- (id)worldUp;
- (void)setWorldUp:;
- (id)localFront;
- (void)setLocalFront:;
- (void)setUpVector:;
- (BOOL)gimbalLockEnabled;
- (void)setGimbalLockEnabled:;
- (void)_customEncodingOfSCNLookAtConstraint:;
- (void)_customDecodingOfSCNLookAtConstraint:;
+ (BOOL)supportsSecureCoding;
+ (id)lookAtConstraintWithTarget:;
@end
