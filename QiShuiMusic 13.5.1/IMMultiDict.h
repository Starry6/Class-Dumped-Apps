@interface IMMultiDict : NSObject
@property (nonatomic) NSMutableDictionary dictionary;
@property (nonatomic) Q count;
@property (nonatomic) NSArray allKeys;
- (void)setCount:;
- (id)dictionary;
- (id)init;
- (id)objectsForKey:;
- (void)enumerateKeysAndObjectsUsingBlock:;
- (void)setDictionary:;
- (id)allKeys;
- (id)peekObjectForKey:;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (void)removeObject:forKey:;
- (void)removeObjectsForKey:;
- (unsigned long long)countForKey:;
- (void)pushObject:forKey:;
- (id)popObjectForKey:;
- (void)enqueueObject:forKey:;
- (id)headObjectForKey:;
- (id)dequeueObjectForKey:;
@end
