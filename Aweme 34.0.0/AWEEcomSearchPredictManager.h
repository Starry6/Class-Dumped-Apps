@interface AWEEcomSearchPredictManager : NSObject
+ (BOOL)enablePredictFetchRequest;
+ (void)reportPrefetchStatus:cancelReason:requestCreateTime:requestParams:isFromPredict:prefetchID:extraParams:;
+ (BOOL)enablePredictFetchRequestForRepeatSearch;
+ (BOOL)enablePredictFetchRequestForSource:;
+ (void)reportPrefetchStatus:cancelReason:requestCreateTime:requestParams:isFromPredict:prefetchID:;
+ (BOOL)enablePredictFetchRequestForSearchButton;
+ (id)manager;
+ (id)sceneList;
@end
