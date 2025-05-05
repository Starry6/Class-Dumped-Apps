@interface FBKVOController : NSObject
@property (nonatomic) @ observer;
- (void)observe:keyPath:options:action:;
- (void)observe:keyPaths:options:block:;
- (void)_observe:info:;
- (void)_unobserve:;
- (void)_unobserve:info:;
- (void)_unobserveAll;
- (id)initWithObserver:retainObserved:;
- (void)observe:keyPath:options:block:;
- (void)observe:keyPath:options:context:;
- (void)observe:keyPaths:options:action:;
- (void)observe:keyPaths:options:context:;
- (void)unobserve:;
- (void)unobserve:keyPath:;
- (void)unobserveAll;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithObserver:;
- (void).cxx_destruct;
- (id)observer;
+ (id)controllerWithObserver:;
@end
