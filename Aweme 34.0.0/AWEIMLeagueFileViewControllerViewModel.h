@interface AWEIMLeagueFileViewControllerViewModel : NSObject
@property (nonatomic) AWEIMMessageAttachmentDownloadViewModel downloaderViewModel;
@property (nonatomic) double progress;
@property (nonatomic) Q status;
@property (nonatomic) Q openFileStatus;
- (id)checkHasLocalFileWithConfig:;
- (BOOL)isSupportPreviewWithFileType:;
- (void)openFileWithFileUrl:fileType:fileName:;
- (id)generateFileUriMd5String:fileType:;
- (void)openFileUseOtherWithFileUrl:;
- (void)setOpenFileStatus:;
- (unsigned long long)openFileStatus;
- (void)cancelDownloadFileWithConfig:;
- (void)downloadFileWithConfig:;
- (void)deleteDownloadFileWithConfig:;
- (void)setDownloaderViewModel:;
- (id)downloaderViewModel;
- (void)setStatus:;
- (double)progress;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setProgress:;
@end
