@interface IESECStoreSearchHistoryLayout : UICollectionViewFlowLayout
@property (nonatomic) NSArray layoutSections;
@property (nonatomic) double contentHeight;
@property (nonatomic) double marginHorizontal;
@property (nonatomic) double marginVertical;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double marginBottom;
@property (nonatomic) <IESECStoreSearchHistoryLayoutDelegate> delegate;
- (id)layoutSections;
- (double)marginHorizontal;
- (double)marginVertical;
- (void)setLayoutSections:;
- (void)setMarginHorizontal:;
- (void)setMarginVertical:;
- (double)contentHeight;
- (id)layoutAttributesForElementsInRect:;
- (double)itemSpacing;
- (void)setItemSpacing:;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (void)setDelegate:;
- (id)collectionViewContentSize;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContentHeight:;
- (double)marginBottom;
- (void)setMarginBottom:;
@end
