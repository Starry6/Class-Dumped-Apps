@interface BDASKNetworkManager : NSObject
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} lock;
@property (nonatomic) NSMutableDictionary adImpressionMap;
@property (nonatomic) NSObject<OS_dispatch_queue> privateQueue;
- (id)adImpressionMap;
- (void)endImpressionWithSkanParamsString:adEventData:completionHandler:;
- (void)setAdImpressionMap:;
- (void)startImpressionWithSkanParamsString:adEventData:completionHandler:;
- (void)trackEvent:adImpression:extraData:;
- (void)trySendAllEndImpressions;
- (id)privateQueue;
- (void)setPrivateQueue:;
- (id)init;
- (void)dealloc;
- (void)didEnterBackground;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)convertProductParamsWithSKAdParamString:;
+ (id)convertSKAdImpressionParamsWithSKAdParamString:;
+ (id)sharedInstance;
@end
