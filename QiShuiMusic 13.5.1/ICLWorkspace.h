@interface ICLWorkspace : NSObject
- (id)init;
- (BOOL)enumerateCryptexContentWithBlock:error:;
- (BOOL)enumerateBuiltInSystemContentWithBlock:error:;
- (void)triggerRegistrationForContainerizedContentWithOptions:completion:;
- (id)bundleIDsForContainerizedContentWithError:;
- (BOOL)triggerRegistrationForContainerizedContentWithOptions:withError:;
- (id)infoForLaunchServicesWithWrapperURL:forBundleIdentifier:withError:;
- (id)bundleRecordsForLaunchServicesWithWrapperURL:forBundleIdentifier:withError:;
+ (id)defaultWorkspace;
+ (id)_connectionToInstallationDaemonWithError:;
@end
