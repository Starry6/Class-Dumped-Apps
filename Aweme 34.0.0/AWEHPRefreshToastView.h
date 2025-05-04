@interface AWEHPRefreshToastView : UIView
@property (nonatomic) DUXLoadingParticleView refreshLoadingView;
@property (nonatomic) DUXBaseLabel titleLabel;
@property (nonatomic) BOOL isShowing;
- (void)showOnView:;
- (id)refreshLoadingView;
- (void)setRefreshLoadingView:;
- (id)init;
- (BOOL)isShowing;
- (void)dismiss;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setIsShowing:;
@end
