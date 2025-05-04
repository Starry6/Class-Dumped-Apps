@interface AWEASMusicCategoryCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView logoImageView;
@property (nonatomic) UILabel categoryNameLabel;
- (id)categoryNameLabel;
- (void)configWithMusicCategoryModel:;
- (void)setCategoryNameLabel:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setupView;
- (id)logoImageView;
- (void)setLogoImageView:;
+ (double)recommendedHeight;
+ (id)identifier;
@end
