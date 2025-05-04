@interface AWEMediaDownloadConfigImage : AWEMediaDownloadConfigCommon
- (BOOL)needClientEndWaterMark;
- (BOOL)needClientWaterMark;
- (id)disabledDownloadMessage;
- (BOOL)usingPlayerCache;
@end
