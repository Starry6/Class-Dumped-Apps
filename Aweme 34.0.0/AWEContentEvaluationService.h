@interface AWEContentEvaluationService : NSObject
@property (nonatomic) NSDictionary sceneConfig;
@property (nonatomic) NSDictionary scenePreRule;
@property (nonatomic) NSDictionary sceneSortRule;
@property (nonatomic) AWEContentEvalInfo evalInfo;
@property (nonatomic) NSObject<OS_dispatch_queue> evaluationQueue;
- (void)p_initWithConfig:;
- (id)sceneConfig;
- (void)flushToDisk;
- (void)setSceneConfig:;
- (BOOL)enableSortContentForScene:;
- (id)sortAwemes:withScene:;
- (BOOL)enablePreEvaluateContentForScene:;
- (void)preEvaluateContentForScene:aweme:completion:;
- (id)evaluationQueue;
- (id)scenePreRule;
- (id)evalInfo;
- (id)sceneSortRule;
- (void)removeEvalInfoForItemID:scene:;
- (void)setScenePreRule:;
- (void)setSceneSortRule:;
- (void)setEvalInfo:;
- (void)setEvaluationQueue:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
