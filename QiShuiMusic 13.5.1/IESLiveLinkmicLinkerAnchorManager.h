@interface IESLiveLinkmicLinkerAnchorManager : NSObject
@property (nonatomic) IESLiveInteractiveUserService userService;
@property (nonatomic) IESLiveInteractiveLinkService linkService;
@property (nonatomic) IESLiveInteractiveMediaService mediaService;
@property (nonatomic) HTSLiveInteractiveAPIV2 api;
@property (nonatomic) IESLiveLinkmicLinkerAnchorModel model;
@property (nonatomic) IESLiveCountTimer multiChannelBackupTimer;
- (void)setUserService:;
- (void)stopMultiChannelInfoBackupTimer;
- (void)setLinkService:;
- (void)checkMultiChannelInfoWithSource:;
- (void)checkUnexpectLessPushWithFirstFrameID:;
- (BOOL)enableCheckUnexpectLessPush;
- (BOOL)enableCheckUnexpectMorePush;
- (id)linkService;
- (id)multiChannelBackupTimer;
- (void)setMultiChannelBackupTimer:;
- (BOOL)shouldCheckUnexpectMorePush;
- (void)startMultiChannelInfoBackupTimer;
- (id)userService;
- (id)model;
- (void)setModel:;
- (void).cxx_destruct;
- (id)api;
- (id)mediaService;
- (void)setMediaService:;
- (void)setApi:;
@end
