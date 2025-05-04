@interface AWEECPageDisplayCycleImpl : NSObject
+ (void)didOpenPage:switchMode:withScene:fromVC:andExtra:;
+ (void)willClosePage:withScene:fromVC:andExtra:;
+ (void)willOpenNextInPage:withScene:fromVC:andExtra:;
+ (void)willAppearAgainForPage:switchMode:withScene:fromVC:andExtra:;
+ (void)didPage:switchTo:withScene:fromVC:andExtra:;
+ (void)willAppearPage:withScene:fromVC:andExtra:;
+ (void)willDisappearPage:withScene:fromVC:andExtra:;
+ (void)didDisappearPage:withScene:fromVC:andExtra:;
+ (void)didPage:willSwitchTo:withScene:fromVC:andExtra:;
+ (void)didPage:panPercent:withScene:fromVC:andExtra:;
+ (void)didPage:scrollOffset:withScene:fromVC:andExtra:;
@end
