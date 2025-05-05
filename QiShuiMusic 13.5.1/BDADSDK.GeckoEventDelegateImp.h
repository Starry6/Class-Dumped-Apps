@interface BDADSDK.GeckoEventDelegateImp : NSObject
- (void)gurdDidFinishApplyingPackageForAccessKey:channel:succeed:error:;
- (void)gurdDidFinishDownloadingPackageForAccessKey:channel:packageInfo:;
- (void)gurdWillDownloadPackageForAccessKey:channel:isPatch:;
- (id)init;
- (void).cxx_destruct;
@end
