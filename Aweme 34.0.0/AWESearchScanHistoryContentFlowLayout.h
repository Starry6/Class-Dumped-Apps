@interface AWESearchScanHistoryContentFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) NSMutableArray layoutAttributes;
@property (nonatomic) NSMutableArray itemAttributes;
@property (nonatomic) NSMutableArray headerAttributes;
- (long long)p_itemAttributesIndexOfIndexPath:;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)layoutAttributesForElementsInRect:;
- (id)layoutAttributesForSupplementaryViewOfKind:atIndexPath:;
- (id)init;
- (id)layoutAttributes;
- (void)setLayoutAttributes:;
- (id)collectionViewContentSize;
- (void).cxx_destruct;
- (id)headerAttributes;
- (id)itemAttributes;
- (void)setHeaderAttributes:;
- (void)setItemAttributes:;
@end
