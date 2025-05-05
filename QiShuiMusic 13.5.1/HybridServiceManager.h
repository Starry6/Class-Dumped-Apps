@interface HybridServiceManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSRecursiveLock recLock;
@property (nonatomic) NSMutableDictionary protocolToClassMap;
- (id)recLock;
- (void)bindClass:toProtocol:;
- (Class)getClassWithProtocol:;
- (id)protocolToClassMap;
- (id)provideHybridResourceService;
- (void)setProtocolToClassMap:;
- (void)setRecLock:;
- (id)init;
- (void).cxx_destruct;
+ (void)_autoCollectHybridService;
+ (void)bindClass:toProtocol:;
+ (Class)getClassWithProtocol:;
+ (id)getInstanceWithProtocol:;
+ (id)sharedInstance;
@end
