@interface AWENearbyHalfScreenContainerService : NSObject
+ (id)getContentVC;
+ (id)createHalfScreenWithFeedUnderTakeData:;
+ (id)findNativeViewRectWith:;
+ (void)trackNearbyHalfScreenAtomMonitor:halfScreenModel:extraParams:;
+ (void)trackHalfScreenShowEvent:showResult:errorMsg:extraParams:;
+ (id)showHalfScreenWithBaseVC:containerModel:completion:closeHandler:;
+ (id)showHalfScreenWithBaseVC:content:containerModel:completion:closeHandler:;
+ (id)getContainerVC;
+ (void)trackHalfScreenShowDurationEvent:extraParams:;
+ (id)viewInjectorWithStyle:targetVC:;
+ (void)createHalfScreenContentWithPageType:;
+ (id)getHalfScreenContentURLWithPageType:;
+ (void)mergeHalfScreenConfig:highLevel:lowLevel:;
+ (long long)getNonZeroIntegerValueIn:orRight:forKey:;
+ (void)createHalfScreenContainerWithPageType:;
+ (id)getHalfScreenPerConfigWithPageType:routerParams:;
+ (void)trackHalfScreenRCVDEvent:extraParams:;
@end
