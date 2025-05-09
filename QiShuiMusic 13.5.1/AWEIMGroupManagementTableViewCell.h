@interface AWEIMGroupManagementTableViewCell : AWEIMGroupManagementBaseTableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) AWESettingSwitch aSwitch;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) CAShapeLayer dotLayer;
@property (nonatomic) NSString entryLimitDetailString;
- (void)addGroupManagementKVO;
- (void)configWithModel:;
- (id)descLabel;
- (BOOL)enableFansGroupWelcome;
- (id)entryLimitDetailString;
- (id)getWelcomeDescWithGroupManagementInfo:;
- (void)setDescLabel:;
- (void)setDotLayer:;
- (void)setEntryLimitDetailString:;
- (void)switchValueWillChange:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)accessibilityActivate;
- (id)aSwitch;
- (void)setASwitch:;
- (id)dotLayer;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (double)cellHeightWithModel:;
+ (id)identifier;
@end
