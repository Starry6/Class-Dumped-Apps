@interface NSPersistentStoreCache : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithPersistentStore:;
- (id)initWithValueCallbacks:preserveToManyRelationships:;
@end
