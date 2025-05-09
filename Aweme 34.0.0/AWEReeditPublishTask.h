@interface AWEReeditPublishTask : AWEPublishCommonTask
@property (nonatomic) AWEResourceUploadParametersResponseModel uploadParameters;
@property (nonatomic) AWEPublishRequestParamStage requestParamStage;
@property (nonatomic) AWEPublishUploadPhotoStage uploadCoverStage;
@property (nonatomic) AWEReeditPublishStage reeditStage;
@property (nonatomic) NSMutableDictionary stageTable;
@property (nonatomic) AWEUploadCoverHelper coverHelper;
@property (nonatomic) NSObject<OS_dispatch_queue> draftQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> draftSemaphore;
@property (nonatomic) AWEResourceUploadParametersResponseModel uploadParamsCache;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) Q flowType;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtraDict:;
- (id)aweme;
- (id)logExtraDict;
- (BOOL)shouldShowProgress;
- (void)setUploadParameters:;
- (id)uploadParameters;
- (void)setCurrentStage:;
- (id)editService;
- (void)setEditService:;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (id)uploadParamsCache;
- (void)setUploadParamsCache:;
- (void)publishStage:didChangeStatus:userInfo:;
- (void)resetPreUploadTask;
- (void)finishStage:;
- (BOOL)hideDraftWhenRetry;
- (void)saveDraftType:completion:isBackup:;
- (id)requestParamStage;
- (void)saveDraftPrepareForExecuteWithCompletion:;
- (void)setRequestParamStage:;
- (void)setCoverHelper:;
- (id)coverHelper;
- (id)uploadCoverStage;
- (void)configStage:status:userInfo:;
- (void)setUploadCoverStage:;
- (void)p_deleteDraftIfNeeded;
- (id)reeditStage;
- (id)stageTable;
- (id)draftQueue;
- (id)draftSemaphore;
- (void)setReeditStage:;
- (void)setStageTable:;
- (void)setDraftQueue:;
- (void)setDraftSemaphore:;
- (void)resume;
- (void)execute;
- (id)initWithModel:;
- (void).cxx_destruct;
- (unsigned long long)flowType;
- (void)setFlowType:;
- (void)setTimeTracker:;
- (id)timeTracker;
@end
