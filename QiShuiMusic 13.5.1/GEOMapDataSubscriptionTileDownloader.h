@interface GEOMapDataSubscriptionTileDownloader : GEOBatchTileRequester
@property (nonatomic) GEOMapDataSubscription subscription;
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subscription;
- (id)init;
- (unsigned char)reason;
- (id)progress;
- (void).cxx_destruct;
- (void)didFinishWithError:;
- (unsigned long long)numberOfTilesConsidered;
- (void)determineNextBatchWithQueue:callback:;
- (id)initWithSubscription:diskCache:reason:requestOptions:manifestManager:log:logPrefix:tileRequesterCreationBlock:;
- (void)_addMoreKeysToListIfNeeded:cachedETags:cachedData:completionHandler:;
- (void)downloadDidSucceedForTile:downloadSize:httpStatus:;
@end
