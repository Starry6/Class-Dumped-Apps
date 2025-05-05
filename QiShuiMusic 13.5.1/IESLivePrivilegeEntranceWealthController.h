@interface IESLivePrivilegeEntranceWealthController : IESLiveCubeController
@property (nonatomic) IESLivePrivilegeEntranceWealthViewModel wealthViewModel;
@property (nonatomic) IESLivePrivilegeEntranceWealthView wealthView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)wealthViewModel;
- (void)controllerActived;
- (id)createPrivilegeEntranceWealthWithFrame:showGuestInfo:viewFrameChanged:;
- (void)giftViewWillDismiss;
- (void)setWealthView:;
- (void)setWealthViewModel:;
- (BOOL)shouldShowPrivilegeEntranceWealth;
- (void)updateEntranceWealthWithSelectedGift:giftPrice:count:isNormalGift:currentUserDiamond:;
- (id)wealthView;
- (double)wealthViewHeight;
- (void).cxx_destruct;
@end
