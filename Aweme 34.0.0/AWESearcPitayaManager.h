@interface AWESearcPitayaManager : NSObject
+ (id)sendBackDocsFromPitaya;
+ (id)featureConfig;
+ (id)sendBackDocsFromPitayaWithSafeMainThread:;
+ (void)runPitayaTaskForSearchRequest:callBack:;
+ (void)cleanPitayaData;
+ (BOOL)generalSmartPagingNewFeature;
+ (BOOL)isNeedConfigInfo;
@end
