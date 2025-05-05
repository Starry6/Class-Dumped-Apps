@interface NSSQLRowCache : NSPersistentStoreCache
- (void)dealloc;
- (id)initWithPersistentStore:;
- (id)sqlCore;
@end
