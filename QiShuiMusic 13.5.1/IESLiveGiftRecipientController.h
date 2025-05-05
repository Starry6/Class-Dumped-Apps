@interface IESLiveGiftRecipientController : IESLiveCubeController
@property (nonatomic) IESLiveGiftGuestInfoView recipientView;
@property (nonatomic) IESLiveGiftRecipientViewModel recipientViewModel;
@property (nonatomic) IESLiveGiftAudienceReceiveViewModel audienceViewModel;
@property (nonatomic) <IESHYControllerProtocol> hybridRecipientListView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audienceServiceImpl;
- (id)audienceViewModel;
- (void)bindShowRecipientListViewBlock;
- (void)bindUpdateRecipientListViewBlock;
- (void)controllerActived;
- (id)createGiftRecipientViewWithFrame:;
- (void)giftViewWillDismiss;
- (void)giftViewWillShow;
- (id)hybridRecipientListView;
- (id)recipientServiceImpl;
- (id)recipientView;
- (id)recipientViewModel;
- (void)setAudienceViewModel:;
- (void)setHybridRecipientListView:;
- (void)setRecipientView:;
- (void)setRecipientViewModel:;
- (BOOL)shouldShowRecipientView;
- (void)updateRecipientListViewWithCompletion:;
- (void).cxx_destruct;
@end
