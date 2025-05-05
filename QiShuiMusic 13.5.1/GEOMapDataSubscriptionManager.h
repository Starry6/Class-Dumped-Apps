@interface GEOMapDataSubscriptionManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)_addStateObserver:;
- (void)_removeStateObserver:;
- (void)startDownloadForSubscriptionIdentifiers:;
- (void)cancelDownloadForSubscriptionIdentifiers:;
- (void)fetchStateForSubscriptionWithIdentifier:callbackQueue:completionHandler:;
- (void)fetchSubscriptionsWithIdentifiers:callbackQueue:completionHandler:;
- (void)removeSubscriptionWithIdentifier:callbackQueue:completionHandler:;
- (void)downloadManager:didUpdateState:forIdentifier:;
- (id)initWithPersistence:downloadManager:;
- (void)fetchAllSubscriptionsWithCallbackQueue:completionHandler:;
- (void)addSubscriptionWithIdentifier:dataTypes:policy:region:expirationDate:callbackQueue:completionHandler:;
- (void)_addSubscriptionWithIdentifier:auditToken:dataTypes:policy:region:expirationDate:callbackQueue:completionHandler:;
- (void)_registerExternallyManagedDownloader:;
- (void)_externallyManagedDownloaderDidFinish:withError:;
- (void)startDownloadForSubscriptionIdentifier:;
- (void)cancelDownloadForSubscriptionIdentifier:;
+ (id)sharedManager;
+ (void)_setSharedManagerUseLocalPersistence:;
@end
