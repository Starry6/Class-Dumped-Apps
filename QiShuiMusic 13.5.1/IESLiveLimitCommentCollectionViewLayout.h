@interface IESLiveLimitCommentCollectionViewLayout : UICollectionViewFlowLayout
@property (nonatomic) double height;
@property (nonatomic) double midY;
@property (nonatomic) double maxAngle;
- (double)maxAngle;
- (double)midY;
- (void)setMaxAngle:;
- (void)setMidY:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (double)height;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (void)setHeight:;
@end
