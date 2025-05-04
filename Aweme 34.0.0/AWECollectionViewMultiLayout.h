@interface AWECollectionViewMultiLayout : UICollectionViewLayout
@property (nonatomic) IGListAdapter listAdapter;
@property (nonatomic) NSMutableDictionary attributesCache;
@property (nonatomic) NSMutableDictionary supplementaryAttributesCache;
@property (nonatomic) NSMutableDictionary decorationAttributesCache;
- (id)attributesCache;
- (void)setAttributesCache:;
- (id)listAdapter;
- (void)setListAdapter:;
- (void)__calculateLayoutIfNeeded;
- (id)_rangeOfSectionsInRect:;
- (void)__resetSupplementaryAttributesCache;
- (id)decorationAttributesCache;
- (id)initWithListAdapter:;
- (id)supplementaryAttributesCache;
- (void)setSupplementaryAttributesCache:;
- (void)setDecorationAttributesCache:;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)layoutAttributesForSupplementaryViewOfKind:atIndexPath:;
- (id)collectionViewContentSize;
- (id).cxx_construct;
- (void).cxx_destruct;
@end
