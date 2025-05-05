@interface WBSCyclerBookmarksTestSuite : NSObject
@property (nonatomic) NSArray operations;
@property (nonatomic) BOOL finished;
@property (nonatomic) WBSCyclerIterationCounter iterationCounter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)operations;
- (void)setUp;
- (id)init;
- (id)_descriptionForErrorCode:;
- (void)tearDown;
- (BOOL)canHandleRequest:;
- (void).cxx_destruct;
- (void)runWithTarget:completionHandler:;
- (void)handleRequest:withTarget:completionHandler:;
- (id)iterationCounter;
- (void)setIterationCounter:;
- (id)relativeProbabilitiesForOperationsWithTopLevelItem:;
- (void)_validateServerBookmarksWithTarget:completionHandler:;
- (void)_validateServerBookmarksAfterInitialSyncWithTarget:completionHandler:;
- (void)_validateServerBookmarksWithTarget:initialBookmarks:completionHandler:;
- (void)_validateServerBookmarksAfterClearingLocallyWithTarget:initialBookmarks:completionHandler:;
- (void)_performCloudKitSecondaryMigrationAfterClearingBookmarksWithTarget:initialBookmarks:completionHandler:;
- (void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:completionHandler:;
- (id)_errorWithCode:userInfo:;
+ (BOOL)setValue:forConfigurationKey:;
@end
