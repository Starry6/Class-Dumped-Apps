@interface AWEIMEmoticonLoadingView : UIView
@property (nonatomic) UIView loadingView;
@property (nonatomic) UIImageView loadingImageView;
@property (nonatomic) UILabel loadingLabel;
@property (nonatomic) UIView retryView;
@property (nonatomic) UILabel retryTitleLabel;
@property (nonatomic) UILabel retrySubtitleLabel;
@property (nonatomic) UIButton retryButton;
- (void)p_setupUI;
- (id)retryView;
- (void)setRetryView:;
- (void)showRetryView;
- (id)retryTitleLabel;
- (void)setRetryTitleLabel:;
- (id)retrySubtitleLabel;
- (void)setRetrySubtitleLabel:;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void).cxx_destruct;
- (id)loadingLabel;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)setLoadingLabel:;
- (void)setRetryButton:;
- (id)retryButton;
- (id)loadingImageView;
- (void)setLoadingImageView:;
@end
