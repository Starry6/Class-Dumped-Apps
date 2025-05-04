@interface AWESearchWebViewNovelTranscodingManager : NSObject
- (void)reportNovelTranscodeGetServerDataResult:url:totalCost:requestCost:decryptCost:;
- (void)reportNovelTranscodeJSFetchResult:url:injectTime:;
@end
