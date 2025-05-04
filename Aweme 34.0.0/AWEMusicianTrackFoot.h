@interface AWEMusicianTrackFoot : UIView
@property (nonatomic) DUXLoadingParticleView loadingView;
@property (nonatomic) UIButton button;
@property (nonatomic) @? tapedAction;
@property (nonatomic) BOOL isLoadError;
- (void)setIsLoadError:;
- (void)lunaLoadMoreAction;
- (id)tapedAction;
- (void)p_adjustBtn;
- (void)loadingShow:;
- (void)setTapedAction:;
- (BOOL)isLoadError;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (void)setButton:;
- (id)loadingView;
- (void).cxx_destruct;
- (id)button;
- (void)setupUI;
@end
