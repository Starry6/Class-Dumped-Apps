@interface AWEScreenCastControlViewConfig : NSObject
@property (nonatomic) BDSCViewModel viewModel;
@property (nonatomic) BDSCViewModelConfig viewModelConfig;
@property (nonatomic) <AWEScreenCastControlViewInteractiveDelegate> interactiveDelegate;
@property (nonatomic) <AWEScreenCastVideoDelegate> videoDelegate;
- (void)setViewModelConfig:;
- (void)setInteractiveDelegate:;
- (id)viewModelConfig;
- (id)interactiveDelegate;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setVideoDelegate:;
- (id)videoDelegate;
@end
