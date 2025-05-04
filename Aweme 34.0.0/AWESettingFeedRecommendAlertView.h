@interface AWESettingFeedRecommendAlertView : UIView
@property (nonatomic) UIView mainView;
@property (nonatomic) CAShapeLayer maskLayer;
@property (nonatomic) NSString page;
@property (nonatomic) UIViewController dummyVC;
- (id)aAWEPadModuleAdapter;
- (void)setMainView:;
- (void)realShow;
- (void)closeBtnDidClick;
- (void)setDummyVC:;
- (id)dummyVC;
- (void)cancelBtnDidClick;
- (void)sureBtnDidClick;
- (void)topViewDidClick;
- (void)p_closeWithCompletion:;
- (void)addToWindow;
- (BOOL)show;
- (id)page;
- (void)close;
- (void)setUp;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setPage:;
- (id)maskLayer;
- (void)setMaskLayer:;
- (id)mainView;
+ (Class)aAWEPadModuleAdapterClass;
@end
