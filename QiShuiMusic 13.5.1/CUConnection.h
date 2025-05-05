@interface CUConnection : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSString label;
@property (nonatomic) CUEndpoint peerEndpoint;
- (id)init;
- (void)dealloc;
- (void)_invalidated;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)setLabel:;
- (id)label;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)description;
- (void)invalidate;
- (void)registerEventID:options:handler:;
- (void)deregisterEventID:;
- (void)sendEventID:event:options:completion:;
- (void)registerRequestID:options:handler:;
- (void)deregisterRequestID:;
- (void)sendRequestID:request:options:responseHandler:;
- (id)peerEndpoint;
- (void)setPeerEndpoint:;
@end
