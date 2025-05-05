@interface PIATrackerService : NSObject
@property (nonatomic) PIABiMapTable globalEventMap;
@property (nonatomic) PIABiMapTable engineEventMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addEvent:categories:engine:;
- (void)addEvent:metrics:categories:engine:;
- (void)addEvent:metrics:engine:;
- (void)clearEvent:engine:;
- (id)engineEventMap;
- (id)eventMapForEngine:;
- (id)eventObjectInMap:event:;
- (void)flushEvent:engine:;
- (id)globalEventMap;
- (id)initService;
- (id)obtainCategoriesAndMetricsDataEvent:engine:;
- (id)obtainCategoriesDataEvent:engine:;
- (id)obtainMetricsDataEvent:engine:;
- (void)reportE2EEvent:params:engine:;
- (void)reportEvent:params:engine:;
- (void)reportFullLineEvent:params:engine:;
- (void)reportFullLineWithParams:engine:;
- (void)setEngineEventMap:;
- (void)setGlobalEventMap:;
- (void).cxx_destruct;
+ (void)executePrepareServiceTask;
@end
