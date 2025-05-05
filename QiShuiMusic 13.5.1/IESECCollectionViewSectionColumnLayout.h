@interface IESECCollectionViewSectionColumnLayout : IESECCollectionViewSectionLayout
@property (nonatomic) double contentHeight;
@property (nonatomic) double totalWeight;
@property (nonatomic) NSMutableArray weights;
@property (nonatomic) double totalGap;
@property (nonatomic) double contentWidth;
@property (nonatomic) NSMutableArray itemsWidth;
- (void)buildWeightsWithWeightDic:;
- (id)initWithConfig:weightDic:;
- (id)itemsWidth;
- (id)prepareSectionItemLayoutAttributes;
- (double)sectionContentHeight;
- (void)setItemsWidth:;
- (void)setTotalGap:;
- (double)totalGap;
- (double)contentHeight;
- (id)initWithConfig:;
- (void)setContentWidth:;
- (double)contentWidth;
- (void)setCollectionView:;
- (id)weights;
- (void).cxx_destruct;
- (void)setContentHeight:;
- (void)setWeights:;
- (double)totalWeight;
- (void)setTotalWeight:;
@end
