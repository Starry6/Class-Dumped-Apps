@interface NSConcreteMapTable : NSMapTable
- (id)dump;
- (id)initWithKeyPointerFunctions:valuePointerFunctions:capacity:;
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (void)rehash;
- (BOOL)mapMember:originalKey:value:;
- (id)copy;
- (void)replaceItem:forExistingKey:;
- (unsigned long long)realCount;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (void)checkCount:;
- (void)grow;
- (void)raiseCountUnderflowException;
- (void)_reclaim;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)keyEnumerator;
- (void)encodeWithCoder:;
- (id)valuePointerFunctions;
- (id)objectForKey:;
- (id)keyPointerFunctions;
- (id)allValues;
- (id)existingItemForSetItem:forAbsentKey:;
- (void)assign:key:value:isNew:;
- (id)description;
- (id)objectEnumerator;
- (void)removeAllItems;
- (unsigned long long)__capacity;
- (void)setItem:forKnownAbsentKey:;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (id)initWithKeyOptions:valueOptions:capacity:;
- (void)setItem:forAbsentKey:;
- (BOOL)containsKeys:values:count:;
- (unsigned long long)rehashAround:;
- (BOOL)isEqual:;
- (void)_setBackingStore;
- (unsigned long long)getKeys:values:;
+ (BOOL)supportsSecureCoding;
@end
