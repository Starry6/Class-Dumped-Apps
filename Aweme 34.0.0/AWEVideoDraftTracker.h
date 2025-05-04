@interface AWEVideoDraftTracker : NSObject
@property (nonatomic) BOOL isTracked;
@property (nonatomic) NSObject<OS_dispatch_queue> taskQueue;
- (void)asyncOperationBlock:;
- (void)trackDraftInfo;
- (id)init;
- (id)taskQueue;
- (void).cxx_destruct;
- (void)setTaskQueue:;
- (BOOL)isTracked;
- (void)setIsTracked:;
+ (void)trackDraftMarkedAsPendingDelete:status:reason:;
+ (void)trackBackupMarkedAsPendingDelete:status:;
+ (void)trackDraftExpireTimeExtended:days:status:;
+ (void)trackDraftCountChanged:draftContextId:;
+ (void)trackDraftDeleted:status:reason:;
+ (void)trackBackupDeleted:status:;
+ (void)trackDraftDeleteResource:success:error:;
+ (void)trackIfAWEMusicDirHasSpecifiedMusicFile:;
+ (void)trackDraftDBPerformance:function:timeInMillSecond:operation:;
+ (void)trackDraftDBManagement:function:operation:error:status:;
+ (void)trackVideoAssetValidation:errorType:path:error:publishModel:extraParams:;
+ (id)eventNameWithSuffix:prefix:;
+ (void)trackDraftReadFailure:errorType:errorMsg:scene:publishModel:;
+ (void)trackDraftDegradeWithDraftID:creationType:needDegrade:strategyClass:result:errorMsg:publishModel:;
+ (void)trackVideoAssetValidation:errorType:path:error:publishModel:;
+ (void)trackDraftDegradeResult:;
+ (void)trackDraftSave:;
@end
