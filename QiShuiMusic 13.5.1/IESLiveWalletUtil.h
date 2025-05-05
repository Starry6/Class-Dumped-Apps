@interface IESLiveWalletUtil : NSObject
+ (id)moneyFromNumberKeepRoundNumber:;
+ (BOOL)currentDeviceHasSafeArea;
+ (double)currentDeviceNavigationBarHeight;
+ (double)currentDeviceStatusBarHeight;
+ (id)moneyFromNumber:;
+ (id)stringFromObj:;
@end
