@interface AWEStudioLiveServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasCreatedLiveRoom;
- (BOOL)hasEnteredLiveRoom;
- (BOOL)canBeLivePodcast;
- (void)checkLivePermission:;
- (void)checkBlessingStickerExistsWithCompleteBlock:;
- (void)trackEnterLiveMode:;
- (void)checkHasSameStickerWithSticker:completeBlock:;
- (void)showAddressListAuthorizationOnLiveViewController:;
- (void)requestCreateInfo:completion:;
- (id)liveCameraWithRecorder:;
- (id)getLiveEntranceViewControllerWithHolderController:containerView:sourceParam:openLiveModel:;
- (BOOL)clickShootToLive;
- (void)setClickShootToLive:;
- (void)createLiveTitleExtraForModel:;
- (id)liveWaterMarkImageWithPublishModel:size:;
@end
