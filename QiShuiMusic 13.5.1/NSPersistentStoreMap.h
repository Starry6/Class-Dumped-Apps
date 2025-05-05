@interface NSPersistentStoreMap : NSObject
- (id)dataForKey:;
- (id)configurationName;
- (void)dealloc;
- (id)initWithStore:;
- (void)addObject:objectIDMap:;
- (void)removeObject:objectIDMap:;
- (void)updateObject:objectIDMap:;
- (id)retainedObjectIDsForRelationship:forObjectID:;
- (id)handleFetchRequest:;
- (unsigned long long)nextPK64;
@end
