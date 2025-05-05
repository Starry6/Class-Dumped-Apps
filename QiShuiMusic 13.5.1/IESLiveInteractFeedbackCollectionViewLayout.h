@interface IESLiveInteractFeedbackCollectionViewLayout : UICollectionViewFlowLayout
@property (nonatomic) double maximumSpacing;
- (id)layoutAttributesForElementsInRect:;
- (id)collectionViewContentSize;
- (double)maximumSpacing;
- (void)setMaximumSpacing:;
@end
