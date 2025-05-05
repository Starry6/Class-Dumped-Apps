@interface ISIconManager : NSObject
@property (nonatomic) ISIconCache iconCache;
@property (nonatomic) NSHashTable iconRegistry;
@property (nonatomic) NSHashTable observers;
@property (nonatomic) NSObject<OS_dispatch_queue> internalQueue;
@property (nonatomic) NSXPCConnection connection;
- (void)removeObserver:;
- (void)addObserver:;
- (void)dealloc;
- (void)setIconRegistry:;
- (void)setInternalQueue:;
- (id)iconCache;
- (id)findOrRegisterIcon:;
- (id)connection;
- (void).cxx_destruct;
- (id)iconRegistry;
- (void)setConnection:;
- (void)setObservers:;
- (id)_init;
- (void)setIconCache:;
- (id)observers;
- (id)internalQueue;
+ (id)sharedInstance;
+ (id)serviceName;
@end
