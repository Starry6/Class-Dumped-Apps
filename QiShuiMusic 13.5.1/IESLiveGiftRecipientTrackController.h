@interface IESLiveGiftRecipientTrackController : IESLiveCubeController
@property (nonatomic) <IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recipientRouter;
- (void)controllerActived;
- (void)setRecipientRouter:;
- (void)trackAnchorListShowWithParams:;
- (void)trackChangeFromRecipient:fromAllMic:toRecipient:toAllMic:linkRecipientCount:trackSendScene:clickUserType:defaultGuestInfoLogExtra:;
- (void)trackDefaultRecipientInfoWithResult:chooseReason:defaultRecipientInfoLogExtra:;
- (void)trackGiftRecipientEntranceShow;
- (void)trackReceiveButtonClickWithParams:;
- (void)trackSpecialRecommendWithRecipientID:logExtra:;
- (void)trackTapRecipientEntrance:sendScene:currentSelectRecipientID:currentSelectedRecipientsType:entranceType:;
- (void).cxx_destruct;
@end
