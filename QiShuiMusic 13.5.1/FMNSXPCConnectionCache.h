@interface FMNSXPCConnectionCache : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> modsSerialQueue;
@property (nonatomic) NSMutableDictionary connectionsByServiceName;
- (id)init;
- (void)dealloc;
- (void)setConnectionsByServiceName:;
- (id)modsSerialQueue;
- (id)resumeConnectionWithConfiguration:;
- (void)setModsSerialQueue:;
- (void).cxx_destruct;
- (id)connectionsByServiceName;
+ (id)sharedCache;
@end
