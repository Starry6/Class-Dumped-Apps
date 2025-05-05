@interface IESLivePKComponentSmallGift : IESLivePKComponent
@property (nonatomic) UIView smallGiftConatiner;
@property (nonatomic) <IESLiveSubscription> oppositeGuestSubscription;
- (void)componentContainerFrameChanged;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)didSetAttachingDIContext;
- (void)loadSmallGiftContainer;
- (void)observeOppositeGuest;
- (id)oppositeGuestSubscription;
- (BOOL)profileViewUseSimpleMode;
- (void)setOppositeGuestSubscription:;
- (void)setSmallGiftConatiner:;
- (id)smallGiftConatiner;
- (void).cxx_destruct;
- (void)clean;
@end
