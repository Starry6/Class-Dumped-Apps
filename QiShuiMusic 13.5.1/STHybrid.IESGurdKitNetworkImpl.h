@interface STHybrid.IESGurdKitNetworkImpl : NSObject
- (void)cancelDownloadWithIdentity:;
- (void)downloadPackageWithDownloadInfoModel:completion:;
- (void)requestWithMethod:URLString:params:completion:;
- (id)init;
@end
