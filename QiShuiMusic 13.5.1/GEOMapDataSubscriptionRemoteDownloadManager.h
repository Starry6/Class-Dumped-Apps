@interface GEOMapDataSubscriptionRemoteDownloadManager : NSObject
@property (nonatomic) <GEOMapDataSubscriptionDownloadManagerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_connection;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)_handleEvent:;
- (id)delegate;
- (void).cxx_destruct;
- (void)startDownloadForSubscriptionIdentifiers:;
- (void)cancelDownloadForSubscriptionIdentifiers:;
- (void)fetchStateForSubscriptionWithIdentifier:callbackQueue:completionHandler:;
- (void)_reconnectIfNecessary;
- (void)_startObservingStateForIdentifier:;
- (void)_stopObservingStateForIdentifier:;
- (void)_receivedStateUpdate:;
@end
