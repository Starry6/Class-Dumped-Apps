@interface UIViewUpdateVelocityAnimationDescription : NSObject
@property (nonatomic) <UIVectorOperatable> velocity;
@property (nonatomic) <UIVectorOperatable> targetVelocity;
- (id)velocity;
- (void)setVelocity:;
- (id)targetVelocity;
- (id)initWithVelocity:targetVelocity:;
- (void)setTargetVelocity:;
- (void).cxx_destruct;
+ (id)descriptionWithVelocity:targetVelocity:;
@end
