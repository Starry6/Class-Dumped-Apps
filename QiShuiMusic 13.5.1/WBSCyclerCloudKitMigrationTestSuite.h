@interface WBSCyclerCloudKitMigrationTestSuite : NSObject
@property (nonatomic) BOOL finished;
@property (nonatomic) WBSCyclerIterationCounter iterationCounter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_descriptionForErrorCode:;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)runWithTarget:completionHandler:;
- (void)_createRandomBookmarkWithTarget:completionHandler:;
- (void)_generateDAVServerIDsForExistingBookmarksWithTarget:completionHandler:;
- (void)_fetchBookmarksPriorToMigrationWithTarget:completionHandler:;
- (void)_migrateToCloudKitWithTarget:completionHandler:;
- (void)_validateResultsOfMigrationWithTarget:completionHandler:;
- (id)_errorWithCode:;
+ (BOOL)setValue:forConfigurationKey:;
@end
