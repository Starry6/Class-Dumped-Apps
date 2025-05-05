@interface IESECCommentImpressionSectionLayout : IESECCollectionViewSectionWaterfallLayout
@property (nonatomic) <IESECCommentImpressionSectionLayoutDelegate> layoutDelegate;
- (id)prepareSectionItemLayoutAttributes;
- (id)prepareSectionLayoutAttribute;
- (double)sectionContentHeight;
- (BOOL)shouldInvalidateLayout;
- (void)setLayoutDelegate:;
- (BOOL)invalidateLayoutWithContext:;
- (void).cxx_destruct;
- (id)layoutDelegate;
@end
