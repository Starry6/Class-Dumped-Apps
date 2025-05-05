@interface GKAgent2D : GKAgent
@property (nonatomic)  position;
@property (nonatomic)  velocity;
@property (nonatomic) float rotation;
- (void)setPosition:;
- (id)velocity;
- (id)position;
- (id)init;
- (id)initWithCoder:;
- (void)setRotation:;
- (void)encodeWithCoder:;
- (float)rotation;
- (void)updateWithDeltaTime:;
- (void)setPosition_:;
- (id)position_;
- (id)velocity_;
- (void)applySteeringForce:deltaTime:;
- (void)applyBrakingForce:deltaTime:;
+ (BOOL)supportsSecureCoding;
@end
