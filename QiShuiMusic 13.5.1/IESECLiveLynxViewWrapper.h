@interface IESECLiveLynxViewWrapper : UIView
@property (nonatomic) PuzzleHybridContainer contentView;
@property (nonatomic) <IESECLigoLynxViewDataProtocol> viewModel;
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) double startLoadTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveContext:;
- (void)viewDidLoadFailedWithUrl:error:;
- (void)didPageVisibilityChange:;
- (id)initWithModel:frame:liveContext:;
- (id)liveContext;
- (id)p_genLynxCardWithModel:frame:;
- (id)p_trackParamsWithModel:;
- (void)setStartLoadTime:;
- (double)startLoadTime;
- (void)viewDidChangeIntrinsicContentSize:withContainerID:;
- (void)viewDidFinishLoadWithURL:;
- (void)viewDidRecieveError:;
- (id)contentView;
- (id)viewModel;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setViewModel:;
@end
