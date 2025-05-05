@interface STMigrationContext : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)initializeCachesWithManagedObjectContext:withCloudStore:andLocalStore:error:;
- (id)updateCloudObjectWithUniqueIdentifier:dictionary:managedObjectContext:error:;
- (BOOL)deleteLocalObjectWithUniqueIdentifier:managedObjectContext:error:;
- (id)deleteCloudObjectWithUniqueIdentifier:managedObjectContext:error:;
@end
