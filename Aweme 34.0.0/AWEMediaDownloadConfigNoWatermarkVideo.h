@interface AWEMediaDownloadConfigNoWatermarkVideo : AWEMediaDownloadConfigCommon
- (BOOL)needClientEndWaterMark;
- (BOOL)needClientWaterMark;
- (BOOL)isForbidDownload;
- (BOOL)usingUploadCache;
- (BOOL)usingPlayerCache;
- (id)downloadURL;
@end
