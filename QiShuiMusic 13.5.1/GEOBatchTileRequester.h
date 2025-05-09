@interface GEOBatchTileRequester : NSObject
@property (nonatomic) C reason;
@property (nonatomic) NSString countryCode;
@property (nonatomic) NSString region;
@property (nonatomic) <GEOBatchTileRequesterDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) Q numberOfTilesConsidered;
@property (nonatomic) Q numberOfTilesAttempted;
@property (nonatomic) Q successfulTiles;
@property (nonatomic) Q failedTiles;
@property (nonatomic) Q bytesDownloaded;
- (id)countryCode;
- (unsigned long long)bytesDownloaded;
- (id)init;
- (void)cancel;
- (void)setDelegate:;
- (id)region;
- (void)tileRequesterFinished:;
- (unsigned char)reason;
- (id)delegateQueue;
- (void)resume;
- (void)tileRequester:receivedError:forKey:;
- (id)delegate;
- (void)_finish;
- (void).cxx_destruct;
- (void)didFinishWithError:;
- (void)pause;
- (void)setDelegateQueue:;
- (void)tileRequester:receivedData:tileEdition:tileSetDB:tileSet:etag:forKey:userInfo:;
- (BOOL)cancelKey:;
- (unsigned long long)numberOfTilesConsidered;
- (unsigned long long)numberOfTilesAttempted;
- (unsigned long long)successfulTiles;
- (unsigned long long)failedTiles;
- (id)initWithCountryCode:region:auditToken:requestOptions:log:logPrefix:tileRequesterCreationBlock:;
- (void)determineNextBatchWithQueue:callback:;
- (void)downloadDidSucceedForTile:downloadSize:httpStatus:;
- (void)downloadDidFailForTile:error:;
- (void)_requestNextBatch;
- (void)_startRequesterForKeys:staleCachedETags:staleCachedData:;
@end
