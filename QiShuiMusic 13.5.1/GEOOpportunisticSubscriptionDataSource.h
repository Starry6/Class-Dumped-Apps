@interface GEOOpportunisticSubscriptionDataSource : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <GEOOpportunisticDataSourceDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) Q bytesDownloaded;
- (unsigned long long)bytesDownloaded;
- (void)cancel;
- (void)setDelegate:;
- (id)delegateQueue;
- (void)resume;
- (id)delegate;
- (void)_finish;
- (void).cxx_destruct;
- (void)pause;
- (void)setDelegateQueue:;
- (void)subscriptionDownloader:didFinishWithError:;
- (id)initWithSessionIdentifier:diskCache:subscriptionManager:manifestManager:requestCounter:requestCounterPolicy:tileRequesterCreationBlock:;
- (void)_startNextSubscriptionIfPossible;
+ (unsigned long long)policy;
@end
