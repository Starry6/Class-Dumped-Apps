@interface AWEGurdNetworkDelegateImpl : NSObject
@property (nonatomic) TTHttpTask currentDownloadTask;
@property (nonatomic) NSString currentDownloadIdentity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_downloadPackageWithDownloadInfoModel:completion:;
- (void)setCurrentDownloadIdentity:;
- (void)setCurrentDownloadTask:;
- (id)currentDownloadTask;
- (void)_requestWithMethod:URLString:params:completion:;
- (id)currentDownloadIdentity;
- (void)downloadPackageWithDownloadInfoModel:completion:;
- (void)requestWithMethod:URLString:params:completion:;
- (void)cancelDownloadWithIdentity:;
- (id)currentNetworkConnectionString;
- (id)checkIPAddressVersion:;
- (void).cxx_destruct;
@end
