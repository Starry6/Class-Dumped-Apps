@interface SKOverlayTransitionContext : NSObject
@property (nonatomic) ASOOverlayTransitionContext backing;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} startFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} endFrame;
- (id)backing;
- (id)endFrame;
- (void).cxx_destruct;
- (void)setBacking:;
- (id)startFrame;
- (id)initWithASOOverlayTransitionContext:;
- (void)addAnimationBlock:;
@end
