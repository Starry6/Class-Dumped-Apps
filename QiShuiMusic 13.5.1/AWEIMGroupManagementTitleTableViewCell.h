@interface AWEIMGroupManagementTitleTableViewCell : AWEIMGroupManagementBaseTableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) TTTAttributedLabel descLabel;
@property (nonatomic) UIButton upgradeBtn;
@property (nonatomic) UIView sepView;
- (id)sepView;
- (void)configWithModel:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setSepView:;
- (void)setUpgradeBtn:;
- (id)upgradeBtn;
- (void)upgradeBtnClicked:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)titleLabel;
+ (double)cellHeightWithModel:;
+ (id)descSizeWithModel:;
+ (id)identifier;
@end
