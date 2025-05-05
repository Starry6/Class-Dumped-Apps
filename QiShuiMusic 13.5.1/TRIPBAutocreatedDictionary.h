@interface TRIPBAutocreatedDictionary : NSMutableDictionary
- (void)setObject:forKey:;
- (void)dealloc;
- (void)enumerateKeysAndObjectsUsingBlock:;
- (void)enumerateKeysAndObjectsWithOptions:usingBlock:;
- (id)initWithObjects:forKeys:count:;
- (void)setObject:forKeyedSubscript:;
- (id)keyEnumerator;
- (id)objectForKeyedSubscript:;
- (id)objectForKey:;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)copyWithZone:;
@end
