@interface AWEDPlayerBottomPlayElement : AWEDPlayerInteractionBaseElement
@property (nonatomic) BOOL isPlaying;
- (void)player:didChangePlaybackStateWithAction:;
- (id)activateInfoWithData:;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:;
- (void)updatePlaySate:;
- (BOOL)isPlaying;
- (void)viewDidLoad;
- (void)setIsPlaying:;
@end
