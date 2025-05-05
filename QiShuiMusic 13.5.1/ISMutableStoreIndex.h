@interface ISMutableStoreIndex : ISStoreIndex
@property (nonatomic) Q initialCapacity;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (void)removeAll;
- (id)initWithStoreFileURL:capacity:;
- (id)data;
- (void)_extendData;
- (unsigned long long)initialCapacity;
- (id)serialQueue;
- (void)_extend;
- (BOOL)addValue:;
- (BOOL)removeValuePassingTest:;
- (void).cxx_destruct;
- (void)performBlock:;
- (BOOL)removeValueForUUID:passingTest:;
@end
