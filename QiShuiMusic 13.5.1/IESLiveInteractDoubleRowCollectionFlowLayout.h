@interface IESLiveInteractDoubleRowCollectionFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) double margin;
@property (nonatomic) double height;
@property (nonatomic) NSMutableArray allAttributeCache;
- (id)allAttributeCache;
- (void)setAllAttributeCache:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (void)prepareLayout;
- (id)collectionViewContentSize;
- (double)margin;
- (void)setMargin:;
- (double)height;
- (void)setHeight:;
- (void).cxx_destruct;
@end
