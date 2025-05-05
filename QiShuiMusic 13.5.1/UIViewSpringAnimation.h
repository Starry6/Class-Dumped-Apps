@interface UIViewSpringAnimation : NSObject
@property (nonatomic) <UIVectorOperatable> targetValue;
@property (nonatomic) <UIVectorOperatable> velocity;
@property (nonatomic) <UIVectorOperatable> value;
@property (nonatomic) <UIVectorOperatable> intermediate;
@property (nonatomic) <UIVectorOperatable> intermediateVelocity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)velocity;
- (void)setTargetValue:;
- (void)setIntermediateVelocity:;
- (void)updateWithDescription:;
- (void)setVelocity:;
- (id)stepWithDelta:;
- (id)initWithDescription:current:targetValue:;
- (id)intermediateVelocity;
- (void)setValue:;
- (id)initWithCurrent:targetValue:;
- (void).cxx_destruct;
- (void)setIntermediate:;
- (void)updateWithDescription:initial:;
- (id)targetValue;
- (id)value;
- (id)intermediate;
- (BOOL)isStable;
@end
