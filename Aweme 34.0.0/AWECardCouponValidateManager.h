@interface AWECardCouponValidateManager : NSObject
+ (void)validateCouponWithCodeID:completion:;
+ (void)tryValidateCouponWithCodeID:actionType:source:routerDict:completion:;
@end
