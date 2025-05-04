@interface AWENovelBusinessManager : NSObject
- (BOOL)canOpenURL:;
+ (BOOL)handleNovelReader:urlString:novelPageType:;
+ (BOOL)handleNovelTab:urlString:novelPageType:;
+ (BOOL)handleWebView:urlString:novelPageType:;
+ (BOOL)handleComic:urlString:novelPageType:;
+ (BOOL)handleNovelLynx:urlString:novelPageType:;
+ (BOOL)handleStoryReader:urlString:novelPageType:;
+ (BOOL)handleNovelVip:urlString:novelPageType:;
+ (BOOL)handleNovelVipRestore:urlString:novelPageType:;
+ (void)goNewLynxStoryReaderWithOriginParamObj:urlString:;
+ (void)goNewWebStoryReaderWithOriginParamObj:urlString:;
+ (BOOL)openURL:;
@end
