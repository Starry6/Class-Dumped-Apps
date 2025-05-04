@interface AWEPublishInfiniMergeImageStage : AWEPublishBaseStage
@property (nonatomic) AWEVideoPublishViewModel publishViewModel;
@property (nonatomic) NSArray results;
@property (nonatomic) {CGSize=dd} canvasSize;
@property (nonatomic) <ACCPublishMergeImageHelperProtocol> mergeImageHelper;
- (id)publishViewModel;
- (void)setPublishViewModel:;
- (id)initWithPublishViewModel:;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)mergeImageHelper;
- (void)setMergeImageHelper:;
- (void)handleOriginImageWithProject:;
- (BOOL)shouldUseCacheForSingleImage;
- (id)itemModelForCache:;
- (void)callbackSucceedWithResults:;
- (BOOL)shouldUseCacheForImages;
- (void)callbackFaild;
- (void)getProcesseImageWithCompletion:;
- (void)setResults:;
- (id)results;
- (void)run;
- (void)setCanvasSize:;
- (void).cxx_destruct;
- (id)canvasSize;
- (void)updateProgress:;
@end
