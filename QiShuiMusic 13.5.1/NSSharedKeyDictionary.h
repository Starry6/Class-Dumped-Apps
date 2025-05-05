@interface NSSharedKeyDictionary : NSMutableDictionary
- (void)HMDP_removeObjectForKey:;
- (void)HMDP_setObject:forKey:;
- (void)getObjects:andKeys:count:;
- (id)keySet;
- (void)setObject:forKey:;
- (void)dealloc;
- (void)setObservationInfo:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithKeySet:;
- (void)enumerateKeysAndObjectsWithOptions:usingBlock:;
- (id)initWithCoder:;
- (id)keyEnumerator;
- (void)encodeWithCoder:;
- (id)objectForKey:;
- (Class)classForCoder;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)sharedKeyDictionaryWithKeySet:;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
@end
