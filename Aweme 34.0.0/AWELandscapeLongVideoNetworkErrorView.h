@interface AWELandscapeLongVideoNetworkErrorView : UIView
@property (nonatomic) UIImageView networkErrorImageView;
@property (nonatomic) UILabel networkErrorTitleLabel;
@property (nonatomic) UILabel networkErrorSubTitleLabel;
@property (nonatomic) DUXButton retryButton;
@property (nonatomic) @? didTapRetryButtonBlock;
- (id)networkErrorImageView;
- (void)setNetworkErrorImageView:;
- (id)networkErrorTitleLabel;
- (id)networkErrorSubTitleLabel;
- (id)didTapRetryButtonBlock;
- (void)didTapRetryButton:;
- (void)setDidTapRetryButtonBlock:;
- (void)setNetworkErrorTitleLabel:;
- (void)setNetworkErrorSubTitleLabel:;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setRetryButton:;
- (id)retryButton;
@end
