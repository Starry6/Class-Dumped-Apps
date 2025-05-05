@interface IESLiveSaaSPBQueryUserBenefitPopupResponse_UserBenefitPopupData : GPBMessage
@property (nonatomic) BOOL canShow;
@property (nonatomic) NSString ruleDescriptionURL;
@property (nonatomic) IESLiveSaaSPBQueryUserBenefitPopupResponse_QcpxCouponInfo qcpxCoupon;
@property (nonatomic) BOOL hasQcpxCoupon;
@property (nonatomic) IESLiveSaaSPBQueryUserBenefitPopupResponse_PopupWindow popupWindow;
@property (nonatomic) BOOL hasPopupWindow;
+ (id)descriptor;
@end
