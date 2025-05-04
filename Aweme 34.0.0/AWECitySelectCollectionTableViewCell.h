@interface AWECitySelectCollectionTableViewCell : UITableViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView bottomLineView;
@property (nonatomic) @? cityIndexSelectedBlock;
- (id)bottomLineView;
- (void)setBottomLineView:;
- (id)createCityItemViewWithName:;
- (void)onClickItem:;
- (id)cityIndexSelectedBlock;
- (void)configWithCities:;
- (void)setCityIndexSelectedBlock:;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
@end
