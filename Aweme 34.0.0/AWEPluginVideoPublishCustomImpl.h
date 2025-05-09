@interface AWEPluginVideoPublishCustomImpl : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) NSString stickerID;
@property (nonatomic) BOOL isUploadingUserInfo;
@property (nonatomic) BDPVideoPublishModel model;
@property (nonatomic) BDPUniqueID uniqueID;
@property (nonatomic) AWEAnchorCustomTitleViewController customizedTitleController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)setStickerID:;
- (id)stickerID;
- (void)ironManVideoPublishResult:;
- (void)publishFinishWithType:;
- (void)shareTaskDone;
- (void)createCutSameMVTemplateWithTemplateId:withModel:withInfo:appID:didComplete:;
- (void)createVideoWithModel:withInfo:appID:;
- (void)setCustomizedTitleController:;
- (id)customizedTitleController;
- (void)startVideoWithStickerID:model:info:appID:;
- (BOOL)needHandleMessage;
- (BOOL)isUploadingUserInfo;
- (void)setIsUploadingUserInfo:;
- (void)bdp_anchorCustomizeTitleWithResultModel:uniqueID:completion:;
- (BOOL)bdp_checkAbilityEnable;
- (void)login:completion:;
- (void)videoSceneDidStart:uniqueID:completion:;
- (id)getVideoTypeString:;
- (void)bdp_videoSceneWithModel:uniqueID:completion:;
- (void)bdp_videoMountWithModel:uniqueID:completion:;
- (id)bdp_getVideoSceneBlockList;
- (void)setModel:;
- (id)init;
- (void)dealloc;
- (id)completion;
- (id)uniqueID;
- (void)setCompletion:;
- (void)setUniqueID:;
- (id)model;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end
