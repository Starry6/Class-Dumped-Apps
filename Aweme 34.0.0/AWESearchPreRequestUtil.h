@interface AWESearchPreRequestUtil : NSObject
+ (id)prefetchID;
+ (id)startPassivePredictFetchWithParams:ackCountdownTime:;
+ (void)handleMissPreRequestWithPreRequestTag:result:reason:;
+ (BOOL)enableGeneralPreRequestFromNewWithSearchSource:;
+ (id)searchPreRequestTagOptimizationConfig;
+ (BOOL)enableGeneralRepeatPreRequestFromNewWithSearchSource:;
+ (BOOL)enableGeneralFirstPreRequestFromNewWithSearchSource:;
+ (BOOL)enableAIGCPassivePreRequestWithSearchSource:;
+ (void)startAIGCPassivePredictFetchWithParams:;
+ (BOOL)enableAIGCPreRequest;
+ (BOOL)enableAIGCActivePreRequest;
+ (id)aigcPreRequestAllowDifferKeys;
+ (void)startAIGCActivePredictFetchWithParams:preRequestParams:resultVC:;
+ (id)startPassivePredictFetchWithParams:preRequestTag:ackCountdownTime:;
+ (id)fetchAIGCPassivePreRequestSourceArray;
+ (unsigned long long)tabManagerType:;
+ (BOOL)enableOptimizeFetchSessionID;
+ (BOOL)p_enablePreFetchFromSettingsWithSearchSource:isFirstSearch:;
@end
