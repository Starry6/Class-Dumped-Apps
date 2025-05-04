@interface AWEFileDownloader : NSObject
@property (nonatomic) NSString directory;
@property (nonatomic) NSString subDirectory;
@property (nonatomic) NSString downloadLoadingTitle;
@property (nonatomic) AWEProgressLoadingView<AWEMediaDownloadLoadingViewProtocol> downloadLoadingView;
- (void)updateWithDirectory:subDirectory:downloadLoadingTitle:;
- (void)downloadFileWithUrl:host:params:fileExtension:showProcess:showToast:completion:;
- (void)setDownloadLoadingTitle:;
- (void)downloadFileWithUrl:params:fileExtension:showProcess:showToast:completion:;
- (id)downloadLoadingTitle;
- (id)downloadLoadingView;
- (id)p_targetDirectory;
- (void)downloadFileWithUrl:andFileName:headerField:fileExtension:showProcess:showToast:completion:;
- (void)downloadFileWithUrl:params:fileExtension:completion:;
- (void)downloadFileWithUrl:andFileName:headerField:fileExtension:completion:;
- (void)setDownloadLoadingView:;
- (id)directory;
- (void).cxx_destruct;
- (void)setDirectory:;
- (void)setSubDirectory:;
- (id)subDirectory;
+ (BOOL)p_createDirectoryAtDocumentsPath:subDirectory:;
+ (id)p_avoidSamePath:;
@end
