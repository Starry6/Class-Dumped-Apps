@interface AWELiveInnerService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attachingDIContext;
- (id)getFeedLiveStreamViewControllerWithAvatarClick:;
- (id)getAcquaintanceViewControllerWithAvatarClick:;
- (id)getFeedVSLiveStreamViewControllerWithAvatarClick:;
- (id)getFeedLiveCardViewControllerWithUserClick:;
- (void)checkRoomAndUserStatusWithModel:withBlock:;
- (void)fetchPreStreamViewCards:completion:;
- (long long)buildSceneBy:referString:;
- (BOOL)disableFeedMixLiveRouterCheck:;
- (id)liveTabSkyLightService;
- (id)liveProfileMessageService;
- (BOOL)enableInstallProfileMessageChannel;
- (BOOL)openLynxURL:adInfo:queries:liveInfo:;
- (void)openByteCertWithParams:completion:;
@end
