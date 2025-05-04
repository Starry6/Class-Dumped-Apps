@interface AWEPropSearchHashtagCollectionLayout : UICollectionViewFlowLayout
@property (nonatomic) {CGSize=dd} currentContentSize;
@property (nonatomic) NSArray attributesArray;
@property (nonatomic) q numberOfRows;
@property (nonatomic) double spacingX;
@property (nonatomic) double SpacingY;
@property (nonatomic) BOOL isMoreThanOneLine;
- (void)setSpacingX:;
- (void)setSpacingY:;
- (double)SpacingY;
- (double)spacingX;
- (void)setAttributesArray:;
- (id)attributesArray;
- (void)setIsMoreThanOneLine:;
- (BOOL)isMoreThanOneLine;
- (id)currentContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:;
- (long long)numberOfRows;
- (id)collectionViewContentSize;
- (void)setCurrentContentSize:;
- (void)setNumberOfRows:;
- (void).cxx_destruct;
@end
