@interface AWEProfileNetStageTrackDetailComponent : AWEUserDetailBaseComponent
@property (nonatomic) double schemaParsedTime;
@property (nonatomic) BOOL isTraceReported;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)onConfigWithRouterParamDict:;
- (void)userPreloadRecordBegin:;
- (void)userPreloadRecordEnd:error:;
- (void)postPreloadRecordBegin:;
- (void)postPreloadRecordEnd:error:;
- (BOOL)isTraceReported;
- (id)profileCustomNetStageEventWithTrace:rawParams:;
- (void)setIsTraceReported:;
- (void)setSchemaParsedTime:;
- (void)perfTrackPreloadDuration:prefix:;
- (id)perfTrace;
- (id)preloadCustomParams:prefix:baseTime:;
- (double)schemaParsedTime;
- (id)durationToMS:;
- (void)viewDidLoad;
- (void)onInit;
@end
