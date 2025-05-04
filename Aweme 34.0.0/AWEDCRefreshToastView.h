@interface AWEDCRefreshToastView : UIView
@property (nonatomic) DUXLoadingParticleView refreshLoadingView;
@property (nonatomic) DUXBaseLabel titleLabel;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL disableTransform;
- (void)showOnView:;
- (id)refreshLoadingView;
- (BOOL)disableTransform;
- (void)setDisableTransform:;
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
