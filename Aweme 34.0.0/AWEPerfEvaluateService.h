@interface AWEPerfEvaluateService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (float)getInstanceScore;
- (float)getRecentScore;
- (float)getStableScore;
- (id)appLogService;
- (void)triggerBootCollect;
- (id)strategyService;
- (void)registerResultObserver:;
- (void)unregisterResultObserver:;
@end
