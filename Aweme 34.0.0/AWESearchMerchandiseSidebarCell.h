@interface AWESearchMerchandiseSidebarCell : UICollectionViewCell
@property (nonatomic) UILabel title;
@property (nonatomic) UIView indicatorView;
@property (nonatomic) UIView redBadge;
@property (nonatomic) NSString titleText;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) AWEUITheme currentTheme;
@property (nonatomic) BOOL showRedBadge;
- (void)setCurrentTheme:;
- (void)addShapeLayerByRoundingCorners:;
- (void)setShowRedBadge:;
- (id)redBadge;
- (BOOL)showRedBadge;
- (void)setRedBadge:;
- (void)setIsSelected:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (BOOL)isSelected;
- (void)setTitleText:;
- (id)titleText;
- (id)currentTheme;
- (void).cxx_destruct;
- (id)title;
- (void)layoutSubviews;
- (void)setTitle:;
- (id)indicatorView;
- (void)setIndicatorView:;
- (void)setUpUI;
@end
