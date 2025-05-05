@interface SSLRUCache : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) NSMutableDictionary backingDictionary;
@property (nonatomic) SSDoubleLinkedList backingList;
@property (nonatomic) SSLogConfig logConfig;
@property (nonatomic) Q count;
@property (nonatomic) Q maxSize;
- (void)setAccessQueue:;
- (void)_removeObjectForKey:;
- (unsigned long long)maxSize;
- (id)accessQueue;
- (void)_addObject:forKey:;
- (id)init;
- (void)setObject:forKey:;
- (id)logConfig;
- (id)backingDictionary;
- (void)setBackingDictionary:;
- (void)setLogConfig:;
- (void)removeAllObjects;
- (id)backingList;
- (id)initWithMaxSize:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)_count;
- (id)allObjectsAndKeys;
- (unsigned long long)count;
- (void)setBackingList:;
@end
