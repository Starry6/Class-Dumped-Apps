@interface AWEIMAutoDismissLoadingView : UIView
@property (nonatomic) UIView<IESIMLoadingViewProtocol> loadingView;
@property (nonatomic) BOOL touchToDismiss;
@property (nonatomic) @? autoDismissCallback;
- (BOOL)touchToDismiss;
- (void)p_autoDismiss;
- (id)autoDismissCallback;
- (void)manualDismissWithoutCallback;
- (void)setTouchToDismiss:;
- (void)setAutoDismissCallback:;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
+ (id)showOnWindow;
@end
