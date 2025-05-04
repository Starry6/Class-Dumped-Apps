@interface AWEACCDownloadServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)downloadFileWithURLString:targetPath:fixType:headers:progress:completion:;
- (id)downloadFileWithURLString:targetPath:progress:completion:;
- (id)downloadFileWithURLString:targetPath:fixType:progress:completion:;
@end
