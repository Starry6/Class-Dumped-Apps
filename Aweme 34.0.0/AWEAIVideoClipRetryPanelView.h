@interface AWEAIVideoClipRetryPanelView : UIView
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) UIView<ACCLoadingViewProtocol> loadingView;
@property (nonatomic) ACCButton retryButton;
- (void)p_retryAction;
- (void)showRetryAfterDelay:;
- (id)init;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
- (id)hintLabel;
- (void)setHintLabel:;
- (void)setRetryButton:;
- (id)retryButton;
- (void)showLoading;
@end
