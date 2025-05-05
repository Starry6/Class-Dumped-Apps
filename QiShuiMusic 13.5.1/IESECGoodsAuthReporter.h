@interface IESECGoodsAuthReporter : NSObject
+ (void)obtainAuthResultForCurrentUserWithEcomAppID:completion:;
+ (void)reportAuthResultForCurrentUserWithEcomAppID:completion:;
@end
