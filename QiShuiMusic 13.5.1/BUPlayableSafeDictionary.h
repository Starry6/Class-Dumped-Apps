@interface BUPlayableSafeDictionary : NSMutableDictionary
@property (nonatomic) NSMutableDictionary buDictionary;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (id)buDictionary;
- (void)setBuDictionary:;
- (id)valueForKey:;
- (id)dictionary;
- (id)init;
- (void)setValue:forKey:;
- (void)setObject:forKey:;
- (id)dispatchQueue;
- (id)allKeys;
- (void)setDispatchQueue:;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)allValues;
- (id)description;
- (unsigned long long)count;
- (void)removeObjectForKey:;
@end
