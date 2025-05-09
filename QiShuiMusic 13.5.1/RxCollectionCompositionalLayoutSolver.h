@interface RxCollectionCompositionalLayoutSolver : NSObject
@property (nonatomic) RxCollectionLayoutContainer container;
@property (nonatomic) NSArray solutionBookmarks;
@property (nonatomic) RxRTree sectionIndexer;
@property (nonatomic) RxCollectionLayoutSectionGeometryTranslator sectionGeometryTranslator;
@property (nonatomic) NSIndexSet solutionBookmarkIndexesWithPinnedSupplementaryItems;
@property (nonatomic) RxCollectionLayoutAuxillaryItemSolver globalSupplementarySolver;
@property (nonatomic) NSArray globalSupplementaryItems;
@property (nonatomic) @? sectionTransformer;
@property (nonatomic) RxCollectionPreferredSizes globalSupplementaryPreferredSizes;
@property (nonatomic) NSIndexSet orthogonalScrollingSectionIndexes;
@property (nonatomic) {CGSize=dd} actualContentSize;
@property (nonatomic) NSMutableDictionary cachedDecorationAttributes;
@property (nonatomic) NSMutableDictionary cachedItemAttributes;
@property (nonatomic) NSMutableDictionary cachedSupplementaryAttributes;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) __RxDataSourceSnapshotter dataSourceSnapshot;
@property (nonatomic) BOOL estimatesSizes;
@property (nonatomic) BOOL hasOrthogonalScrollingSections;
@property (nonatomic) BOOL hasPinnedSupplementaryItems;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) # invalidationContextClass;
@property (nonatomic) # layoutAttributeClass;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) @ dynamicsConfigurationHandler;
@property (nonatomic) NSArray layoutAttributesForPinnedSupplementaryItems;
@property (nonatomic) NSInteger layoutAxis;
@property (nonatomic) BOOL layoutRTL;
@property (nonatomic) double memoizedScreenScale;
@property (nonatomic) q numberOfSectionsWithTransformVisibleItemsHandler;
@property (nonatomic) RxCollectionCompositionalLayoutSolverOptions options;
@property (nonatomic) BOOL roundsToScreenScale;
@property (nonatomic) @? sectionProvider;
@property (nonatomic) BOOL shouldPerformPhysicalRTLTransforms;
@property (nonatomic) BOOL shouldTransformVisibleItemsDuringContentOffsetChanges;
@property (nonatomic) BOOL shouldUpdateVisibleBoundsForDynamicAnimator;
@property (nonatomic) UITraitCollection traitCollection;
@property (nonatomic) {CGPoint=dd} attributesOffsetFromContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__solve;
- (id)auxillaryHostPinningContentSize;
- (id)effectiveContentSizeForSection:;
- (void)setOrthogonalOffset:forSection:;
- (void)invalidateCachedItemsAttributes;
- (id)sectionProvider;
- (id)__adjustedContentSizeIncludingContainerInsetsForSize:;
- (id)__attributesQueryRectForRect:;
- (id)__attributesQueryRectsForQueryRect:;
- (id)__attributesQueryRectsForQueryRect:offsets:;
- (id)__cachedDecorationAttributesForElementKind:indexPath:;
- (id)__cachedSupplementaryAttributesForElementKind:indexPath:;
- (BOOL)__canResolveWithoutQueryingSectionDefintionsForContainerChange;
- (id)__clampedSolutionSizeForSolution:layoutAxis:scrollsOrthogonally:;
- (void)__computeDeletedItemsAffectingSupplementariesForUpdate:resolveResult:;
- (id)__computeInitialSupplementaryKeysSectionDictForUpdate:;
- (void)__configureLayoutForSections:;
- (id)__createAndCacheLayoutAttributesForDecorationItemAtIndexPath:elementKind:frame:additionalContentInset:zIndex:;
- (id)__createAndCacheLayoutAttributesForItemAtIndexPath:frame:zIndex:;
- (id)__createAndCacheLayoutAttributesForSupplementaryItemAtIndexPath:elementKind:frame:zIndex:;
- (void)__diffNonItemSupplementariesForUpdate:resolveResult:initialSupplementaryKeysSectionDict:;
- (void)__enrichLayoutAttributes:inSection:;
- (id)__firstBookmarkOffset;
- (id)__globalFrameForSolutionFrame:bookmark:;
- (id)__globalSupplementaryFrameOffset;
- (void)__invalidateAllAttributes;
- (void)__invalidateAttributes:;
- (void)__layoutAttributesForElementsInRect:handler:;
- (id)__queryClientForSectionDefintionForSectionIndex:;
- (id)__rebasedPreferredSizesWithDataSourceTranslator:;
- (id)__rebasedSectionLayoutsWithDataSourceTranslator:;
- (void)__recomputeSolutionBookmarksAndContentSize;
- (void)__registerDecorationItemsIfNeeded:;
- (id)__resolveOptionallyQueryingForSectionDefinitions:retainPreferredSizing:;
- (id)__resolveOptionallyQueryingForSectionDefintions:;
- (id)__resolveOptionallyQueryingForSectionDefintions:retainPreferredSizing:;
- (void)__restoreStateFromBookmarkSnapshots:bookmarks:update:effectiveContentInsets:;
- (BOOL)__sectionHasBackgroundDecorationView:;
- (void)__setCachedDecorationAttributesForElementKind:indexPath:attributes:;
- (void)__setCachedSupplementaryAttributesForElementKind:indexPath:attributes:;
- (id)__snapshotBookmarks:;
- (void)__solveWithSectionLayouts:preferredSizesDict:dataSourceSnapshot:update:;
- (void)__updateBookmarkOffsetsForGlobalSupplementariesIfNeeded;
- (void)__updateGeometryTranslator;
- (void)__updateSectionIndexer:frame:solution:section:;
- (id)actualContentSize;
- (id)attributesOffsetFromContainer;
- (id)cachedDecorationAttributes;
- (id)cachedItemAttributes;
- (id)cachedSupplementaryAttributes;
- (id)contentInsetsForSection:;
- (BOOL)elementShouldAppearAbove:;
- (id)extendedAttributesQueryIncludingOrthogonalScrollingRegions:;
- (id)globalSupplementaryItems;
- (id)globalSupplementaryPreferredSizes;
- (id)globalSupplementarySolver;
- (BOOL)hasOrthogonalScrollingSections;
- (BOOL)hasPinnedSupplementaryItems;
- (id)initWithContainer:traitCollection:layoutAxis:dataSourceSnapshot:options:sectionProvider:sectionTransformer:;
- (void)invalidateCachedDecorationAttributes;
- (void)invalidateCachedDecorationAttributesForElementKind:atIndexPaths:;
- (void)invalidateCachedItemsAttributesForItemsAtIndexPaths:;
- (void)invalidateCachedSupplementaryAttributes;
- (void)invalidateCachedSupplementaryAttributesForElementKind:atIndexPaths:;
- (Class)layoutAttributeClass;
- (id)layoutAttributesForPinnedSupplementaryItems;
- (id)layoutRectForSection:;
- (double)memoizedScreenScale;
- (long long)numberOfSectionsWithTransformVisibleItemsHandler;
- (id)orthogonalContentOffsetForProposedContentOffset:section:;
- (id)orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:frame:;
- (id)orthogonalOffsetForSection:;
- (id)orthogonalScrollerController;
- (long long)orthogonalScrollingBehaviorForSection:;
- (double)orthogonalScrollingDecelerationRateForSection:;
- (double)orthogonalScrollingPagingDimensionForSection:;
- (BOOL)orthogonalScrollingSectionDecorationShouldScrollWithContentForIndexPath:elementKind:;
- (id)orthogonalScrollingSectionIndexes;
- (BOOL)orthogonalScrollingSectionSupplementaryShouldScrollWithContentForIndexPath:elementKind:;
- (BOOL)orthogonalScrollingUsesCustomContentOffsetForSection:;
- (id)queryClientForSectionDefintionForSectionIndex:;
- (id)resolveForEndInteractiveReorderingForTargetIndexPaths:;
- (id)resolveForInvalidatedPreferredAttributes:;
- (id)resolveForScrollViewLayoutAdjustmentsChange;
- (id)resolveForUpdatedGlobalSupplementaries:;
- (id)scrollingUnitVectorForOrthogonalScrollingSection:;
- (id)sectionGeometryTranslator;
- (id)sectionIndexer;
- (id)sectionTransformer;
- (void)setActualContentSize:;
- (void)setEstimatesSizes:;
- (void)setGlobalSupplementaryItems:;
- (void)setGlobalSupplementaryPreferredSizes:;
- (void)setGlobalSupplementarySolver:;
- (void)setHasOrthogonalScrollingSections:;
- (void)setMemoizedScreenScale:;
- (void)setNumberOfSectionsWithTransformVisibleItemsHandler:;
- (void)setOrthogonalScrollingSectionIndexes:;
- (void)setSectionGeometryTranslator:;
- (void)setSectionIndexer:;
- (void)setSectionProvider:;
- (void)setSectionTransformer:;
- (void)setShouldPerformPhysicalRTLTransforms:;
- (void)setSolutionBookmarkIndexesWithPinnedSupplementaryItems:;
- (void)setSolutionBookmarks:;
- (BOOL)shouldCenterOrthogonalScrollingPageForSection:;
- (BOOL)shouldInvalidateForNewTraitCollection:;
- (BOOL)shouldPerformPhysicalRTLTransforms;
- (BOOL)shouldTransformVisibleItemsDuringContentOffsetChanges;
- (BOOL)shouldUpdateVisibleBoundsForDynamicAnimator;
- (id)solutionBookmarkIndexesWithPinnedSupplementaryItems;
- (id)solutionBookmarks;
- (BOOL)updatePreferredSizeIfNeededForPreferredLayoutAttributes:withOriginalAttributes:;
- (id)visualizerCoordinateSpace;
- (id)visualizerCoordinateSpaceForSection:;
- (id)layoutAttributesForElementsInRect:;
- (BOOL)layoutRTL;
- (void)setContainer:;
- (id)auxillaryHostContainer;
- (void)setRoundsToScreenScale:;
- (id)dynamicsConfigurationHandler;
- (id)layoutAttributesForItemAtIndexPath:;
- (int)layoutAxis;
- (id)container;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (id)traitCollection;
- (void)setDynamicsConfigurationHandler:;
- (id)dataSourceSnapshot;
- (id)debugDescription;
- (id)auxillaryHostAuxillaryItems;
- (BOOL)roundsToScreenScale;
- (void)setLayoutAxis:;
- (void)setLayoutRTL:;
- (id)options;
- (id)auxillaryHostSupplementaryEnroller;
- (void).cxx_destruct;
- (id)contentSize;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)visualDescription;
- (id)auxillaryHostContentSize;
- (int)auxillaryHostLayoutAxis;
- (Class)invalidationContextClass;
- (long long)auxillaryHostAuxillaryKind;
- (id)auxillaryHostPreferredSizes;
- (double)interSectionSpacing;
- (id)updatePinnedSectionSupplementaryItemsForVisibleBounds:;
- (id)layoutAttributesForSupplementaryViewOfKind:withIndexPath:;
- (id)layoutAttributesForDecorationViewOfKind:withIndexPath:;
- (id)mutatedVisibleItemsForElementsForVisibleBounds:;
- (void)prepareForPreferredAttributesQueryForView:withLayoutAttributes:;
- (id)resolveSolutionForUpdate:;
- (id)resolveForContainerChange:;
- (id)resolveForMarginsChange:;
- (BOOL)estimatesSizes;
@end
