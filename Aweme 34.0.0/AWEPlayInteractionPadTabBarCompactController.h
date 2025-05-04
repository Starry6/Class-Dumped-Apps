@interface AWEPlayInteractionPadTabBarCompactController : AWEPlayInteractionNewBaseController
@property (nonatomic) BOOL hasTrackPubShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onUpdatePlayerController:withPlayVideoVC:;
- (void)videoDidActivity;
- (id)playVideoViewController;
- (id)aAWEPadModuleAdapter;
- (void)onPlayerPlay:ifPlay:;
- (BOOL)canShowDanmaku;
- (void)trackDanmakuShowIfNeeded;
- (void)startInputDanmaku;
- (void)changeDanmakuSwitchState:;
- (void)changePlayerSpeed:;
- (BOOL)canShowSpeed;
- (BOOL)canShowClear;
- (void)setHasTrackPubShow:;
- (void)trackSpeedValueSelected:;
- (BOOL)hasTrackPubShow;
- (void)viewDidLoad;
- (void)reset;
+ (Class)aAWEPadModuleAdapterClass;
@end
