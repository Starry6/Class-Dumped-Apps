@interface PLModelMigrationAction_UpdateDuplicateAssetVisibilityStateMostRelevant : PLModelMigrationAction
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)performActionWithManagedObjectContext:error:;
- (long long)updateLegacyHiddenValueWithManagedObjectContext:error:;
- (long long)updateKeyAssetVisibilityStateWithManagedObjectContext:error:;
@end
