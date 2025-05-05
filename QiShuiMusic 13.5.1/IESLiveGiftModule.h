@interface IESLiveGiftModule : IESLiveModule
@property (nonatomic) <IESLiveFaceGiftExternalMgrRouter> faceGiftExternalMgrRouter;
@property (nonatomic) <IESLiveGiftFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fullLinkMonitor;
- (id)vsGiftInterface;
- (id)alphaVideoPlayerInterface;
- (void)didSetAttachingDIContext;
- (id)dynamicGiftInterface;
- (id)faceGiftExternalInterface;
- (id)faceGiftExternalMgrRouter;
- (Class)giftABManager;
- (id)giftAnimationInterface;
- (id)giftDataInterface;
- (id)giftInterface;
- (id)giftManagerInterface;
- (id)giftRecipientInterface;
- (id)giveGiftInterface;
- (id)interactiveGiftInterface;
- (void)setFaceGiftExternalMgrRouter:;
- (void)setFullLinkMonitor:;
- (id)speedGiftInterface;
- (id)voteInterface;
- (void).cxx_destruct;
@end
