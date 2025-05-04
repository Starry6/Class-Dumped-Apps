@interface AWEAIVideoClipBGMManager : NSObject
+ (unsigned long long)AIVideoMusicListType;
+ (void)requestBeatsMusicWithAssetModelArray:defaultMusic:completion:;
+ (void)p_requestHotMusicWithCommercialScene:completion:;
+ (void)p_requestBeatsMusicWithAssetModelArray:defaultMusic:completion:;
+ (id)p_paramsWithSourceAssetModeArray:;
+ (id)p_getRandomListWithAssetModelCount:musicList:defaultMusic:;
+ (void)requestWithSourceAssetModelArray:defaultMusic:createID:isCommercialScene:completion:;
@end
