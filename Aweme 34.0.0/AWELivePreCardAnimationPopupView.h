@interface AWELivePreCardAnimationPopupView : UIView
@property (nonatomic) AWELivePreCardViewModel viewModel;
@property (nonatomic) UIView playerContainer;
@property (nonatomic) UIButton enterButton;
@property (nonatomic) UIView liveTagContainer;
@property (nonatomic) UILabel liveTagLabel;
@property (nonatomic) UIView blurContainer;
@property (nonatomic) UIView tipLabel;
@property (nonatomic) UIView blurView;
@property (nonatomic) UIView popupContainer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton popEnterButton;
@property (nonatomic) UILabel popTipLabel;
@property (nonatomic) IESLiveVideoGiftController videoGiftController;
@property (nonatomic) <AWELiveStreamPlayer> playerController;
@property (nonatomic) q currentPlayState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishPlayingWithError:;
- (void)videoGiftController:willPlayFrame:;
- (long long)currentPlayState;
- (id)enterButton;
- (void)setEnterButton:;
- (void)setCurrentPlayState:;
- (id)playerContainer;
- (void)setPlayerContainer:;
- (id)popupContainer;
- (void)bindVM;
- (id)videoGiftController;
- (void)playVideoGiftResourceIfNeeded;
- (void)tapButton;
- (void)setVideoGiftController:;
- (id)liveTagContainer;
- (id)liveTagLabel;
- (void)removePopup;
- (id)blurContainer;
- (void)setPopupContainer:;
- (id)popEnterButton;
- (id)popTipLabel;
- (void)coverDidClick;
- (void)popupBlurViewIfNeeded;
- (void)playerReloadStreamWithAwemeModel:;
- (id)initWithViewModel:blurContainer:tipLabel:;
- (void)setLiveTagContainer:;
- (void)setLiveTagLabel:;
- (void)setBlurContainer:;
- (void)setPopEnterButton:;
- (void)setPopTipLabel:;
- (void)reloadData;
- (id)blurView;
- (void)setPlayerController:;
- (void)setBlurView:;
- (id)viewModel;
- (id)playerController;
- (void)startAnimation;
- (void)setTitleLabel:;
- (void)didMoveToSuperview;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
- (void)createPlayer;
@end
