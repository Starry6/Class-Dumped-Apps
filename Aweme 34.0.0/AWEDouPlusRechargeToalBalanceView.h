@interface AWEDouPlusRechargeToalBalanceView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel balanceLabel;
@property (nonatomic) UIView bottomLineView;
@property (nonatomic) UIImageView questionView;
- (id)bottomLineView;
- (void)setBottomLineView:;
- (void)clickQuestionView;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setTotalBalance:;
- (id)balanceLabel;
- (id)questionView;
- (void)setQuestionView:;
- (void)setBalanceLabel:;
@end
