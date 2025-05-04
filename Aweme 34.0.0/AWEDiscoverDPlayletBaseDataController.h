@interface AWEDiscoverDPlayletBaseDataController : AWEListDataController
@property (nonatomic) AWEDiscoverDPlayletBaseDataModel dataModel;
@property (nonatomic) BOOL isActive;
@property (nonatomic) Q dataControllerType;
@property (nonatomic) AWEDiscoverDPlayletPerformanceEvent performanceEvent;
- (void)loadPreviousWithCompletion:;
- (void)reloadWithPullType:Completion:;
- (void)initFromListDataController:withPlayletID:;
- (id)stageMonitorCommonParams:;
- (unsigned long long)dataControllerType;
- (void)setDataControllerType:;
- (void)setPerformanceEvent:;
- (void)setIsActive:;
- (id)initWithDataModel:;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)dataModel;
- (void)setDataModel:;
- (id)performanceEvent;
+ (id)requestPlayletVideoList:cursor:count:pullDown:disableInsertAd:requestParams:completeBlock:;
@end
