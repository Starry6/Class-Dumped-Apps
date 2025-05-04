@interface AWEECMallSegmentedCollectionViewFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) BOOL fixItemSpacing;
@property (nonatomic) NSArray segmentedItemArray;
- (id)segmentedItemArray;
- (void)setFixItemSpacing:;
- (BOOL)fixItemSpacing;
- (void)setSegmentedItemArray:;
- (id)layoutAttributesForElementsInRect:;
- (id)collectionViewContentSize;
- (void).cxx_destruct;
@end
