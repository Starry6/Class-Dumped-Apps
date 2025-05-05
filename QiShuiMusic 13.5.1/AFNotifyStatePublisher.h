@interface AFNotifyStatePublisher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithName:queue:;
- (void)dealloc;
- (BOOL)_setState:withToken:;
- (void)_register;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_unregister;
- (void)publishState:;
- (void)publishStateSynchronously:;
- (void)publishStateWithBlock:;
- (void)_notifyWithState:;
- (BOOL)_getState:withToken:;
@end
