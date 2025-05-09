@interface CUNFCAdvertiser : NSObject
@property (nonatomic) NSURL advertisementURI;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) @? tagStateChangedHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)interruptionHandler;
- (void)setInterruptionHandler:;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (void)invalidate;
- (void)_invalidateWithError:;
- (void)activate;
- (void)ndefTagSession:didTagStateChange:;
- (void)ndefTagSessionDidEndUnexpectedly:;
- (void)_ensureSessionStarted;
- (void)_ensureSessionStopped;
- (void)_handleSessionStarted:error:;
- (id)advertisementURI;
- (void)setAdvertisementURI:;
- (id)tagStateChangedHandler;
- (void)setTagStateChangedHandler:;
@end
