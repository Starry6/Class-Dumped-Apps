@interface PLDiagnostics : NSObject
+ (id)logDirectoryURL;
+ (id)diagnosticsURLs;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:handler:;
+ (id)matchingNameExpression;
+ (id)excludingNameExpression;
+ (unsigned long long)addOSStateHandlerWithTitle:queue:propertyListHandler:;
+ (void)tapToRadarWithTitle:description:;
+ (BOOL)shouldSuppressRadarUserNotificationWithMessage:radarTitle:;
+ (void)fileRadarUserNotificationWithHeader:message:radarTitle:radarDescription:;
+ (id)_memoriesRelatedOutputPathBaseDirectoryWithPathManager:;
+ (id)memoriesAndRelatedDiagnosticsOutputURLWithPathManager:;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolderWithPathManager:;
+ (void)collectMomentsStatWithLibraryContext:completionBlock:;
@end
