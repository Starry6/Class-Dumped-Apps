@interface AWECommentMediaDownloadConfigCommon : AWECommentMediaDownloadConfig
- (id)awemeModel;
- (id)imageDownloadURL;
- (BOOL)shouldForbidWartermark;
- (BOOL)newDownloadUX;
- (id)downloadSizeTextWithSizeInByte;
- (id)loadingViewTitle;
- (BOOL)isForbidDownload;
- (id)disabledDownloadMessage;
- (BOOL)checkAwemeDownloadSecurity;
- (Class)loadingViewClass;
- (id)destinationURL;
- (id)downloadURL;
@end
