@interface GEOTransitRouteUpdateRequester : NSObject
@property (nonatomic) double initialDelay;
@property (nonatomic) double requestInterval;
@property (nonatomic) NSHashTable updaters;
@property (nonatomic) NSMutableSet processedRequests;
- (void)setInitialDelay:;
- (id)initPrivate;
- (double)requestInterval;
- (void).cxx_destruct;
- (void)setRequestInterval:;
- (double)initialDelay;
- (void)_purgeAllObjects;
- (void)_scheduleUpdateTimerWithInterval:;
- (void)_cancelUpdateTimer;
- (id)updaters;
- (void)_cancelAllRequestsIfNeeded;
- (void)registerRouteUpdater:;
- (void)unregisterRouteUpdater:;
- (void)_processRequests;
- (id)_requestsForUpdaters:;
- (void)_sendRequestForRequests:;
- (id)_uuidsForRequests:;
- (void)_handleResponse:andError:forRequest:;
- (void)_removeRequestsIfApplicable:;
- (id)processedRequests;
+ (id)sharedInstance;
@end
