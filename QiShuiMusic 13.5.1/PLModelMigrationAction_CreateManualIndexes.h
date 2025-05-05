@interface PLModelMigrationAction_CreateManualIndexes : PLModelMigrationActionPreRepair
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)performActionWithManagedObjectContext:error:;
+ (BOOL)createManualIndexesDropBeforeCreate:pathManager:;
@end
