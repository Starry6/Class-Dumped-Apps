@interface PLNamedCombinedAssetSearchResult : PLCombinedAssetSearchResult
@property (nonatomic) NSString name;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)contentStrings;
- (id)matchRanges;
- (unsigned long long)matchCount;
- (id)initWithName:assetSearchResults:canOverlap:;
- (BOOL)hasSpecialName;
@end
