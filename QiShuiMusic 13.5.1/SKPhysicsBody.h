@interface SKPhysicsBody : NSObject
@property (nonatomic) BOOL dynamic;
@property (nonatomic) BOOL usesPreciseCollisionDetection;
@property (nonatomic) BOOL allowsRotation;
@property (nonatomic) BOOL pinned;
@property (nonatomic) BOOL resting;
@property (nonatomic) double friction;
@property (nonatomic) double charge;
@property (nonatomic) double restitution;
@property (nonatomic) double linearDamping;
@property (nonatomic) double angularDamping;
@property (nonatomic) double density;
@property (nonatomic) double mass;
@property (nonatomic) double area;
@property (nonatomic) BOOL affectedByGravity;
@property (nonatomic) I fieldBitMask;
@property (nonatomic) I categoryBitMask;
@property (nonatomic) I collisionBitMask;
@property (nonatomic) I contactTestBitMask;
@property (nonatomic) NSArray joints;
@property (nonatomic) SKNode node;
@property (nonatomic) {CGVector=dd} velocity;
@property (nonatomic) double angularVelocity;
- (BOOL)isDynamic;
- (double)friction;
- (id)velocity;
- (void)setPinned:;
- (void)setDensity:;
- (id)node;
- (void)setVelocity:;
- (BOOL)isResting;
- (double)density;
- (void)setMass:;
- (double)mass;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setFriction:;
- (id)copyWithZone:;
- (double)angularVelocity;
- (double)angularDamping;
- (unsigned int)collisionBitMask;
- (void)setAngularVelocity:;
- (void)setAngularDamping:;
- (void)setAffectedByGravity:;
- (BOOL)affectedByGravity;
- (double)linearDamping;
- (unsigned int)categoryBitMask;
- (void)setRestitution:;
- (void)setResting:;
- (void)setFieldBitMask:;
- (void)setDynamic:;
- (unsigned int)fieldBitMask;
- (double)restitution;
- (void)setUsesPreciseCollisionDetection:;
- (void)setContactTestBitMask:;
- (void)setCollisionBitMask:;
- (void)setLinearDamping:;
- (void)setCategoryBitMask:;
- (void)applyImpulse:;
- (BOOL)usesPreciseCollisionDetection;
- (BOOL)pinned;
- (void)setCharge:;
- (void)setAllowsRotation:;
- (double)charge;
- (BOOL)allowsRotation;
- (double)area;
- (id)joints;
- (void)applyForce:;
- (void)applyForce:atPoint:;
- (void)applyTorque:;
- (void)applyImpulse:atPoint:;
- (void)applyAngularImpulse:;
- (id)allContactedBodies;
- (unsigned int)contactTestBitMask;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)copyWithZone:;
+ (id)bodyWithCircleOfRadius:;
+ (id)bodyWithRectangleOfSize:;
+ (id)bodyWithRectangleOfSize:center:;
+ (id)bodyWithEdgeFromPoint:toPoint:;
+ (id)bodyWithPolygonFromPath:;
+ (id)bodyWithEdgeChainFromPath:;
+ (id)bodyWithEdgeLoopFromPath:;
+ (id)bodyWithBodies:;
+ (id)bodyWithCircleOfRadius:center:;
+ (id)bodyWithEdgeLoopFromRect:;
+ (id)bodyWithTexture:size:;
+ (id)bodyWithTexture:alphaThreshold:size:;
+ (id)bodyWithTexture:alphaThreshold:size:accuracy:;
@end
