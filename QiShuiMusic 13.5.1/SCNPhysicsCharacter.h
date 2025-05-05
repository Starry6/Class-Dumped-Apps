@interface SCNPhysicsCharacter : SCNPhysicsBehavior
@property (nonatomic) double velocity;
@property (nonatomic) double jumpSpeed;
- (double)velocity;
- (void)_update;
- (void)setVelocity:;
- (void)dealloc;
- (void)setWalkingDirection:;
- (id)initWithCharacter:;
- (void)_copyDefinition:;
- (void)_addToPhysicsWorld:definition:;
- (void)_willRemoveFromPhysicsWorld:;
- (BOOL)canJump;
- (void)jump;
- (void)setJumpSpeed:;
- (double)jumpSpeed;
- (void)_handleCreateIfNeeded:;
@end
