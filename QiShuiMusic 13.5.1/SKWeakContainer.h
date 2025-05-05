@interface SKWeakContainer : NSObject
@property (nonatomic) UIView scrollingView;
@property (nonatomic) UIView trackingView;
@property (nonatomic) BOOL wasOnScreen;
- (void).cxx_destruct;
- (id)trackingView;
- (void)setTrackingView:;
- (id)scrollingView;
- (void)setScrollingView:;
- (BOOL)wasOnScreen;
- (void)setWasOnScreen:;
@end
