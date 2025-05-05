@interface PLModelMigrationAction_SetDefaultFaceAnalysisVersion : PLModelMigrationAction
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)performActionWithManagedObjectContext:error:;
+ (long long)actionProgressWeight;
@end
