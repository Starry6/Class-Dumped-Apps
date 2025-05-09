@interface AWEMediaDownloadConfigCommon : AWEMediaDownloadConfig
- (id)watermarkConfig;
- (BOOL)needClientEndWaterMark;
- (BOOL)needClientWaterMark;
- (BOOL)forceRemux;
- (BOOL)shouldForbidWartermark;
- (BOOL)newDownloadUX;
- (id)downloadSizeTextWithSizeInByte;
- (id)loadingViewTitle;
- (BOOL)isForbidDownload;
- (id)disabledDownloadMessage;
- (BOOL)checkAwemeDownloadSecurity;
- (Class)loadingViewClass;
- (BOOL)usingUploadCache;
- (BOOL)usingPlayerCache;
- (BOOL)needCancelToast;
- (BOOL)shouldMuteVideo;
- (BOOL)selfSeeingShouldSaveDirectly;
- (BOOL)checkShouldForbidDownloadByAllowDownload;
- (BOOL)shouldSaveDirectly;
- (BOOL)needAsset;
- (BOOL)enableSaveToAlbumChangeCreateTime;
- (BOOL)forbidWatermark;
- (BOOL)isSuffixScene;
- (BOOL)serverCaptionWatermark;
- (BOOL)serverEndWatermark;
- (BOOL)serverNormalWatermark;
- (double)createTime;
- (id)destinationURL;
- (id)downloadURL;
- (BOOL)isCurrentUser;
@end
