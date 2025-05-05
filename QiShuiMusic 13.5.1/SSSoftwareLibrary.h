@interface SSSoftwareLibrary : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)getLibraryItemsForITunesStoreItemIdentifiers:completionBlock:;
- (void)getRemovableSytemApplicationsWithCompletionBlock:;
- (void)demoteApplicationWithBundleIdentifier:completionBlock:;
- (void)getLibraryItemForBundleIdentifiers:completionBlock:;
- (void)hasDemotedApplicationsWithCompletionBlock:;
- (void)isInstalledApplicationWithBundleIdentifier:completionBlock:;
- (void)isRemovedSystemApplicationWithBundleIdentifier:completionBlock:;
- (void)playableApplicationsWithBundleIdentifiers:completionBlock:;
- (void)refreshReceiptsWithCompletionBlock:;
- (void)restoreAllDemotedApplicationsWithOptions:completionBlock:;
- (void)restoreDemotedApplicationWithBundleIdentifier:options:completionBlock:;
- (void)restoreRemovedSystemApplicationWithBundleIdentifier:completionBlock:;
- (void)_getItemsWithMessage:completionBlock:;
- (void)_sendDemotionMessage:completionBlock:;
@end
