@interface AWEGrouponLifeFeedsRecommendAfterClickPlugin : AWEGrouponLifeFeedsBasePlugin
@property (nonatomic) AWEGrouponLifeFeedsRecommendAfterClickTask currentTask;
@property (nonatomic) BOOL lockTask;
@property (nonatomic) BOOL didAppear;
- (void)setDidAppear:;
- (void)didTapComponentView:viewModel:;
- (void)setLockTask:;
- (BOOL)enableRecommendAfterClick;
- (BOOL)lockTask;
- (void)didFetchRecommendAfterClickData:error:viewModel:;
- (id)currentTask;
- (void)setCurrentTask:;
- (BOOL)didAppear;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
@end
