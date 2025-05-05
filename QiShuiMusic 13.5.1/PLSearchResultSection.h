@interface PLSearchResultSection : NSObject
@property (nonatomic) Q resultTypes;
@property (nonatomic) Q categoryMask;
@property (nonatomic) NSArray searchResults;
@property (nonatomic) NSArray assetSearchResultsForCompletions;
- (id)searchResults;
- (void).cxx_destruct;
- (unsigned long long)resultTypes;
- (unsigned long long)categoryMask;
- (id)initWithResultTypes:categoryMask:searchResults:assetSearchResultsForCompletions:;
- (id)assetSearchResultsForCompletions;
@end
