@interface CJPayCreditPayUtil : NSObject
+ (void)activateCreditPayWithPayInfo:completion:;
+ (void)activateCreditPayWithStatus:activateUrl:completion:;
+ (void)doCreditTargetActionWithPayInfo:completion:;
+ (void)p_openCreditScheme:callback:;
@end
