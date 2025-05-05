@interface BDASplashDataParse : NSObject
+ (id)preloadParseSplashDataWithData:;
+ (id)getVidWithSplashData:;
+ (void)parseGlobalConfigWithSplashData:;
+ (id)parseSplashDataWithData:;
+ (id)parseSplashModelWithModelData:;
+ (id)parseSplashModelWithModelData:vid:currentTime:;
+ (id)parseSplashModelsWithSplashData:currentTime:;
+ (id)realtimeExpireAdsParseSplashDataWithData:;
+ (id)realtimePreloadParseSplashDataWithData:;
+ (void)trackParseDataIsEmptyData:;
@end
