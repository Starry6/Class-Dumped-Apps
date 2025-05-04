@interface AWETeenLandscapeAlbumPanelSlidingTabCell : UICollectionViewCell
@property (nonatomic) UILabel tabTitle;
@property (nonatomic) UIView indicatorView;
- (void)p_setupViews;
- (void)p_layoutViews;
- (void)configCellWithTabTitle:;
- (id)tabTitle;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)indicatorView;
- (void)setSelected:;
- (void)setIndicatorView:;
- (void)setTabTitle:;
+ (id)cellSizeWithTitle:andFont:;
@end
