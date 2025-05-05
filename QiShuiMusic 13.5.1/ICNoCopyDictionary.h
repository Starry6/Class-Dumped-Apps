@interface ICNoCopyDictionary : NSMutableDictionary
- (void)getObjects:andKeys:count:;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (void)getObjects:andKeys:;
- (id)objectForKey:;
- (id)allValues;
- (id)objectEnumerator;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)initWithCapacity:;
- (id)copyWithZone:;
- (void)setObject:forUncopiedKey:;
- (id)initWithCFDictionary:;
+ (Class)classForKeyedUnarchiver;
@end
