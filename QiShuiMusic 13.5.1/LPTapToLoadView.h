@interface LPTapToLoadView : LPComponentView
@property (nonatomic) <LPTapToLoadViewDelegate> tapToLoadViewDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_didScroll;
- (BOOL)gestureRecognizer:canPreventGestureRecognizer:;
- (void)_highlightLongPressRecognized:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)animationDidStop:finished:;
- (id)sizeThatFits:;
- (id)initWithHost:;
- (void).cxx_destruct;
- (void)_tapRecognized:;
- (void)layoutComponentView;
- (id)initWithHost:style:;
- (void)_buildViews;
- (id)_createIndeterminateProgressIndicator;
- (void)_animateToProgressView;
- (void)animateOutWithCompletionHandler:;
- (id)tapToLoadViewDelegate;
- (void)setTapToLoadViewDelegate:;
@end
