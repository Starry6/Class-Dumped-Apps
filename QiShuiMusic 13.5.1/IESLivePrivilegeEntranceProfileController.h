@interface IESLivePrivilegeEntranceProfileController : IESLiveCubeController
@property (nonatomic) IESLivePrivilegeEntranceProfileViewModel profileViewModel;
@property (nonatomic) IESLivePrivilegeEntranceEcomProfileViewModel ecomProfileViewModel;
@property (nonatomic) UIView<IESLiveRoomProfileButtonDelegate> currentProfileView;
@property (nonatomic) UIView<IESLivePrivilegeEntranceProfileViewProtocol> profileView;
@property (nonatomic) UIView<IESLivePrivilegeEntranceEcomProfileViewProtocol> ecomProfileView;
@property (nonatomic) <IESLiveRoomProfileButtonContainerOuterProtocol> profileContainer;
@property (nonatomic) BOOL enableEnterFansClub;
@property (nonatomic) BOOL enableEcomFansclub;
@property (nonatomic) BOOL enableProfileVIPEntrance;
@property (nonatomic) BOOL enableGeneralVIP;
@property (nonatomic) IESLivePrivilegeEntranceView entranceView;
@property (nonatomic) UIView<IESLivePrivilegeEntranceSubviewDelegate> fansClubView;
@property (nonatomic) UIView<IESLivePrivilegeEntranceSubviewDelegate> generalVIPView;
@property (nonatomic) IESLivePrivilegeEntranceVIPViewModel generalVIPViewModel;
@property (nonatomic) q entranceType;
@property (nonatomic) BOOL enableProfileDoubleEntranceConfig;
@property (nonatomic) <IESLivePrivilegeEntranceProfileActions> actionCreator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setProfileView:;
- (void)didTapVIPButton;
- (id)ecomProfileView;
- (id)actionCreator;
- (void)bindEcomViewModel;
- (void)bindViewModel;
- (id)buildCommonParams;
- (void)controllerActived;
- (void)createEcomProfileView;
- (void)createGeneralVIPView;
- (void)createProfileView;
- (void)createVIPProfileView;
- (id)currentProfileView;
- (void)didTapFansclubButton;
- (id)ecomProfileViewModel;
- (BOOL)enableEcomFansclub;
- (BOOL)enableEnterFansClub;
- (BOOL)enableGeneralVIP;
- (BOOL)enableProfileDoubleEntranceConfig;
- (BOOL)enableProfileVIPEntrance;
- (long long)entranceType;
- (id)entranceView;
- (id)fansClubView;
- (id)generalVIPView;
- (id)generalVIPViewModel;
- (void)openNormalFansClubView;
- (id)profileButton;
- (id)profileContainer;
- (id)profileView;
- (void)reloadProfileViewIfNeeded;
- (void)resetAnchorEntranceStyle;
- (void)resetEcomAnchorEntranceStyle;
- (void)setActionCreator:;
- (void)setCurrentProfileView:;
- (void)setEcomProfileView:;
- (void)setEcomProfileViewModel:;
- (void)setEnableEcomFansclub:;
- (void)setEnableEnterFansClub:;
- (void)setEnableGeneralVIP:;
- (void)setEnableProfileVIPEntrance:;
- (void)setEntranceType:;
- (void)setEntranceView:;
- (void)setFansClubView:;
- (void)setGeneralVIPView:;
- (void)setGeneralVIPViewModel:;
- (void)setProfileContainer:;
- (void)trackEcomFansclubClick;
- (void)trackEcomFansclubShow;
- (void)trackFansclubClick;
- (void)trackFansclubShow;
- (void)trackVIPClick;
- (void)trackVIPShow;
- (void)viewDidShowOnContainer:;
- (void).cxx_destruct;
- (id)profileViewModel;
- (void)setProfileViewModel:;
@end
