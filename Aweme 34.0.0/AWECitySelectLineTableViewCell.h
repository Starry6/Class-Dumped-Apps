@interface AWECitySelectLineTableViewCell : UITableViewCell
@property (nonatomic) UILabel cityNameLabel;
@property (nonatomic) UIView bottomLineView;
@property (nonatomic) UIImageView locationIcon;
@property (nonatomic) q nameLabelLeftOffset;
@property (nonatomic) UIColor cityNameColor;
@property (nonatomic) UIColor lineColor;
@property (nonatomic) q pageType;
- (id)bottomLineView;
- (void)setBottomLineView:;
- (id)locationIcon;
- (void)setLocationIcon:;
- (void)setCityNameColor:;
- (void)configWithCity:;
- (void)configWithCity:showL2Only:;
- (void)addLocationIconWithCity:showL2Only:;
- (void)setCityNameLabel:;
- (id)cityNameColor;
- (long long)nameLabelLeftOffset;
- (void)setNameLabelLeftOffset:;
- (void)prepareForReuse;
- (void)setPageType:;
- (id)lineColor;
- (id)initWithStyle:reuseIdentifier:;
- (void)setLineColor:;
- (void).cxx_destruct;
- (long long)pageType;
- (id)cityNameLabel;
@end
