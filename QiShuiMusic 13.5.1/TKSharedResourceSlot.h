@interface TKSharedResourceSlot : NSObject
@property (nonatomic) @? createObjectBlock;
@property (nonatomic) @? objectDestroyedBlock;
@property (nonatomic) double idleTimeout;
@property (nonatomic) NSObject<OS_dispatch_queue> idleQueue;
- (void)dealloc;
- (id)createObjectBlock;
- (id)initWithName:;
- (void)setObjectDestroyedBlock:;
- (id)resourceWithError:;
- (void)releaseResource;
- (void)setCreateObjectBlock:;
- (void)destroyObject;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (double)idleTimeout;
- (void)setIdleTimeout:;
- (id)idleQueue;
- (id)objectDestroyedBlock;
- (void)setIdleQueue:;
@end
