@interface IESLiveDFKeyFrameAnimation : IESLiveDFAnimation
@property (nonatomic) IESLiveDFAnimationHandler animationHandler;
@property (nonatomic) IESLIveDFKeyFrameAnimationContext realContext;
@property (nonatomic) NSArray intervals;
@property (nonatomic) NSArray values;
@property (nonatomic) NSArray keyTimes;
- (void)setRealContext:;
- (id)initWithPropertyType:;
- (void)loadTimingFunction;
- (id)realContext;
- (void)updateTime:;
- (id)context;
- (id)values;
- (void)prepare;
- (void).cxx_destruct;
- (id)intervals;
- (void)setIntervals:;
- (void)setValues:;
- (id)keyTimes;
- (void)setKeyTimes:;
- (id)animationHandler;
- (void)setAnimationHandler:;
+ (id)animationWithPropertyType:;
@end
