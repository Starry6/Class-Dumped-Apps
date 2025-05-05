@interface AMSLRUCache : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) NSMutableDictionary backingDictionary;
@property (nonatomic) AMSDoubleLinkedList backingList;
@property (nonatomic) Q count;
@property (nonatomic) Q maxSize;
- (void)setAccessQueue:;
- (void)_removeObjectForKey:;
- (unsigned long long)maxSize;
- (id)accessQueue;
- (void)_addObject:forKey:;
- (id)objectForKey:withCreationBlock:;
- (id)init;
- (void)setObject:forKey:;
- (id)backingDictionary;
- (void)setBackingDictionary:;
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
