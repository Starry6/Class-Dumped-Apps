@interface AWEVideoCoverRecommendTextErrorView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton button;
@property (nonatomic) @? didTapButtonBlock;
- (void)setupSubViews;
- (id)didTapButtonBlock;
- (id)initWithTitleText:buttonText:;
- (void)setDidTapButtonBlock:;
- (void)setButton:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)button;
@end
