@interface AWESearchFilterSingleSectionView : UIView
@property (nonatomic) AWESearchFilterCollectionView collectionView;
@property (nonatomic) double horizonalPadding;
@property (nonatomic) AWESearchFilterSectionModel model;
@property (nonatomic) AWESearchFilterCollectionViewColorConfiguration colorConfiguration;
- (void)configUI;
- (void)setHorizonalPadding:;
- (double)horizonalPadding;
- (id)colorConfiguration;
- (void)setColorConfiguration:;
- (void)reloadModel:;
- (id)collectionView;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (id)model;
- (void).cxx_destruct;
@end
