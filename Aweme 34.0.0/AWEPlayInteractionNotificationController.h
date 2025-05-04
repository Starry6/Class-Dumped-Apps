@interface AWEPlayInteractionNotificationController : NSObject
@property (nonatomic) q blockPlayCounter;
@property (nonatomic) BOOL playingBeforeBlockPlay;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEPlayInteractionViewController viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveCollectStatusChangedNoti:;
- (void)didReceiveClickTabbarExitNoti:;
- (void)didReceiveEnterBackgroundNoti:;
- (void)imAwemeVideoPlayControlNotification:;
- (void)startBlockingPlay;
- (void)endBlockingPlay;
- (long long)blockPlayCounter;
- (void)setPlayingBeforeBlockPlay:;
- (void)setBlockPlayCounter:;
- (BOOL)playingBeforeBlockPlay;
- (void)setModel:;
- (void)dealloc;
- (void)viewDidLoad;
- (id)viewController;
- (id)model;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setViewController:;
@end
