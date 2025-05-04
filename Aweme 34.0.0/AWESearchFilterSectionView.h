@interface AWESearchFilterSectionView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWESearchFilterCollectionView collectionView;
@property (nonatomic) double horizonalPadding;
@property (nonatomic) AWESearchFilterSectionModel model;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) UIColor titleColor;
@property (nonatomic) AWESearchFilterCollectionViewColorConfiguration colorConfiguration;
- (BOOL)isNewStyle;
- (void)setIsNewStyle:;
- (void)configUI;
- (void)setHorizonalPadding:;
- (double)horizonalPadding;
- (id)colorConfiguration;
- (void)setColorConfiguration:;
- (void)reloadModel:;
- (void)newConfigUI;
- (id)collectionView;
- (id)titleColor;
- (void)setTitleColor:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
