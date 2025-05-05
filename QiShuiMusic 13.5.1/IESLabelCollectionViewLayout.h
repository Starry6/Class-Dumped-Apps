@interface IESLabelCollectionViewLayout : UICollectionViewFlowLayout
@property (nonatomic) {UIEdgeInsets=dddd} contentInsets;
@property (nonatomic) double itemSpace;
@property (nonatomic) NSMutableArray attributesArray;
@property (nonatomic) UIFont titleFont;
@property (nonatomic) double maxLayoutWidth;
@property (nonatomic) double lineSpace;
@property (nonatomic) q lineNums;
- (id)attributesArray;
- (double)itemSpace;
- (long long)lineNums;
- (double)lineSpace;
- (double)maxLayoutWidth;
- (void)setAttributesArray:;
- (void)setItemSpace:;
- (void)setLineSpace:;
- (void)setMaxLayoutWidth:;
- (id)layoutAttributesForElementsInRect:;
- (id)titleFont;
- (void)setContentInsets:;
- (id)init;
- (id)contentInsets;
- (void)setTitleFont:;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)collectionViewContentSize;
- (void).cxx_destruct;
@end
