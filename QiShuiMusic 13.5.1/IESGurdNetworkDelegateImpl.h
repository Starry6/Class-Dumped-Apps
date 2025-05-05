@interface IESGurdNetworkDelegateImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addTTResponseFilterObject:;
- (void)cancelDownloadWithIdentity:;
- (void)downloadPackageWithDownloadInfoModel:completion:;
- (void)requestWithMethod:URLString:params:completion:;
@end
