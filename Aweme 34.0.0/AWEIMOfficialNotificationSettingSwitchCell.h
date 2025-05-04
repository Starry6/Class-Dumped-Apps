@interface AWEIMOfficialNotificationSettingSwitchCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIStackView titleStackView;
@property (nonatomic) UIView<IESIMSettingSwitchProtocol> aSwitch;
@property (nonatomic) AWEIMOfficialNotificationSettingCellViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)switchControlDidChanged:;
- (id)viewModel;
- (void)setSubtitleLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (void)setupUI;
- (id)aSwitch;
- (void)setASwitch:;
- (void)setTitleStackView:;
- (id)titleStackView;
+ (id)identifier;
@end
