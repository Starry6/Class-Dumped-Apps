@interface IESECSliceXCombinedTransitionAnimation : NSObject
@property (nonatomic) IESECSliceXTransitionAnimation opacityTranstion;
@property (nonatomic) IESECSliceXTransitionAnimation colorTransition;
@property (nonatomic) IESECSliceXTransitionAnimation translateTransition;
- (id)colorTransition;
- (id)animationWithProperty:;
- (void)bindAnimationTaskWithProperty:task:;
- (id)initWithProperties:durations:timingFunctions:delays:;
- (id)opacityTranstion;
- (id)translateTransition;
- (id)validTransitionProperties;
- (void).cxx_destruct;
@end
