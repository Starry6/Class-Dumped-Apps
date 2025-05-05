@interface GEOStaleTileUpdater : GEOBatchTileRequester
- (unsigned char)reason;
- (void).cxx_destruct;
- (BOOL)cancelKey:;
- (unsigned long long)numberOfTilesConsidered;
- (void)determineNextBatchWithQueue:callback:;
- (void)downloadDidSucceedForTile:downloadSize:httpStatus:;
- (id)initWithDiskCache:manifestManager:tileRequesterCreationBlock:;
- (void)_determineStaleKeysToUpdate;
- (void)_addMoreKeysToListIfNeeded:staleCachedETags:staleCachedData:completionHandler:;
- (void)downloadDidFailForTile:error:;
@end
