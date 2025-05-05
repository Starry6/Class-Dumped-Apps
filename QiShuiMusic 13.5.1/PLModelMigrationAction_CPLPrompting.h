@interface PLModelMigrationAction_CPLPrompting : PLModelMigrationActionPreRepair
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)performActionWithManagedObjectContext:error:;
+ (void)shouldRepromptUserIfNeededWithPathManager:;
+ (void)_setLastWelcomedDBVersion;
+ (void)_resetICPLPrompt;
@end
