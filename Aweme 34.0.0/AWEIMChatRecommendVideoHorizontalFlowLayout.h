@interface AWEIMChatRecommendVideoHorizontalFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) NSIndexPath centerIndexPath;
@property (nonatomic) <AWEIMChatRecVideoHorizontalFlowLayoutDelegate> delegate;
- (id)centerIndexPath;
- (void)setCenterIndexPath:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForElementsInRect:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)targetContentOffsetForProposedContentOffset:withScrollingVelocity:;
@end
