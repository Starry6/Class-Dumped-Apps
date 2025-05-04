@interface AWEPublishCoverMergeStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) Q autoMergeCustomCoverType;
@property (nonatomic) <ACCPublishMergeImageHelperProtocol> mergeImageHelper;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (void)p_run;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)setAutoMergeCustomCoverType:;
- (void)p_oldRun;
- (void)jumpStage;
- (void)mergePicTemplateCoverWithRetryCount:;
- (void)mergeCover;
- (unsigned long long)autoMergeCustomCoverType;
- (void)mergeVideoCoverWithRetryCount:;
- (void)mergeFail;
- (void)trackEventCoverMergeResult:success:;
- (void)mergeDone;
- (id)mergeImageHelper;
- (void)setMergeImageHelper:;
- (id)init;
- (void)run;
- (void).cxx_destruct;
@end
