@interface GKAgent3D : GKAgent
@property (nonatomic)  position;
@property (nonatomic)  velocity;
@property (nonatomic) BOOL rightHanded;
@property (nonatomic) {?=[3]} rotation;
- (void)setPosition:;
- (id)velocity;
- (id)position;
- (id)init;
- (id)initWithCoder:;
- (void)setRotation:;
- (void)encodeWithCoder:;
- (id)rotation;
- (void)updateWithDeltaTime:;
- (void)applySteeringForce:deltaTime:;
- (void)applyBrakingForce:deltaTime:;
- (BOOL)rightHanded;
- (void)setRightHanded:;
+ (BOOL)supportsSecureCoding;
@end
