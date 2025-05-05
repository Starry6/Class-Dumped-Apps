@interface OBAnimationState : NSObject
@property (nonatomic) NSString darkName;
@property (nonatomic) NSString name;
@property (nonatomic) double transitionDuration;
@property (nonatomic) double transitionSpeed;
- (double)transitionDuration;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (void)setTransitionDuration:;
- (id)initWithStateName:transitionDuration:transitionSpeed:;
- (id)initWithStateName:darkStateName:transitionDuration:transitionSpeed:;
- (id)darkName;
- (id)stateForLayer:;
- (double)transitionSpeed;
- (void)setTransitionSpeed:;
- (void)setDarkName:;
@end
