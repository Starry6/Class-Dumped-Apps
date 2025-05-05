@interface UIViewAnimationComposer : NSObject
@property (nonatomic) <UIVectorOperatable> targetVelocity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)composeAnimation:withNewAnimationDescription:interactive:currentValue:targetValue:;
- (id)targetVelocity;
- (void)setTargetVelocity:;
- (id)projectValue:decelerationFactor:;
- (void).cxx_destruct;
- (id)createAnimationFromDescription:currentValue:velocity:targetValue:;
- (BOOL)isActive;
@end
