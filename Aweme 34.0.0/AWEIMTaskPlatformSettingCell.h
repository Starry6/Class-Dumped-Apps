@interface AWEIMTaskPlatformSettingCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) DUXSettingSwitch aSwitch;
@property (nonatomic) AWEIMTaskPlatformSettingViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)switchControlDidChanged:;
- (id)viewModel;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)aSwitch;
- (void)setASwitch:;
+ (id)identifier;
@end
