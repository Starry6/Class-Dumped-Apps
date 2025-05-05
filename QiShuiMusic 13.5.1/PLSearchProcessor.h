@interface PLSearchProcessor : NSObject
@property (nonatomic) PSIDatabase searchIndex;
- (id)initWithDatabase:;
- (void).cxx_destruct;
- (id)searchIndex;
- (void)performQuery:withResultsHandler:;
- (id)searchResultSectionsForQuery:withAssetResults:assetResultsForCompletions:collectionResults:combineAssetSections:;
- (id)updatedSearchSections:withTopCollectionResults:;
- (id)completionSuggestionsForQuery:withSearchSections:numberOfSuggestions:;
- (double)_scoreForSearchIndexCategory:;
- (id)_alphabeticalSortDescriptors;
- (id)_dateSortDescriptors;
- (id)_numberOfAssetsSortDescriptors;
- (id)_sortDescriptorsForCategoryMask:;
- (id)_searchResultsByCategoryMasksForSearchResults:;
- (id)_combinedFilenameSearchResultsFromSearchResults:inQuery:;
- (id)_completionFilenameResultsForFilenameResults:;
- (void)_extractSearchResultsFromGroupResults:withQuery:resultsHandler:;
- (BOOL)_categoryMaskIsCombinable:;
- (BOOL)_shouldOmitSectionForCategoryMask:;
+ (id)_OCRProcessedGroupResultsFromGroupResults:query:;
+ (id)_singleOCRGroupResultFromOCRGroupResults:query:;
+ (id)_groupResultFromCombinedGroupResults:query:;
+ (id)searchProcessorLog;
@end
