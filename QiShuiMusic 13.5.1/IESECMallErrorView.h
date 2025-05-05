@interface IESECMallErrorView : UIView
@property (nonatomic) UIImageView emptyImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIButton retryButton;
@property (nonatomic) @? retryButtonClick;
@property (nonatomic) q emptyStyle;
- (id)emptyImageView;
- (long long)emptyStyle;
- (id)retryButtonClick;
- (void)retryButtonClicked;
- (void)setEmptyImageView:;
- (void)setEmptyStyle:;
- (void)setRetryButtonClick:;
- (void)setTitleLabel:;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)retryButton;
- (void)setRetryButton:;
@end
