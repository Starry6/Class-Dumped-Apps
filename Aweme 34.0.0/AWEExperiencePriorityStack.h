@interface AWEExperiencePriorityStack : NSObject
@property (nonatomic) NSMutableArray elementsList;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwLock;
@property (nonatomic) NSString uniqueKey;
- (id)rwLock;
- (void)setRwLock:;
- (id)allStackObjects;
- (id)elementsList;
- (BOOL)containObject:;
- (void)setElementsList:;
- (void)pop;
- (id)peek;
- (void)push:;
- (id)init;
- (id)uniqueKey;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObject:;
- (void)setUniqueKey:;
@end
