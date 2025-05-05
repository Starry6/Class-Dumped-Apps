@interface NSClassicMapTable : NSMapTable
- (id)init;
- (void)setObject:forKey:;
- (void)dealloc;
- (BOOL)mapMember:originalKey:value:;
- (id)copy;
- (id)allKeys;
- (void)_reclaim;
- (id)objectForKey:;
- (id)allValues;
- (id)existingItemForSetItem:forAbsentKey:;
- (id)description;
- (void)removeAllItems;
- (void)setItem:forKnownAbsentKey:;
- (unsigned long long)count;
- (void)removeObjectForKey:;
- (BOOL)isEqual:;
- (unsigned long long)getKeys:values:;
@end
