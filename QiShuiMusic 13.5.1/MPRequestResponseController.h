@interface MPRequestResponseController : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSObject<OS_dispatch_queue> calloutQueue;
@property (nonatomic) @ response;
@property (nonatomic) @ request;
@property (nonatomic) <MPRequestResponseControllerDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)_onQueue_stateDictionary;
- (id)request;
- (id)delegate;
- (id)response;
- (id)calloutQueue;
- (void).cxx_destruct;
- (void)_onQueue_reloadIfNeeded;
- (void)_onQueue_scheduleRetryAfterInterval:;
- (void)_onQueue_updateRequestID;
- (void)_responseDidInvalidate:;
- (void)beginAutomaticResponseLoading;
- (void)setRequest:;
- (void)endAutomaticResponseLoading;
- (void)setResponse:;
- (void)setNeedsReload;
- (id)queue;
- (void)reloadIfNeeded;
- (void)setNeedsReloadForSignificantRequestChange;
@end
