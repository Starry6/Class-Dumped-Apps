@interface ICDocCamThumbnailCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)applyLayoutAttributes:;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)imageView;
- (id)accessibilityHint;
- (void)setImageView:;
- (id)indexStringForAccessibility;
- (id)parentCollectionView;
@end
