@interface PHChangeBuilder : NSObject
- (void).cxx_destruct;
- (void)recordTransaction:;
- (void)recordChange:;
- (id)initWithManagedObjectContext:library:options:enumerationContext:;
- (BOOL)changeCountExeedsThreshold:;
- (void)recordNonIncrementalChanges;
- (void)recordChangesInTransaction:;
- (void)_recordInsertChange:withUniquedObjectID:;
- (void)_recordUpdateChange:withUniquedObjectID:;
- (void)_recordChangedProperties:forObjectID:;
- (void)_recordDeleteChange:withUniquedObjectID:;
- (id)_uuidForDeleteChange:uniquedObjectID:;
- (id)buildChange;
- (id)buildPersistentChange;
+ (id)changeWithManagedObjectContext:library:options:transaction:;
+ (id)persistentChangeWithManagedObjectContext:library:options:transaction:enumerationContext:;
@end
