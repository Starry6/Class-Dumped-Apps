@interface IESLiveSaaSCouponAuthConfig : NSObject
+ (BOOL)enableCouponAuthPopup;
+ (BOOL)expansionCouponPopupEnabled;
+ (id)shortTouchBlockViewType;
+ (BOOL)shouldBlockByCouponPopup:;
@end
