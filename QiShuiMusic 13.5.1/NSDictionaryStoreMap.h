@interface NSDictionaryStoreMap : NSPersistentStoreMap
- (id)dataForKey:;
- (void)dealloc;
- (id)initWithStore:;
- (id)initWithStore:fromPath:;
- (id)initWithStore:fromArchivedData:;
- (void)addObject:objectIDMap:;
- (void)removeObject:objectIDMap:;
- (void)updateObject:objectIDMap:;
- (id)retainedObjectIDsForRelationship:forObjectID:;
- (id)handleFetchRequest:;
@end
