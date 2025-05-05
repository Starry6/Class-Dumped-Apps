@interface UIViewFrictionBounceAnimation : NSObject
@property (nonatomic) <UIVectorOperatable> targetValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)velocity;
- (void)setTargetValue:;
- (void)setVelocity:;
- (id)stepWithDelta:;
- (void).cxx_destruct;
- (id)targetValue;
- (BOOL)isStable;
- (id)updatedTarget;
- (id)initWithCurrent:target:;
@end
