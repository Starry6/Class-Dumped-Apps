@interface FilteredMetadataExtractor : IrisVideoMetadataExtractor
@property (nonatomic) NSMutableArray filteredKeysArray;
- (id)init;
- (void).cxx_destruct;
- (void)removeMetadataFromInterpolatedFrameDict:;
- (id)filteredKeysArray;
- (void)setFilteredKeysArray:;
- (int)processFile;
@end
