@interface AWEGCPVideoTrackContextWidget : IESGCPBaseWidget
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) BOOL diOptEnable;
@property (nonatomic) <AWEGCPVideoAnchorRouter> videoAnchorRouter;
@property (nonatomic) <IESGCPGameMetaDataRouter> gameMetaDataRouter;
@property (nonatomic) <IESGCPUserService> userService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (BOOL)diOptEnable;
- (void)setDiOptEnable:;
- (id)userService;
- (void)setUserService:;
- (id)provideTrackContext;
- (void)widgetBindService;
- (id)videoAnchorRouter;
- (id)gameMetaDataRouter;
- (void)setVideoAnchorRouter:;
- (void)setGameMetaDataRouter:;
- (void).cxx_destruct;
@end
