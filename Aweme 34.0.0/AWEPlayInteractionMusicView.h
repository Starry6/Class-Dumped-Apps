@interface AWEPlayInteractionMusicView : UIView
@property (nonatomic) UIViewController viewController;
@property (nonatomic) AWEMusicCoverButton musicButton;
@property (nonatomic) UIImageView listenIconView;
@property (nonatomic) UILabel listenTitleLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)makeConstraints;
- (id)musicButton;
- (void)pauseMusicAnimations;
- (void)resumeMusicAnimations;
- (void)setMusicButton:;
- (id)listenIconView;
- (id)listenTitleLabel;
- (void)setListenIconView:;
- (void)setListenTitleLabel:;
- (id)initWithViewController:;
- (id)viewController;
- (double)iconSize;
- (void).cxx_destruct;
- (void)setViewController:;
@end
