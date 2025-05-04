@interface AWELandscapeLongVideoWatermarkController : AWELandscapeInteractionBaseController
@property (nonatomic) UIView<AWELongVideoWaterMarkViewProtocol> longVideoWaterMarkView;
@property (nonatomic) BOOL isShowed;
- (void)onPlayer:didChangePlaybackStateWithAction:;
- (void)didEnterLandscape;
- (void)setIsShowed:;
- (BOOL)isShowed;
- (void)setLongVideoWaterMarkView:;
- (id)longVideoWaterMarkView;
- (void)needAppearWithModelWithAwemeModel:;
- (void)longVideoWatermarkWillShow;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
