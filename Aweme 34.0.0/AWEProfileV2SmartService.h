@interface AWEProfileV2SmartService : AWEBaseSmartServiceImpl
@property (nonatomic) double lastRunTime;
@property (nonatomic) BOOL hasAddObserver;
@property (nonatomic) IESCombineFeatureConfig updateCombineTypeConfig;
@property (nonatomic) NSString latestVisitedItemID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUpdateCombineTypeConfig:;
- (id)updateCombineTypeConfig;
- (void)onTriggerEvent:params:;
- (void)onWillRunCompletion:input:output:;
- (void)onDidRunCompletion:input:output:;
- (BOOL)injectTruthForData:withInput:ext:;
- (BOOL)hasAddObserver;
- (void)setHasAddObserver:;
- (void)setLatestVisitedItemID:;
- (id)latestVisitedItemID;
- (BOOL)shouldTriggerPredictForItemID:;
- (void)setConfig:;
- (double)lastRunTime;
- (void).cxx_destruct;
- (void)setLastRunTime:;
+ (id)abTestConfig;
@end
