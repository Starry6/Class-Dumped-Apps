@interface GeckoNetworkService : NSObject
@property (nonatomic) TTHttpTask currentDownloadTask;
@property (nonatomic) NSString currentDownloadIdentity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_downloadPackageWithURLString:completion:;
- (void)cancelDownloadWithIdentity:;
- (id)currentDownloadIdentity;
- (id)currentDownloadTask;
- (void)downloadPackageWithDownloadInfoModel:completion:;
- (void)requestWithMethod:URLString:params:completion:;
- (void)setCurrentDownloadIdentity:;
- (void)setCurrentDownloadTask:;
- (void).cxx_destruct;
@end
