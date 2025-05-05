@interface CNAutocompleteQueryResponseUniqueResultFinder : NSObject
- (void).cxx_destruct;
- (void)removeDuplicateResults;
- (id)initWithResults:duplicateResultHandler:;
- (id)findUniqueResults;
- (void)generateHashes;
- (void)indexHashes;
- (void)resolveDuplicatesWithinIndexes:;
+ (id)findUniqueResults:duplicateResultHandler:;
@end
