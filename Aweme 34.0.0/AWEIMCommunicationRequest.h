@interface AWEIMCommunicationRequest : NSObject
+ (BOOL)p_isSceneIsRequstingWithIdentifier:;
+ (void)p_realBatchRequstWithScene:bizTypeArray:paramsArray:lastRequestTime:requestIdentifer:completeBlock:;
+ (void)p_lastRequestTimeWithIdentifier:completion:;
+ (double)p_lastRequestTimeWithIdentifier:;
+ (double)timeFrequencyForSceneTyep:;
+ (double)timeFrequencyForBizType:;
+ (void)p_setLastRequestTime:withIdentifier:;
+ (id)p_sceneTypeStrFromType:;
+ (BOOL)p_isParamValid:;
+ (id)p_bizTypeRequestKeyFromType:;
+ (void)p_setSceneWithIdentifier:isRequesting:;
+ (id)p_bizTypeResponseKeyFromType:;
+ (void)batchRequstWithScene:bizTypeArray:paramsArray:completeBlock:;
@end
