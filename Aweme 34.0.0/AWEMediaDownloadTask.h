@interface AWEMediaDownloadTask : NSObject
@property (nonatomic) NSEnumerator stageEnumerator;
@property (nonatomic) NSMutableArray mutableStages;
@property (nonatomic) AWEMediaDownloadResultInnerItem item;
@property (nonatomic) <AWEMediaDownloadStage> currentStage;
@property (nonatomic) q currentStatus;
@property (nonatomic) double lastStageProgress;
@property (nonatomic) double currentProgress;
@property (nonatomic) <AWEMediaDownloadStage> currentProgressStage;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) @? progressHandler;
@property (nonatomic) @? completionHandler;
@property (nonatomic) AWEMediaDownloadConfig config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentStage:;
- (void)excute;
- (void)downloadStage:didChangeProgress:;
- (void)downloadStageWillRun:;
- (void)downloadStage:didFinishWithResult:error:;
- (void)insertStage:atIndex:;
- (void)appendStage:;
- (void)handleProgressChange:;
- (id)allStages;
- (void)setStageEnumerator:;
- (id)mutableStages;
- (void)prepareToExcute;
- (BOOL)continueToNextStage;
- (id)stageEnumerator;
- (BOOL)shouldRunStage:;
- (void)runStage:;
- (void)handleProgressChangeWithStage:didChangeProgress:;
- (long long)allStageProgressCount;
- (id)currentProgressStage;
- (void)setLastStageProgress:;
- (double)lastStageProgress;
- (void)setCurrentProgressStage:;
- (void)setMutableStages:;
- (void)setCurrentStatus:;
- (void)setConfig:;
- (void)setProgressHandler:;
- (long long)currentStatus;
- (id)progressHandler;
- (id)init;
- (double)currentProgress;
- (id)config;
- (void)setItem:;
- (void)finishWithResult:error:;
- (id)item;
- (void)cancel;
- (void)setCurrentProgress:;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (id)completionHandler;
- (void)setCompletionHandler:;
- (void)setIsFinished:;
- (id)currentStage;
@end
