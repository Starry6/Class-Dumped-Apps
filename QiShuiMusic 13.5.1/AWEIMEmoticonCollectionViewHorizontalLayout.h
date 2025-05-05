@interface AWEIMEmoticonCollectionViewHorizontalLayout : UICollectionViewFlowLayout
@property (nonatomic) q columnCount;
@property (nonatomic) q rowCount;
@property (nonatomic) NSMutableArray allAttributes;
@property (nonatomic) IESIMSaaSEmoticonThemeModel themeModel;
- (id)initWithThemeModel:;
- (void)setThemeModel:;
- (id)themeModel;
- (long long)columnCount;
- (id)layoutAttributesForElementsInRect:;
- (long long)rowCount;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)collectionViewContentSize;
- (void)setColumnCount:;
- (void).cxx_destruct;
- (id)allAttributes;
- (void)setAllAttributes:;
- (void)setRowCount:;
@end
