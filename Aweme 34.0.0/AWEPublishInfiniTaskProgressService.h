@interface AWEPublishInfiniTaskProgressService : NSObject
@property (nonatomic) double progress;
@property (nonatomic) AWEPublishBaseTask task;
@property (nonatomic) AWEPublishFlowModel flowModel;
@property (nonatomic) NSTimer simulateTimer;
@property (nonatomic) NSMutableArray progressStages;
@property (nonatomic) <AWEPublishInfiniTaskFlowMessageServiceProtocol> flowMessageService;
@property (nonatomic) <AWEPublishInfiniTaskCoordinatorServiceProtocol> coordinatorService;
@property (nonatomic) NSMutableArray lastProgressTimeArray;
@property (nonatomic) NSArray firstProgress80Time;
@property (nonatomic) NSArray firstProgress98Time;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)appDidBecomeActiveNotification;
- (id)aAWEStudioGlobalConfig;
- (void)setFlowModel:;
- (id)flowModel;
- (void)bindServices:;
- (void)stage:didUpdateProgress:;
- (void)simulateProgress;
- (id)lastProgressTimeArray;
- (void)setLastProgressTimeArray:;
- (id)firstProgress80Time;
- (void)setFirstProgress80Time:;
- (id)firstProgress98Time;
- (void)setFirstProgress98Time:;
- (id)flowMessageService;
- (id)coordinatorService;
- (void)setCoordinatorService:;
- (void)resetPreUploadStage;
- (void)setFlowMessageService:;
- (void)stopSimulateProgress;
- (void)callTaskProgressMessage;
- (void)setSimulateTimer:;
- (id)simulateTimer;
- (void)setProgressInfoIfNeeded;
- (id)progressStages;
- (id)progressWeightDict;
- (double)calculateProgress;
- (void)setProgressStages:;
- (void)setTask:;
- (void)dealloc;
- (void)execute;
- (id)task;
- (void)resetProgress;
- (double)progress;
- (void).cxx_destruct;
- (void)setProgress:;
+ (Class)aAWEStudioGlobalConfigClass;
@end
