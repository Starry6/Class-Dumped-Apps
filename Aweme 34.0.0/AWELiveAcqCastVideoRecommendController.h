@interface AWELiveAcqCastVideoRecommendController : UIViewController
@property (nonatomic) UIImageView recommendImageView;
@property (nonatomic) UIButton playBtn;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) <AWELiveAcqCastVideoViewModelProtocol> viewModel;
- (id)playBtn;
- (void)setPlayBtn:;
- (id)recommendImageView;
- (void)setRecommendImageView:;
- (void)playBtnDown;
- (void)playBtnUp;
- (id)textLabel;
- (BOOL)isPlaying;
- (id)initWithViewModel:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setIsPlaying:;
- (void)setTextLabel:;
@end
