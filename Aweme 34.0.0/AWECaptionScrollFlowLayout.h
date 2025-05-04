@interface AWECaptionScrollFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) <AWECaptionScrollFlowLayoutDelegate> delegate;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)targetContentOffsetForProposedContentOffset:withScrollingVelocity:;
@end
