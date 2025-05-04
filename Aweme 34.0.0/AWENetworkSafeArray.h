@interface AWENetworkSafeArray : NSObject
@property (nonatomic) NSMutableArray array;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
- (id)syncQueue;
- (id)init;
- (id)array;
- (void)setLock:;
- (id)lock;
- (unsigned long long)count;
- (void)setArray:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)removeObject:;
- (void)addObject:;
- (BOOL)containsObject:;
@end
