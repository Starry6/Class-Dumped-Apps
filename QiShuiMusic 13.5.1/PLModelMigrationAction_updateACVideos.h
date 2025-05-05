@interface PLModelMigrationAction_updateACVideos : PLModelMigrationActionBackground
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)performActionWithManagedObjectContext:error:;
- (id)buildFetchRequest;
+ (long long)actionProgressWeight;
@end
