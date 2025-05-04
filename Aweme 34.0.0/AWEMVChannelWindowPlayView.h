@interface AWEMVChannelWindowPlayView : AWEMVChannelPlayerCardCell
@property (nonatomic) AWEMVChannelViewModel viewModel;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) q showOrder;
- (void)setEnterMethod:;
- (id)enterMethod;
- (void)playerWillStartNextLoopFinished:;
- (void)modernTransitionDidCompleteWithOffset:;
- (id)appendedLogExtra;
- (void)prepareBackFromDetailPage;
- (void)updateInfoViewHeight;
- (void)addInfoView;
- (void)configWithAwemeModel:viewModel:context:;
- (void)setShowOrder:;
- (long long)showOrder;
- (void)resetSmallWindowTracker;
- (void)afterUpdatePlayerController;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)tapAction;
@end
