@interface ISStore : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSURL storeURL;
@property (nonatomic) NSMutableDictionary registry;
@property (nonatomic) {os_unfair_lock_s=I} registryLock;
@property (nonatomic) NSString domain;
- (id)storeURL;
- (id)initWithURL:;
- (id)registryLock;
- (BOOL)writeStoreUnit:;
- (id)registry;
- (id)addUnitWithData:;
- (BOOL)removeUnitForUUID:;
- (void)setRegistryLock:;
- (id)connection;
- (id)unitForUUID:;
- (void).cxx_destruct;
- (id)domain;
@end
