@interface CSJEcomCouponManager : NSObject
+ (void)_requestWithMaterial:slot:retry:;
+ (void)appleCouponWithMaterial:slot:completion:;
+ (void)pbu_couponResponseHandlerWithInfoViewModel:request:completion:;
+ (void)pbu_requestWithInfoViewModel:completion:;
+ (void)takeCouponWithInfoViewModel:completion:;
@end
