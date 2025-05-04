@interface AWEDetailScrollAnimation : NSObject
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) @? completion;
- (void)animatedScroll;
- (id)initWithScrollView:timingFunction:;
- (void)setContentOffset:duration:;
- (void)setScrollView:;
- (void)cancelTimer;
- (void)dealloc;
- (id)completion;
- (void)setCompletion:;
- (id)scrollView;
- (void).cxx_destruct;
@end
