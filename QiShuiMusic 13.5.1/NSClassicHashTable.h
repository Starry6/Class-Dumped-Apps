@interface NSClassicHashTable : NSHashTable
- (void)removeItem:;
- (id)init;
- (void)dealloc;
- (id)copy;
- (unsigned long long)hash;
- (void)addObject:;
- (void)insertKnownAbsentItem:;
- (void)insertItem:;
- (void)getKeys:count:;
- (id)description;
- (void)removeAllItems;
- (id)allObjects;
- (unsigned long long)count;
- (id)getItem:;
- (BOOL)isEqual:;
@end
