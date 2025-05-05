@interface PLModelMigrationAction_RepairSingletons : PLModelMigrationActionPreRepair
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)performActionWithManagedObjectContext:error:;
+ (BOOL)repairSingletonObjectsInDatabaseUsingContext:pathManager:error:;
+ (void)_repairRootFolderFixedOrderKeysInStore:context:pathManager:;
@end
