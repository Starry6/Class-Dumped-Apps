@interface POPCustomAnimation : POPAnimation
@property (nonatomic) @? animate;
@property (nonatomic) double currentTime;
@property (nonatomic) double elapsedTime;
- (BOOL)_advance:currentTime:elapsedTime:;
- (void)_appendDescription:debug:;
- (double)beginTime;
- (double)elapsedTime;
- (void).cxx_destruct;
- (id)animate;
- (double)currentTime;
- (id)_init;
- (id)copyWithZone:;
- (void)setAnimate:;
+ (id)animationWithBlock:;
@end
