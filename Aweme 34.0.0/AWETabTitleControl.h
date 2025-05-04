@interface AWETabTitleControl : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView yellowDotView;
@property (nonatomic) UIView indicatorView;
@property (nonatomic) double indicatorWidth;
@property (nonatomic) UIFont selectedFont;
@property (nonatomic) UIFont unselectedFont;
- (id)selectedFont;
- (void)setSelectedFont:;
- (double)indicatorWidth;
- (void)setIndicatorWidth:;
- (id)yellowDotView;
- (void)setYellowDotView:;
- (id)unselectedFont;
- (void)setUnselectedFont:;
- (void)showYellowDot:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (unsigned long long)accessibilityTraits;
- (id)indicatorView;
- (void)setSelected:;
- (BOOL)isAccessibilityElement;
- (void)setIndicatorView:;
- (void)setupUI;
+ (id)collectionView:sizeForTabTitleControlWithTitle:font:;
@end
