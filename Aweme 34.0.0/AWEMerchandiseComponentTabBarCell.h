@interface AWEMerchandiseComponentTabBarCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView indicatorView;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL isSelected;
- (void)autoLayoutSubviews;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (BOOL)isSelected;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setTitle:;
- (id)indicatorView;
- (void)setIndicatorView:;
@end
