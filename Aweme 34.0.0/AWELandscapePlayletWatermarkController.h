@interface AWELandscapePlayletWatermarkController : AWELandscapeInteractionBaseController
@property (nonatomic) UIView<AWEAwemePlayletWaterMarkViewProtocol> playletWaterMarkView;
@property (nonatomic) BOOL isShowed;
- (void)onPlayer:didChangePlaybackStateWithAction:;
- (void)didEnterLandscape;
- (void)setIsShowed:;
- (BOOL)isShowed;
- (id)playletWaterMarkView;
- (void)setPlayletWaterMarkView:;
- (void)playletWatermarkWillShow;
- (void)needAppearWithModelWithAwemeModel:;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
