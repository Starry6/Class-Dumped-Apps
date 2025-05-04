@interface AWERecordBeautyMonitor : NSObject
+ (void)trackBeautyFetchEffectNeedUpdate:;
+ (void)monitorEffectListSucceededWithPanelName:duration:needUpdate:;
+ (void)trackToolPerformanceApiDuration:isSucceeded:isHitCache:error:;
+ (void)trackBeautyFetchEffectListWithIsSucceeded:errorMsg:;
+ (void)monitorBeautyPlatformDownloadFailedWithEffectId:effectName:fileDownloadURLs:duration:downloadError:;
+ (void)trackBeautyResourceDownloadWithEffectId:effectName:fileDownloadURLs:isSucceeded:error:duration:;
+ (void)monitorBeautyPlatformDownloadSucceededWithEffectId:effectName:downloadUrls:duration:;
+ (void)monitorEffectListFailedWithPanelName:errorDesc:errorCode:needUpdate:;
+ (id)p_getIPFromURLList:;
+ (id)p_getIPArrayFromHost:;
@end
