@interface AWEAdFeedCommentEmptyPageView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton retryButton;
@property (nonatomic) <AWEAdFeedCommentEmptyPageViewProtocol> delegate;
- (void)retryButtonClicked;
- (void)updateNetworkEmptyView;
- (void)updateNetworkEmptyViewWhileLoading;
- (void)updateNoResultEmptyView;
- (void)onFeedCommentUIThemeChangeNotification;
- (id)delegate;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setRetryButton:;
- (id)retryButton;
@end
