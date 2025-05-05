@interface IESLiveSaaSCouponAuthTrackerHelper : NSObject
+ (id)buildCommonTrackParamsWithAuthType:roomContext:coupon:;
+ (id)formatClickType:;
+ (id)formatKolUserTag:;
+ (id)formatResult:;
+ (id)formatUserAuthType:;
+ (void)trackPopupClickWithAuthType:roomContext:coupon:clickType:;
+ (void)trackPopupResultWithAuthType:roomContext:coupon:result:;
+ (void)trackPopupShowWithAuthType:roomContext:coupon:;
@end
