@interface IESLiveSaaSWebViewNetworkErrorView : UIView
@property (nonatomic) UIImageView errorImageView;
@property (nonatomic) UILabel errorTitleLabel;
@property (nonatomic) UILabel errorSubTitleLabel;
@property (nonatomic) UIButton retryButton;
@property (nonatomic) @? retryBlock;
- (id)errorImageView;
- (id)errorSubTitleLabel;
- (void)setErrorImageView:;
- (void)setErrorSubTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)retry;
- (id)retryButton;
- (void)setRetryButton:;
- (id)errorTitleLabel;
- (void)setErrorTitleLabel:;
- (id)retryBlock;
- (void)setRetryBlock:;
- (void)layoutUI;
@end
