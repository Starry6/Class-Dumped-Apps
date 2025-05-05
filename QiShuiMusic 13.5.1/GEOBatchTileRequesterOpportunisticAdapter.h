@interface GEOBatchTileRequesterOpportunisticAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <GEOOpportunisticDataSourceDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) Q bytesDownloaded;
- (unsigned long long)bytesDownloaded;
- (id)init;
- (void)cancel;
- (void)setDelegate:;
- (id)delegateQueue;
- (void)resume;
- (id)delegate;
- (void).cxx_destruct;
- (void)pause;
- (void)setDelegateQueue:;
- (void)batchTileRequester:receivedData:tileEdition:tileSet:etag:forKey:userInfo:;
- (void)batchTileRequester:failedToLoadKey:error:;
- (void)batchTileRequesterDidFinish:;
- (id)initWithSessionIdentifier:batchTileRequester:manifestManager:diskCache:requestCounter:requestCounterPolicy:;
+ (unsigned long long)policy;
@end
