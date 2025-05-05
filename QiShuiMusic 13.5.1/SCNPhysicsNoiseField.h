@interface SCNPhysicsNoiseField : SCNPhysicsField
@property (nonatomic) double smoothness;
@property (nonatomic) double animationSpeed;
- (id)init;
- (id)initWithCoder:;
- (id)valueForUndefinedKey:;
- (void)encodeWithCoder:;
- (void)setValue:forUndefinedKey:;
- (void)setSmoothness:;
- (double)smoothness;
- (void)setAnimationSpeed:;
- (double)animationSpeed;
- (id)_createField;
- (BOOL)supportsDirection;
- (BOOL)supportsOffset;
+ (BOOL)supportsSecureCoding;
@end
