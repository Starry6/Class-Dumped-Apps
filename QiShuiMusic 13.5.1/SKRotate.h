@interface SKRotate : SKAction
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)rotateByAngle:duration:;
+ (id)rotateToAngle:duration:;
+ (id)rotateToAngle:duration:shortestUnitArc:;
+ (id)rotateByX:duration:;
+ (id)rotateToX:duration:;
+ (id)rotateByY:duration:;
+ (id)rotateToY:duration:;
+ (id)rotateByX:y:z:duration:;
+ (id)rotateToX:y:z:duration:;
@end
