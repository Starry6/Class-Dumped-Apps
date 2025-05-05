@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy
- (unsigned long long)indexForKey:;
- (id)keys;
- (void)dealloc;
- (id)initForKeys:count:;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (BOOL)_isDeallocating;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)release;
- (void)encodeWithCoder:;
- (id)retain;
- (BOOL)_tryRetain;
- (unsigned long long)fastIndexForKnownKey:;
- (id)description;
- (unsigned long long)length;
- (Class)classForCoder;
- (id)initForKeys:;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)supportsSecureCoding;
+ (Class)classForKeyedUnarchiver;
@end
