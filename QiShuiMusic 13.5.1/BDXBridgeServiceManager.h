@interface BDXBridgeServiceManager : NSObject
@property (nonatomic) NSMutableDictionary serviceClasses;
@property (nonatomic) NSMutableDictionary services;
@property (nonatomic) NSRecursiveLock serviceLock;
- (void)setServiceLock:;
- (void)bindProtocl:toClass:;
- (id)serviceClasses;
- (id)serviceLock;
- (void)setServiceClasses:;
- (id)init;
- (void)setServices:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)services;
+ (id)sharedManager;
@end
