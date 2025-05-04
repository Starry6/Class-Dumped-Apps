@interface AWEBatManDynamicContainer : UIView
@property (nonatomic) UIView<BDXViewContainerProtocol> lynxView;
@property (nonatomic) BOOL hasFP;
@property (nonatomic) BOOL gestureIntercept;
- (id)lynxView;
- (void)setLynxView:;
- (id)shouldInterceptGesture;
- (BOOL)hasFP;
- (void)setHasFP:;
- (BOOL)gestureIntercept;
- (void)setGestureIntercept:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
