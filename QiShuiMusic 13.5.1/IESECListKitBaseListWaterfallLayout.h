@interface IESECListKitBaseListWaterfallLayout : IESECListKitBaseListBaseWaterfallLayout
@property (nonatomic) NSMutableArray columnHeights;
@property (nonatomic) NSMutableArray sectionItemAttributes;
@property (nonatomic) NSMutableDictionary sectionOriginStickerHeaderSticked;
@property (nonatomic) NSMutableDictionary sectionOriginStickerHeaderFrameY;
@property (nonatomic) <IESECListKitBaseListWaterfallLayoutDelegate> baseDelegate;
@property (nonatomic) BOOL enableStickHeader;
- (long long)columnCountForSection:;
- (id)columnHeights;
- (BOOL)enableStickHeader;
- (id)ieseclistkit_extraLayoutAttributesForElementsInRect:;
- (void)ieseclistkit_updateFinalLayoutAttributes:forAppearingCellAtIndexPath:isDeleted:;
- (void)ieseclistkit_updateInitialLayoutAttributes:forAppearingCellAtIndexPath:isInserted:;
- (BOOL)isSectionHeaderSticked:;
- (unsigned long long)longestColumnIndexInSection:;
- (id)sectionItemAttributes;
- (id)sectionOriginStickerHeaderFrameY;
- (id)sectionOriginStickerHeaderSticked;
- (void)setColumnHeights:;
- (void)setEnableStickHeader:;
- (void)setSectionItemAttributes:;
- (void)setSectionOriginStickerHeaderFrameY:;
- (void)setSectionOriginStickerHeaderSticked:;
- (unsigned long long)shortestColumnIndexInSection:;
- (BOOL)shouldStickHeaderAtSection:;
- (id)layoutAttributesForElementsInRect:;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:atIndexPath:;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:atIndexPath:;
- (id)layoutAttributesForItemAtIndexPath:;
- (id)collectionViewContentSize;
- (id)indexPathsToInsertForDecorationViewOfKind:;
- (BOOL)shouldInvalidateLayoutForBoundsChange:;
- (id)indexPathsToDeleteForDecorationViewOfKind:;
- (void).cxx_destruct;
- (id)targetContentOffsetForProposedContentOffset:;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:atIndexPath:;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:atIndexPath:;
- (id)baseDelegate;
- (void)setBaseDelegate:;
@end
