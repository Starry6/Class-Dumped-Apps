@interface AWEIMOfficialNotificationSettingArrowCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) UIButton button;
@property (nonatomic) AWEIMOfficialNotificationSettingCellViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)renderModel:context:;
- (void)onTapSelection;
- (void)p_refreshSubscribeCellUI;
- (void)p_refreshConfigCellUI;
- (id)viewModel;
- (void)setButton:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)button;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (id)identifier;
@end
