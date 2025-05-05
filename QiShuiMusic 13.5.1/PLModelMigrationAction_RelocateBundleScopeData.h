@interface PLModelMigrationAction_RelocateBundleScopeData : PLModelMigrationAction
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)performActionWithManagedObjectContext:error:;
- (long long)renameWithDestinationPath:error:;
- (long long)updateResourceFilePathWithManagedObjectContext:bundleScope:progress:error:;
- (id)legacyPrefixPathWithType:;
@end
