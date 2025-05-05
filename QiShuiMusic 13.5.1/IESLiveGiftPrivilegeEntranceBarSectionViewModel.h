@interface IESLiveGiftPrivilegeEntranceBarSectionViewModel : IESLiveRefactGiftPanelSectionViewModel
@property (nonatomic) IESLiveGiftPanelDataSharing giftPanelDataSharing;
@property (nonatomic) <IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (nonatomic) BOOL enable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recipientRouter;
- (id)createSectionView;
- (void)didSetAttachingDIContext;
- (void)entranceBarDidUpdated;
- (id)giftPanelDataSharing;
- (void)handleSectionWillDisappear;
- (id)initWithGiftPanelDataSharing:;
- (void)p_bindAction;
- (void)setGiftPanelDataSharing:;
- (void)setRecipientRouter:;
- (BOOL)enable;
- (void).cxx_destruct;
@end
