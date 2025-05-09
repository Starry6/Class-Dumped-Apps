@interface IESECCollectionViewSectionLayout : NSObject
@property (nonatomic) q section;
@property (nonatomic) double sectionOriginY;
@property (nonatomic) NSArray itemAttributes;
@property (nonatomic) IESECCollectionViewLayoutAttributes sectionLayoutAttribute;
@property (nonatomic) IESECCollectionViewLayoutAttributes sectionSupplementViewLayoutAttribute;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) <IESECCollectionViewLayoutDelegate> delegate;
@property (nonatomic) IESECCollectionViewSectionConfig config;
@property (nonatomic) NSMutableArray calculateAttr;
- (id)layoutAttributesForItemAtIndex:;
- (id)calculateAttr;
- (id)layoutAttributesForItemAtIndexInCalculate:;
- (id)prepareSectionItemLayoutAttributes;
- (id)prepareSectionLayoutAttribute;
- (id)prepareSectionSupplementViewLayoutAttribute;
- (double)sectionContentHeight;
- (id)sectionLayoutAttribute;
- (double)sectionOriginY;
- (id)sectionSupplementViewLayoutAttribute;
- (void)setCalculateAttr:;
- (void)setSectionLayoutAttribute:;
- (void)setSectionOriginY:;
- (void)setSectionSupplementViewLayoutAttribute:;
- (BOOL)shouldInvalidateLayout;
- (void)prepareLayout;
- (void)setConfig:;
- (id)initWithConfig:;
- (void)setDelegate:;
- (BOOL)invalidateLayoutWithContext:;
- (void)setSection:;
- (void)setCollectionView:;
- (id)delegate;
- (void).cxx_destruct;
- (id)config;
- (id)collectionView;
- (long long)section;
- (id)itemAttributes;
- (void)setItemAttributes:;
- (double)sectionHeight;
@end
