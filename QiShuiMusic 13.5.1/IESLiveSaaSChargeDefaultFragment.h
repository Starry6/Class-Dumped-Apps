@interface IESLiveSaaSChargeDefaultFragment : IESLiveRoomComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showChargePanelWithUserInfo:withFirstPayParams:successCallBack:;
- (void)didSetAttachingDIContext;
- (void)dismissChargePanel;
- (void)showChargePanelWithUserInfo:;
- (void)showChargePanelWithUserInfo:withFirstPayParams:successCallBack:cloaseCallBack:;
- (void)showChargePanelWithUserInfo:withFirstPayParams:successCallBack:cloaseCallBack:targetDiamond:;
- (void)showFirstChargePanelWithTrackParams:successCallBack:;
- (void)showNotSupportHint;
- (void)showTheGreatCardView;
- (void)updateChargeView;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
