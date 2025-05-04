@interface AWEBaseListSimpleWaterfallLayout : AWEBaseListBaseWaterfallLayout
@property (nonatomic) double contentHeight;
@property (nonatomic) NSMutableArray sectionItemAttributes;
- (void)awelistkit_updateInitialLayoutAttributes:forAppearingCellAtIndexPath:isInserted:;
- (void)awelistkit_updateFinalLayoutAttributes:forAppearingCellAtIndexPath:isDeleted:;
- (id)sectionItemAttributes;
- (void)setSectionItemAttributes:;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)init;
- (id)collectionViewContentSize;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)setContentHeight:;
- (id)targetContentOffsetForProposedContentOffset:;
@end
