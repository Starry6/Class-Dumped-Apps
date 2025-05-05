@interface IESECBFFRowSectionLayout : IESECCollectionViewSectionLayout
@property (nonatomic) double contentHeight;
@property (nonatomic) q itemCount;
@property (nonatomic) double totalRowGap;
@property (nonatomic) double contentWidth;
- (void)setTotalRowGap:;
- (id)prepareSectionItemLayoutAttributes;
- (double)sectionContentHeight;
- (double)totalRowGap;
- (long long)itemCount;
- (double)contentHeight;
- (id)initWithConfig:;
- (void)setContentWidth:;
- (double)contentWidth;
- (void)setCollectionView:;
- (void)setContentHeight:;
- (void)setItemCount:;
@end
