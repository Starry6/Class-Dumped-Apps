@interface AWEShareCommonTask : AWEShareBaseTask
@property (nonatomic) AWEProgressLoadingView loadingView;
- (void)dismissLoadingView;
- (id)allStages;
- (void)prepareWithChannel:inView:;
- (id)allCustomStages;
- (void)shareStageWillBecomeModal:;
- (void)didFinishPreparingWithSuccess:;
- (void)executeImmediately;
- (void)setLoadingView:;
- (void)finishWithResult:error:;
- (id)loadingView;
- (void).cxx_destruct;
- (void)showLoadingView;
@end
