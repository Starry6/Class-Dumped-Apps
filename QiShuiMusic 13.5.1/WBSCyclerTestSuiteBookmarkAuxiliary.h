@interface WBSCyclerTestSuiteBookmarkAuxiliary : NSObject
@property (nonatomic) float operationBackoffRatio;
- (id)init;
- (id)_descriptionForErrorCode:;
- (void).cxx_destruct;
- (id)_errorWithCode:userInfo:;
- (id)_errorWithCode:;
- (void)fetchAndValidateBookmarksWithExpectedBookmarks:context:completionHandler:;
- (id)validateBookmarks:expectingBookmarks:context:;
- (BOOL)hasPerformedOperation:;
- (void)performOperation:withTarget:completionHandler:;
- (void)performOperation:withTarget:options:completionHandler:;
- (void)resetOperation:;
- (id)_descriptionForBookmark:;
- (id)_attributeStringForBookmark:multiline:;
- (id)_expandedDescriptionForBookmark:;
- (id)_formattedStringForBookmark:indentationLevel:;
- (void)_attemptInitialClearWithTarget:options:completionHandler:;
- (void)_attemptResetToDAVModeWithCompletionHandler:;
- (void)_attemptToGenerateDAVServerIDsForExistingBookmarksWithCompletionHandler:;
- (void)_attemptCloudKitMigrationWithCompletionHandler:;
- (void)_attemptToClearDataWithOptions:completionHandler:;
- (float)operationBackoffRatio;
@end
