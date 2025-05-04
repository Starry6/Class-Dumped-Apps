@interface AWEIMShareLocationSearchResultTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UILabel distanceLabel;
@property (nonatomic) UIView distanceLine;
@property (nonatomic) AWEIMShareLocationSearchItem model;
- (void)__createComponents;
- (id)renderModel:;
- (void)setDistanceLine:;
- (id)distanceLine;
- (id)generateHighlightedString:srcStr:;
- (void)setModel:;
- (void)prepareForReuse;
- (void)touchesCancelled:withEvent:;
- (void)awakeFromNib;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)distanceLabel;
- (void)setDistanceLabel:;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
