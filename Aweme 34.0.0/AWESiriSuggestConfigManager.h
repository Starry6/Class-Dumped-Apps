@interface AWESiriSuggestConfigManager : NSObject
@property (nonatomic) NSMutableDictionary cachedModels;
@property (nonatomic) NSObject<OS_dispatch_queue> helperQueue;
@property (nonatomic) NSMutableDictionary retryCountDic;
@property (nonatomic) q adviceRetryCount;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} rwlock;
- (void)reportSiriSuggestionClicked:sceneType:scheme:;
- (id)siriConfigModelWithType:;
- (id)optimizedSiriConfigModelWithType:;
- (id)cachedModels;
- (id)oldStructDicFromDic:;
- (void)getSiriConfigModelFromPushServiceWithType:completion:extra:usingUGServer:;
- (BOOL)checkCacheTimeHasExpiredWithType:;
- (BOOL)enableSiriRetrySwtich;
- (id)retryCountDic;
- (void)getSiriConfigModelWithType:usingUGServer:usingV3:requestScene:timingType:extra:completion:;
- (void)setCachedModels:;
- (void)setRetryCountDic:;
- (long long)adviceRetryCount;
- (void)setAdviceRetryCount:;
- (id)init;
- (void)dealloc;
- (id)helperQueue;
- (void).cxx_destruct;
- (void)setHelperQueue:;
- (id)rwlock;
- (void)setRwlock:;
+ (id)sharedInstance;
@end
