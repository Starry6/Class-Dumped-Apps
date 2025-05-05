@interface UIDebuggingInformationHierarchyLayout : UICollectionViewLayout
@property (nonatomic) NSDictionary allAttributes;
@property (nonatomic) NSMutableDictionary allLineAttributes;
@property (nonatomic) <UIDebuggingInformationHierarchyLayoutDelegate> delegate;
- (id)layoutAttributesForElementsInRect:;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:atIndexPath:;
- (id)layoutAttributesForItemAtIndexPath:;
- (void)setDelegate:;
- (id)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:;
- (id)delegate;
- (void).cxx_destruct;
- (void)prepareForCollectionViewUpdates:;
- (void)_recomputeAttributes;
- (id)allAttributes;
- (void)setAllAttributes:;
- (id)allLineAttributes;
- (void)setAllLineAttributes:;
+ (Class)layoutAttributesClass;
@end
