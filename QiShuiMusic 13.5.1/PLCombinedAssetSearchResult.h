@interface PLCombinedAssetSearchResult : PLAssetSearchResult
@property (nonatomic) NSMutableArray assetSearchResults;
@property (nonatomic) BOOL resultsCanOverlap;
@property (nonatomic) NSArray groupResults;
- (id)groupDescription;
- (void).cxx_destruct;
- (id)assetUUIDs;
- (unsigned long long)assetCount;
- (id)initWithAssetSearchResults:canOverlap:;
- (id)initWithAssetSearchResult:;
- (void)addAssetSearchResult:isMainSearchResult:;
- (unsigned long long)categoryMask;
- (id)groupResults;
- (id)assetSearchResults;
- (void)setAssetSearchResults:;
- (BOOL)resultsCanOverlap;
- (void)setResultsCanOverlap:;
@end
