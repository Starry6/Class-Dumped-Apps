@interface AWEStudioExtFriendsService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonTrackParams;
- (void)enterFriendsCameraWithShootWay:enterFrom:transitionDelegate:modeArray:;
- (void)startCameraWithShootWay:enterFrom:;
- (void)startCameraWithPublishInputData:completion:;
- (void)startCameraWithDataConfig:friendsCameraScene:injectService:completion:;
- (id)publishViewModelForSocialCameraWithFriendsCameraScene:;
- (id)shootSameFriendsCameraCustomization;
- (void)mergeSocialCameraDataWithComposerApi:withScene:;
- (BOOL)isSocialCameraEnabled;
- (BOOL)isSocialCameraAnchorWithAnchorInfo:shootSameScene:;
- (id)sharedPostPageQuickStoryShareService;
- (void)setSharedPostPageQuickStoryShareService:;
- (void)startCameraWithDataConfig:friendsCameraScene:completion:;
- (id)friendsCustomizationWithScene:;
- (void)syncInputData:toDataConfig:;
- (id)socialCameraCustomTrackParamsWithScene:;
- (void)syncTrackDataToBizData:withInputData:;
- (void)syncRepoMusicToMusicDTO:withInputData:;
- (void)syncCameraStickerDTO:withInputData:;
- (void)syncEffectDTO:withInputData:;
- (void)syncAIGCEffectDTO:withInputData:;
- (id)mergeDictionary:withDictionary:;
@end
