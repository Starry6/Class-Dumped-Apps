@interface CalDefaultDictionary : NSObject
- (id)keys;
- (void)setDictionary:;
- (id)initWithDefaultClass:;
- (void)removeAllObjects;
- (id)deepCopy;
- (id)objectForKey:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)copyWithZone:;
- (id)_copyWithZone:isDeepCopy:;
- (id)_mutableCopyOfFinalDictionaryWithZone:isDeepCopy:;
- (id)existingObjectForKey:;
- (id)finalDictionary;
@end
