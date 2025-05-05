@interface CSJSplashOuterCallTracker : NSObject
+ (void)logOuterCallWithAdSlot:timeout:;
+ (void)logLoadCreativeErrorWithSlot:materialMeta:imageUrl:error:;
+ (void)logLoadMaterialInvalidWithSlot:materialMeta:availabeType:timeOutDuration:;
+ (void)logLoadTimeoutWithAdSlot:;
+ (void)logOuterCallNoRspWithAdSlot:error:;
+ (void)logOuterCallNoRspWithAdSlot:error:extraDic:;
+ (void)logOuterCallSendWithAdSlot:materialMeta:splashExtraInfoDic:;
+ (void)logOuterCallWithAdSlot:;
+ (void)logTimeDiffTag:label:startTime:materialMeta:;
@end
