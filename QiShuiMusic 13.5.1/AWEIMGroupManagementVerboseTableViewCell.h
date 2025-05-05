@interface AWEIMGroupManagementVerboseTableViewCell : AWEIMGroupManagementBaseTableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) TTTAttributedLabel descLabel;
@property (nonatomic) AWESettingSwitch aSwitch;
- (void)__handleErrorResponse:error:;
- (void)configWithModel:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)switchValueWillChange:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)accessibilityActivate;
- (id)aSwitch;
- (void)setASwitch:;
+ (id)attributedDescWithText:;
+ (double)cellHeightWithModel:;
+ (id)descSizeWithModel:;
+ (id)identifier;
@end
