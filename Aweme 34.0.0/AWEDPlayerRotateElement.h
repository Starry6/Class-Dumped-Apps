@interface AWEDPlayerRotateElement : AWEDPlayerInteractionBaseElement
@property (nonatomic) BOOL isInFullScreen;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} originFrame;
@property (nonatomic) double fullScreenWidth;
@property (nonatomic) double fullScreenHeight;
- (id)activateInfoWithData:;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:;
- (void)setFullScreenWidth:;
- (void)setFullScreenHeight:;
- (double)fullScreenHeight;
- (double)fullScreenWidth;
- (void)setIsInFullScreen:;
- (BOOL)isInFullScreen;
- (void)clickToRotateGeneralPlayer;
- (void)viewDidLoad;
- (void)reset;
- (void)setOriginFrame:;
- (id)originFrame;
@end
