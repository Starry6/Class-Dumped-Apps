@interface IESLiveSaaSCloudResourceServiceImpl : NSObject
@property (nonatomic) TTHttpTask currentDownloadTask;
@property (nonatomic) NSString currentDownloadIdentity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_downloadPackageWithURLString:completion:;
- (void)cancelDownloadWithIdentity:;
- (void)configLiveCloudResourceService;
- (id)currentDownloadIdentity;
- (id)currentDownloadTask;
- (id)dataForFilename:accessKey:channel:;
- (void)downloadPackageWithDownloadInfoModel:completion:;
- (void)gurdLogLevel:logMessage:;
- (BOOL)hasCacheForFilename:accessKey:channel:;
- (id)internalRootDirectoryForAccessKey:channel:;
- (BOOL)isCloudResourcActivatedForAccessKey:channel:;
- (void)registerAccessKey:channels:;
- (void)requestWithMethod:URLString:params:completion:;
- (id)rootDirForAccessKey:channel:;
- (void)setCurrentDownloadIdentity:;
- (void)setCurrentDownloadTask:;
- (void)syncResourcesWithAccessKey:channels:resourceVersion:isForcible:completion:;
- (void).cxx_destruct;
+ (id)shared;
@end
