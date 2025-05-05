@interface UIViewRunningAnimationEntry : NSObject
@property (nonatomic) BOOL invalidated;
@property (nonatomic) BOOL running;
@property (nonatomic) UIViewAnimationState animationState;
@property (nonatomic) <UIViewAnimationComposing> composer;
- (void)setComposer:;
- (id)composer;
- (void)setAnimationState:;
- (id)animationState;
- (BOOL)invalidated;
- (void)setRunning:;
- (BOOL)running;
- (id)initWithAnimation:completion:composer:;
- (void)setCompletionCallback:;
- (void)setInvalidated:;
- (void).cxx_destruct;
- (void)performCompletionCallbackFinished:;
- (void)performWithLock:;
- (void)performWithoutLock:;
@end
