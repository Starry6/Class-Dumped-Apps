@interface SCNActionRotate : SCNAction
- (id)init;
- (id)initWithCoder:;
- (id)parameters;
- (void)encodeWithCoder:;
- (BOOL)isRelative;
- (id)copyWithZone:;
- (id)reversedAction;
+ (BOOL)supportsSecureCoding;
+ (id)rotateByX:y:z:duration:;
+ (id)rotateToX:y:z:duration:;
+ (id)rotateByAngle:aroundAxis:duration:;
+ (id)rotateToAxisAngle:duration:;
+ (id)rotateToX:y:z:duration:shortestUnitArc:;
@end
