@interface LynxRootUI : LynxUI
@property (nonatomic) LynxView lynxView;
@property (nonatomic) BOOL layoutAnimationRunning;
- (BOOL)eventThrough;
- (id)initWithLynxView:;
- (BOOL)layoutAnimationRunning;
- (id)lynxView;
- (void)onAnimationEnd:startFrame:finalFrame:duration:;
- (void)onAnimationStart:startFrame:finalFrame:duration:;
- (void)setLayoutAnimationRunning:;
- (void)updateFrame:withPadding:border:margin:withLayoutAnimation:;
- (void)updateFrame:withPadding:border:withLayoutAnimation:;
- (id)view;
- (void).cxx_destruct;
- (id)createView;
@end
