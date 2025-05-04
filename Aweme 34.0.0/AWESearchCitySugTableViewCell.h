@interface AWESearchCitySugTableViewCell : UITableViewCell
@property (nonatomic) UIView bottomLineView;
@property (nonatomic) UILabel cityNameLabel;
@property (nonatomic) AWECityModel cityModel;
- (id)bottomLineView;
- (void)setBottomLineView:;
- (void)configUI;
- (id)cityModel;
- (void)setCityModel:;
- (void)setCityNameLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)cityNameLabel;
@end
