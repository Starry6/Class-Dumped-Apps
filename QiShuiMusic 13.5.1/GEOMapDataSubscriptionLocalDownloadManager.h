@interface GEOMapDataSubscriptionLocalDownloadManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <GEOMapDataSubscriptionDownloadManagerDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)delegate;
- (void).cxx_destruct;
- (id)captureStatePlistWithHints:;
- (void)subscriptionDownloader:didFinishWithError:;
- (void)startDownloadForSubscriptionIdentifiers:;
- (void)cancelDownloadForSubscriptionIdentifiers:;
- (void)fetchStateForSubscriptionWithIdentifier:callbackQueue:completionHandler:;
- (void)didAddSubscription:;
- (void)registerExternallyManagedDownloader:;
- (void)externallyManagedDownloaderDidFinish:withError:;
- (id)initWithTileDB:;
- (id)_createDownloaderForSubscription:;
@end
