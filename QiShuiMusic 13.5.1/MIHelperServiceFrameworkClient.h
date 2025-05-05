@interface MIHelperServiceFrameworkClient : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
- (void)dealloc;
- (void)setXpcConnection:;
- (id)_remoteObjectProxyWithErrorHandler:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:;
- (id)_sharedConnection;
- (void)_invalidateObject;
- (BOOL)purgeInstallCoordinationPromiseStagingDirectoryForUUID:keepStagingDirectory:error:;
- (id)createWrappedAppForInstalledBundleIdentifier:inTargetDirectory:installationInfo:onBehalfOf:error:;
- (id)createWrappedAppForInstalledBundleIdentifier:inTargetDirectory:installationRecords:onBehalfOf:error:;
- (BOOL)createWrappedAppForInstalledBundleIdentifier:atTargetURL:installationInfo:onBehalfOf:error:;
- (BOOL)createWrappedAppForInstalledBundleIdentifier:atTargetURL:installationRecords:onBehalfOf:error:;
- (id)updateWrappedAppAt:forInstalledBundleIdentifier:installationInfo:onBehalfOf:error:;
- (id)updateWrappedAppAt:forInstalledBundleIdentifier:installationRecords:onBehalfOf:error:;
- (BOOL)removeWrappedAppWithBundleID:atURL:error:;
- (id)installMacDeveloperAppAtURL:toURL:targetURLType:error:;
- (BOOL)removeDeveloperAppAtURL:error:;
+ (id)sharedInstance;
@end
