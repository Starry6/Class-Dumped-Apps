@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView
@property (nonatomic) UIImageView categoryImageView;
- (void)_commonInit;
- (id)init;
- (void)prepareForReuse;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)applyLayoutAttributes:;
- (void).cxx_destruct;
- (void)setCategoryImage:;
- (id)categoryImageView;
- (void)setCategoryImageView:;
+ (id)reuseIdentifier;
@end
