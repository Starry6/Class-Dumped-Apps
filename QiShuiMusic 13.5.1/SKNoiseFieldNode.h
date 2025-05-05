@interface SKNoiseFieldNode : SKFieldNode
@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)_initialize;
- (void)setSmoothness:;
- (float)smoothness;
- (void)setAnimationSpeed:;
- (float)animationSpeed;
- (id)_descriptionClassName;
+ (BOOL)supportsSecureCoding;
@end
