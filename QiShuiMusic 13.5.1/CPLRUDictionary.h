@interface CPLRUDictionary : NSObject
- (id)initWithMaximumCapacity:;
- (void)setObject:forKey:;
- (void)_addNodeToFront:;
- (void)dealloc;
- (void)_removeNode:;
- (id)allKeysInLRUOrder;
- (void)_removeNodeFromLinkedList:;
- (id)allKeys;
- (void)removeAllObjects;
- (id)allValuesInLRUOrder;
- (unsigned long long)linkedListCount;
- (id)objectForKeyWithoutAffectingLRU:;
- (id)objectForKey:;
- (id)description;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (void)_moveNodeToFront:;
+ (id)dictionaryWithMaximumCapacity:;
@end
