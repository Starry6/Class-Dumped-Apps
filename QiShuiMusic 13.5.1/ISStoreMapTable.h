@interface ISStoreMapTable : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSData data;
@property (nonatomic) {os_unfair_lock_s=I} dataLock;
@property (nonatomic) Q initialCapacity;
- (void)compact;
- (void)removeAll;
- (id)url;
- (void)setBytes:size:forUUID:;
- (id)dataForUUID:;
- (void)enumerateWithBlock:;
- (id)data;
- (void)_extendData;
- (unsigned long long)initialCapacity;
- (void)enumerateWithUUID:block:;
- (void)_extend;
- (void)setUrl:;
- (id)dataLock;
- (void).cxx_destruct;
- (void)setDataLock:;
- (void)_extendWithMultiplyer:;
- (void)addData:forUUID:;
- (id)initWithURL:capacity:;
- (void)removeDataForUUID:passingTest:;
- (void)removeDataForUUID:;
@end
