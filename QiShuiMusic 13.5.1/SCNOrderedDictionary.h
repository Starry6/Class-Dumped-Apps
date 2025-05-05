@interface SCNOrderedDictionary : NSObject
- (id)valueForKey:;
- (id)dictionary;
- (void)setValue:forKey:;
- (void)setObject:forKey:;
- (id)keys;
- (void)dealloc;
- (id)copy;
- (id)allKeys;
- (void)removeAllObjects;
- (id)objectForKey:;
- (id)objectAtIndex:;
- (id)allValues;
- (id)description;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (void)applyFunction:withContext:;
- (void)applyBlock:;
- (void)_setupFrom:;
@end
