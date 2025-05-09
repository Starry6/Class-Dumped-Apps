@interface IGListCollectionViewLayout : UICollectionViewLayout
@property (nonatomic) BOOL stickyHeaders;
@property (nonatomic) double topContentInset;
@property (nonatomic) BOOL stretchToEdge;
@property (nonatomic) q scrollDirection;
@property (nonatomic) double stickyHeaderYOffset;
@property (nonatomic) BOOL showHeaderWhenEmpty;
- (void)_calculateLayoutIfNeeded;
- (id)_rangeOfSectionsInRect:;
- (void)_resetSupplementaryAttributesCache;
- (void)didModifySection:;
- (id)initWithStickyHeaders:scrollDirection:topContentInset:stretchToEdge:;
- (id)initWithStickyHeaders:topContentInset:stretchToEdge:;
- (void)setShowHeaderWhenEmpty:;
- (void)setStickyHeaderYOffset:;
- (BOOL)showHeaderWhenEmpty;
- (double)stickyHeaderYOffset;
- (BOOL)stickyHeaders;
- (BOOL)stretchToEdge;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:atIndexPath:;
- (id)layoutAttributesForItemAtIndexPath:;
- (long long)scrollDirection;
- (id)collectionViewContentSize;
- (id)invalidationContextForBoundsChange:;
- (void)invalidateLayoutWithContext:;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:;
- (id)initWithCoder:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (double)topContentInset;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (Class)invalidationContextClass;
@end
