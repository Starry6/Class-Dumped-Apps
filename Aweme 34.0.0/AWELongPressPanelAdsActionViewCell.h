@interface AWELongPressPanelAdsActionViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) DUXRadioBox checkBox;
@property (nonatomic) AWELongPressPanelAdsActionViewModel adsActionViewModel;
- (id)checkBox;
- (void)setCheckBox:;
- (void)setAdsActionViewModel:;
- (id)adsActionViewModel;
- (void)updateState;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setUpUI;
@end
