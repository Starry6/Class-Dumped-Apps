@interface EdgeRectangleAnimator : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rectangle;
@property (nonatomic) CinematicFramingSessionOptions options;
@property (nonatomic) float xSpeed;
@property (nonatomic) float ySpeed;
@property (nonatomic) float sizeSpeed;
@property (nonatomic) float verticalAccelerationMultiplier;
- (void)setOptions:;
- (id)options;
- (void).cxx_destruct;
- (id)initWithRectangle:framingSpaceManager:;
- (void)resetToRectangle:;
- (id)driveAnimationToTarget:atTime:inState:;
- (id)rectangle;
- (float)xSpeed;
- (float)ySpeed;
- (float)sizeSpeed;
- (float)verticalAccelerationMultiplier;
- (void)setVerticalAccelerationMultiplier:;
- (void)driveWidthAnimationToTarget:withPivotDescriptions:atTime:;
- (void)drivePivotAnimationsToTarget:withPivotDescriptions:atTime:;
- (void)driveXPivotWithLocation:velocity:pivotDescriptions:toTargetLocation:targetVelocity:atTime:;
- (void)driveYPivotWithLocation:velocity:pivotDescriptions:toTargetLocation:targetVelocity:atTime:;
@end
