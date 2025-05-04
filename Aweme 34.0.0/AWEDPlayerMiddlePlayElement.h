@interface AWEDPlayerMiddlePlayElement : AWEDPlayerInteractionBaseElement
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:didChangePlaybackStateWithAction:;
- (id)activateInfoWithData:;
- (id)actionButtonSize;
- (void)iesPlayer:willInStallAction:;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:;
- (void)updatePlaySate:;
- (BOOL)isPlaying;
- (id)edgeInsets;
- (void)viewDidLoad;
- (void)setIsPlaying:;
@end
