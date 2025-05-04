@interface AWECommerceVideoIntelligentManager : HTSService
@property (nonatomic) NSMutableDictionary predictResult;
@property (nonatomic) NSMutableArray preloadedList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preloadedList;
- (void)sendMessageToStrategyWithConfig:type:data:itemId:uri:;
- (void)increaseFeedAdVideoCacheWhenSlowSlideWithModel:isForce:data:config:;
- (void)storePredictResultWithModel:result:;
- (void)deletePredictResultWithModel:;
- (void)triggerCommerceVideoIntelligentPredictWithModel:type:predictResult:;
- (void)setPredictResult:;
- (void)setPreloadedList:;
- (void).cxx_destruct;
- (id)predictResult;
@end
