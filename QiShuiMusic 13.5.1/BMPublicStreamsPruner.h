@interface BMPublicStreamsPruner : NSObject
+ (void)pruneWithInstalledApplications:installedAppExtensions:;
+ (void)pruneWithUninstalledBundleIdentifier:;
+ (void)pruneWithInstalledApplications:installedAppExtensions:activity:;
+ (BOOL)shouldDeleteEvent:withUninstalledApplication:;
+ (BOOL)shouldDeleteEvent:withInstalledApplications:installedAppExtensions:;
+ (BOOL)shouldDeleteAppLaunch:withInstalledApplications:installedAppExtensions:;
+ (void)prunePublicStreamsWithPredicate:;
+ (void)prunePublicStream:configuration:deletionPredicate:;
+ (void)pruneStreamDataStore:deletionPredicate:;
@end
