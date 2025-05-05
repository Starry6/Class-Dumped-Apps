@interface IESGurdDefaultNetworkDelegate : NSObject
@property (nonatomic) NSURLSessionDownloadTask currentDownloadTask;
@property (nonatomic) NSString currentDownloadIdentity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelDownloadWithIdentity:;
- (id)currentDownloadIdentity;
- (id)currentDownloadTask;
- (void)downloadPackageWithDownloadInfoModel:completion:;
- (void)requestWithMethod:URLString:params:completion:;
- (void)setCurrentDownloadIdentity:;
- (void)setCurrentDownloadTask:;
- (void).cxx_destruct;
@end
