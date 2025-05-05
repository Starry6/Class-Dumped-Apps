@interface GEOProactiveFailedTileDownloader : GEOBatchTileRequester
- (unsigned char)reason;
- (void).cxx_destruct;
- (BOOL)cancelKey:;
- (unsigned long long)numberOfTilesConsidered;
- (id)initWithDiskCache:tileRequesterCreationBlock:;
- (void)_determineKeysToUpdate;
- (void)determineNextBatchWithQueue:callback:;
- (void)_addMoreKeysToListIfNeeded:completionHandler:;
@end
