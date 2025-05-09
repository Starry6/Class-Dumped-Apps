@interface AWEAIGCTemplateBusinessTask : NSObject
@property (nonatomic) AWEAIGCBusinessRequestModel requestModel;
@property (nonatomic) AWEAIGCProcessResultModel resultModel;
@property (nonatomic) NSMutableDictionary stageTrackMap;
@property (nonatomic) NSMutableDictionary trackInfo;
@property (nonatomic) double initialTimeInterval;
@property (nonatomic) double lastStageTimeInterval;
@property (nonatomic) <ACCAIGCResourceUploadProtocol> imageUploadProtocol;
@property (nonatomic) double querryStartTimeInterval;
@property (nonatomic) @? interactionResultBlock;
@property (nonatomic) @? completedBlock;
@property (nonatomic) AWEAIGCBusinessScheduleProgress progress;
@property (nonatomic) <AWEAIGCBusinessInjectHandler> handler;
@property (nonatomic) BOOL handleResult;
@property (nonatomic) <IESLCMessageHandlerProtocol> messageHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (void)setCompletedBlock:;
- (id)resultModel;
- (unsigned long long)convertType;
- (id)completedBlock;
- (void)markTaskFinish;
- (void)setRequestModel:;
- (void)setHandleResult:;
- (BOOL)handleResult;
- (void)setResultModel:;
- (BOOL)hasIgnoreAuthor;
- (void)transferAsyncTask;
- (void)stopLongConnectionAndQueryTask;
- (void)startLongConnectionAndQueryTask;
- (void)observerAIProcessBusinessTaskUnifyInteractionCompletion:;
- (void)observerAIProcessBusinessTaskCompletion:;
- (void)observerBusinessProgress:;
- (void)startDelayQueryTask;
- (void)setInteractionResultBlock:;
- (void)setQuerryStartTimeInterval:;
- (void)p_queryCurrentTask;
- (void)stopLongConnection;
- (void)p_handleResultWith:requestModel:error:iSIeslc:;
- (id)interactionResultBlock;
- (double)querryStartTimeInterval;
- (id)getAIGCType;
- (id)stageTrackMap;
- (void)uploadImageList:;
- (id)getTaskId;
- (void)addSLCMessageSubscriber;
- (void)removeSLCMessageSubscriber;
- (void)submitTaskWithImageUploadResult:;
- (id)initWithRequestModel:injectClassHandler:;
- (void)runTaskWithAuthor:error:;
- (id)imageUploadProtocol;
- (void)setStageTrackMap:;
- (void)setImageUploadProtocol:;
- (void)setLastStageTimeInterval:;
- (double)lastStageTimeInterval;
- (void)finishTask:error:;
- (void)p_parseAIProcessServiceResultWith;
- (void)preprocessImages:tos:;
- (id)convertToImageDictWithImagePaths:cachedTOSArray:resultTOSDict:;
- (void)updateTOSCacheWithImagePaths:cachedTOSArray:;
- (void)fillReusedTOSIfNeededWithImages:tos:;
- (void)resizeImagesIfNeededWithImages:tos:;
- (void)setHandler:;
- (id)requestModel;
- (id)handler;
- (id)progress;
- (void).cxx_destruct;
- (void)stopQuery;
- (void)setProgress:;
- (void)setTrackInfo:;
- (id)trackInfo;
- (double)initialTimeInterval;
- (void)setInitialTimeInterval:;
@end
