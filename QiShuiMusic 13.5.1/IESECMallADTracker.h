@interface IESECMallADTracker : NSObject
+ (void)trackThirdClickWithAdInfo:commonData:;
+ (void)trackThirdShowWithAdInfo:commonData:;
+ (void)trackWithAdInfo:commonData:duration:;
@end
