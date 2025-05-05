@interface STHistoryAnalyzer : NSObject
@property (nonatomic) NSPersistentHistoryToken finalToken;
- (void).cxx_destruct;
- (id)deltasForStore:inManagedObjectContext:sinceToken:ignoreAuthor:finalToken:error:;
- (BOOL)_isChangeInteresting:;
- (id)finalToken;
+ (BOOL)_changedObjectBelongsToFamily:context:;
@end
