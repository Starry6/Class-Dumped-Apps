@interface WBSDKWebViewErrorView : UIView
@property (nonatomic) UIView buttonsContainer;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIButton retryButton;
- (id)buttonsContainer;
- (void)setButtonsContainer:;
- (void)layoutSubviews;
- (void)hide;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)closeButton;
- (void)setCloseButton:;
- (void)showError:;
- (id)retryButton;
- (void)setRetryButton:;
@end
