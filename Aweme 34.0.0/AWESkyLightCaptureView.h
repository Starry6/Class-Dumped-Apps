@interface AWESkyLightCaptureView : UIView
@property (nonatomic) @? touchBeganBlock;
@property (nonatomic) UIPanGestureRecognizer panGesture;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) UIView ignoreView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)touchBeganBlock;
- (void)setTouchBeganBlock:;
- (id)ignoreView;
- (id)initWithTouchBeganBlock:;
- (void)setIgnoreView:;
- (void)tapGestureAction:;
- (void)panGestureAction:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)tapGesture;
- (void)setTapGesture:;
- (void)setupUI;
- (id)panGesture;
- (void)setPanGesture:;
@end
