@interface IESECUICollectionViewLeftAlignedLayout : UICollectionViewFlowLayout
@property (nonatomic) double maximumInteritemSpacing;
- (double)maximumInteritemSpacing;
- (void)setMaximumInteritemSpacing:;
- (id)layoutAttributesForElementsInRect:;
@end
