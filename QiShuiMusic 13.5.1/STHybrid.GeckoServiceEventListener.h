@interface STHybrid.GeckoServiceEventListener : NSObject
- (void)gurdDidFinishApplyingPackageForAccessKey:channel:succeed:error:;
- (void)gurdDidAccessCachePackageWithAccessKey:channel:path:;
- (void)gurdDidAccessInternalPackageWithAccessKey:channel:path:dataAccessPolicy:;
- (void)gurdDidCleanCachePackageForAccessKey:channel:;
- (void)gurdDidFinishDownloadingPackageForAccessKey:channel:packageInfo:;
- (void)gurdDidRequestConfigForAccessKey:configsDictionary:;
- (void)gurdDidSyncResourceWithAccessKey:succeed:statusDict:;
- (void)gurdWillDownloadPackageForAccessKey:channel:isPatch:;
- (id)init;
- (void).cxx_destruct;
@end
