@interface AWEEcomSearchStateCell : UICollectionViewCell
@property (nonatomic) UIView liveGoodsEmptyView;
@property (nonatomic) UIImageView searchIcon;
@property (nonatomic) UILabel title;
@property (nonatomic) UIImageView backGroundView;
@property (nonatomic) UILabel bottomTitle;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseModel model;
@property (nonatomic) NSDictionary paramsInfo;
@property (nonatomic) UILabel rightTitle;
@property (nonatomic) UIImageView rightImageView;
- (void)configWithModel:;
- (id)searchIcon;
- (void)setSearchIcon:;
- (void)setSearchInfoDict:;
- (id)paramsInfo;
- (void)setParamsInfo:;
- (id)backGroundView;
- (id)liveGoodsEmptyView;
- (void)jumpStore;
- (void)setLiveGoodsEmptyView:;
- (void)setBackGroundView:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)updateUI;
- (id)rightTitle;
- (void)setRightTitle:;
- (void)setBottomTitle:;
- (id)bottomTitle;
- (id)rightImageView;
- (void)setRightImageView:;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end
