@interface AWEMediaDownloadCommentTask : AWEMediaDownloadTask
@property (nonatomic) AWEMediaDownloadLoadingView loadingView;
- (void)downloadStageWillRun:;
- (void)updateErrorMessageWithResult:error:;
- (void)tapticWithResult:;
- (void)setupStagesWithType:;
- (void)setupLoadingView;
- (void)handleProgressChange:;
- (void)setLoadingView:;
- (void)finishWithResult:error:;
- (id)loadingView;
- (id)initWithOptions:;
- (void).cxx_destruct;
+ (id)taskWithOptions:;
@end
