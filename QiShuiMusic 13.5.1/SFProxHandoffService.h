@interface SFProxHandoffService : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (void)_cleanup;
- (void)_activated;
- (id)init;
- (void)dealloc;
- (id)dispatchQueue;
- (void)_activateWithCompletion:;
- (void)setDispatchQueue:;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)_completedWithError:;
- (void)_serviceStart;
@end
