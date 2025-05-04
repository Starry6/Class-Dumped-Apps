@interface AWEBaseListFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) <AWEListKitBaseLayoutDelegate> baseDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL enableStickHeader;
- (BOOL)enableStickHeader;
- (BOOL)shouldStickHeaderAtSection:;
- (void)setEnableStickHeader:;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForElementsInRect:;
- (id)layoutAttributesForSupplementaryViewOfKind:atIndexPath:;
- (id)init;
- (id)indexPathsToDeleteForDecorationViewOfKind:;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:atIndexPath:;
- (void)finalizeCollectionViewUpdates;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:atIndexPath:;
- (void)prepareForCollectionViewUpdates:;
- (id)targetContentOffsetForProposedContentOffset:;
- (id)baseDelegate;
- (void)setBaseDelegate:;
+ (Class)customDecorationViewClass;
@end
