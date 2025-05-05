@interface SFB389NFCPromptSession : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
@property (nonatomic) @? userResponseHandler;
@property (nonatomic) @? errorHandler;
- (id)init;
- (void)dealloc;
- (id)errorHandler;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void)setErrorHandler:;
- (void)_ensureXPCStarted;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)initWithInitialConfiguration:;
- (id)_getRemoteObjectProxy;
- (void)updateCardConfiguration:;
- (id)userResponseHandler;
- (void)setUserResponseHandler:;
@end
