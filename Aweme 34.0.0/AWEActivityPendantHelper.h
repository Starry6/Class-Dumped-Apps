@interface AWEActivityPendantHelper : NSObject
+ (id)currentFeedTableVC;
+ (id)currentFeedViewController;
+ (id)currentFeedContainerViewController;
+ (BOOL)canShowInCurrentPage:isSwitchTab:;
+ (BOOL)shouldHideForCurrentVideo:baseViewType:;
+ (BOOL)shouldHideForCurrentVideo:;
+ (BOOL)shouldHideInCurrentPage:isSwitchTab:;
+ (BOOL)shouldHideForCurrentVideo:baseViewType:configMode:;
+ (void)recordClosePendantTime:;
+ (void)recoverCanShowDeadLineWhenLaunch:;
+ (BOOL)disablePendantFold:;
+ (BOOL)isShowSkylightViewOnFeed;
@end
