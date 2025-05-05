@interface IESECLiveListToastView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel toastLabel;
@property (nonatomic) NSString nextToast;
@property (nonatomic) BOOL isShowing;
- (void)resetShadowPath;
- (id)nextToast;
- (void)p_resetUI;
- (void)setIsShowing:;
- (void)setNextToast:;
- (void)setToastLabel:;
- (void)showToastViewWithContent:;
- (id)toastLabel;
- (BOOL)isShowing;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
