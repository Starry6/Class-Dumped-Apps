@interface GEOAnalyticsPipelineRemoteProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportDailyUsageCountType:usageString:usageBool:appId:completion:completionQueue:;
- (id)init;
- (void)setEvalMode:;
- (void)_enqueueOperation:;
- (void)_reportDailySettings:completion:completionQueue:;
- (void)showEvalDataWithVisitorBlock:;
- (void)_reportDailyUsageCountType:usageString:usageBool:appId:completion:completionQueue:;
- (id)_geodXPCConnection;
- (void)processMapsDeletionWithCompletionQueue:completion:;
- (void)reportCuratedCollectionActionType:collectionId:completion:completionQueue:;
- (void)flushEvalData;
- (void)reportDailySettings:completion:completionQueue:;
- (void)_reportCuratedCollectionActionType:collectionId:completion:completionQueue:;
- (void).cxx_destruct;
- (void)_updateSharedStateType:state:completion:completionQueue:;
- (void)reportRRLogMessage:;
- (void)reportLogMsg:uploadBatchId:completionQueue:completion:;
- (void)updateSharedStateType:state:completion:completionQueue:;
- (void)_reportLogMsg:uploadBatchId:completion:completionQueue:;
- (void)runAggregationTasks;
@end
