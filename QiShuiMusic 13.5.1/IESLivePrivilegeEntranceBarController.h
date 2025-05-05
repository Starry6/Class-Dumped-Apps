@interface IESLivePrivilegeEntranceBarController : IESLiveCubeController
@property (nonatomic) IESLivePrivilegeEntranceBarView entranceBar;
@property (nonatomic) IESLivePrivilegeEntranceBarViewModel entranceBarViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEntranceBar:;
- (void)controllerActived;
- (id)createPrivilegeEntranceBarWithFrame:;
- (id)currentEntranceBarInfo;
- (void)didGiveAssetWithResponse:;
- (void)didGiveGiftFailed:error:;
- (void)didGiveGiftWithResponse:;
- (id)entranceBar;
- (id)entranceBarViewModel;
- (void)entranceBarWillDisappear;
- (void)giftPageTypeDidChanged:;
- (void)giftViewWillDismiss;
- (void)giftViewWillShow;
- (void)setEntranceBarViewModel:;
- (BOOL)shouldShowPrivilegeEntranceBar;
- (void)updateEntranceBarWithSelectedGift:giftName:giftPrice:count:isNormalGift:currentUserDiamond:;
- (void)updateEntranceBarWithSelectedGiftDiamond:;
- (void)updateLocalPrivilgeBarStrategyWithTouchPositionStr:completion:;
- (void).cxx_destruct;
@end
