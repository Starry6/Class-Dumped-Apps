@interface AWEPOIDetailFeedUgcCustomerSaysFlowLayout : UICollectionViewLayout
@property (nonatomic) NSMutableArray attributeArray;
@property (nonatomic) NSArray tags;
@property (nonatomic) BOOL expandButtonDidShow;
@property (nonatomic) BOOL forceHideExpandButton;
- (id)attributeArray;
- (BOOL)expandButtonDidShow;
- (BOOL)forceHideExpandButton;
- (void)setAttributeArray:;
- (void)setExpandButtonDidShow:;
- (void)setForceHideExpandButton:;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)layoutAttributesForElementsInRect:;
- (id)tags;
- (void)setTags:;
- (id)collectionViewContentSize;
- (void).cxx_destruct;
@end
