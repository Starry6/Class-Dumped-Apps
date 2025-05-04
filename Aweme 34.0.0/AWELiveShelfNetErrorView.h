@interface AWELiveShelfNetErrorView : UIView
@property (nonatomic) UIImageView netErrorImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) AWELiveShelfNetErrorRetryButton retryButton;
- (id)netErrorImageView;
- (void)setNetErrorImageView:;
- (void)configErrorText:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)updateUI;
- (void)setRetryButton:;
- (id)retryButton;
@end
