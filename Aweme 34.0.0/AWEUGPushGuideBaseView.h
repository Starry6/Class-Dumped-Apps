@interface AWEUGPushGuideBaseView : UIView
@property (nonatomic) AWEUGPushGuideViewModel viewModel;
@property (nonatomic) double showDelayTime;
@property (nonatomic) double beginLoadingTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)showDelayTime;
- (id)initWithGuideViewModel:;
- (void)setBeginLoadingTime:;
- (double)beginLoadingTime;
- (void)realShow;
- (void)setShowDelayTime:;
- (void)loadNetworkResourceWithCompletion:;
- (BOOL)canShowOnCurrentTopVC;
- (void)show;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
