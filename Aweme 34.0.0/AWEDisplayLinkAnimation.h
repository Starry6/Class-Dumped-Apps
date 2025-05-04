@interface AWEDisplayLinkAnimation : NSObject
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) double animationDuration;
@property (nonatomic) double animationDisplayTime;
@property (nonatomic) @? animationBlock;
@property (nonatomic) @? animationCompletionBlock;
- (double)animationDisplayTime;
- (void)setAnimationDisplayTime:;
- (void)handleAnimation:;
- (id)animationBlock;
- (void)setAnimationBlock:;
- (id)displayLink;
- (void)cancel;
- (void)setDisplayLink:;
- (void).cxx_destruct;
- (void)setAnimationDuration:;
- (void)invalidateTimer;
- (double)animationDuration;
- (id)animationCompletionBlock;
- (void)setAnimationCompletionBlock:;
+ (double)curveEaseInOutWithProgress:from:to:;
+ (double)curveEaseInWithProgress:from:to:;
+ (double)curveEaseOutWithProgress:from:to:;
@end
