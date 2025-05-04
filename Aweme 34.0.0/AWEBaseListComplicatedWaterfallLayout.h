@interface AWEBaseListComplicatedWaterfallLayout : AWEBaseListBaseWaterfallLayout
@property (nonatomic) double contentHeight;
@property (nonatomic) NSMutableArray sectionItemAttributes;
- (void)awelistkit_updateInitialLayoutAttributes:forAppearingCellAtIndexPath:isInserted:;
- (void)awelistkit_updateFinalLayoutAttributes:forAppearingCellAtIndexPath:isDeleted:;
- (id)awelistkit_extraLayoutAttributesForElementsInRect:;
- (id)sectionItemAttributes;
- (void)setSectionItemAttributes:;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)init;
- (id)indexPathsToDeleteForDecorationViewOfKind:;
- (id)collectionViewContentSize;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)setContentHeight:;
- (id)targetContentOffsetForProposedContentOffset:;
+ (Class)customDecorationViewClass;
@end
