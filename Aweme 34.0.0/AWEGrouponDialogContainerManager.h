@interface AWEGrouponDialogContainerManager : NSObject
+ (BOOL)isDialogShowingWithPageType:uiComponentType:uiComponentID:;
+ (BOOL)getDialogContainerBannerStatus:;
+ (void)updateDialogContainerBannerStatus:pageType:;
+ (void)trackDialogShowResult:errMsg:duration:exposureType:style:pageType:scene:;
+ (BOOL)preCheckoutWithPageType:;
+ (void)trackLynxDialogMonitorWithScene:errMsg:isFeedTab:pageType:extraParam:;
+ (void)recordDialogExposedInColdLaunch:;
+ (BOOL)isBannerAvoidTheSameTimeFre;
+ (void)updateBannerAvoidTheSameTimeFre:;
+ (void)trackDialogCloseMonitorWithScene:reason:style:pageType:extraParam:;
+ (void)trackDialogNaSendCouponWithParams:success:pageType:ticketID:statusCode:;
+ (void)updateDialogShowFrom:;
+ (long long)coldLaunchFrequency;
+ (void)trackDialogShowResult:errMsg:duration:exposureType:style:pageType:scene:errCode:;
+ (BOOL)shouldShowTransformerDialogWithPageType:;
+ (BOOL)isForwardDialogReadyShow;
+ (void)updateForwardDialogWillShow:;
+ (void)requestSyncDialogContainerWithAction:frequencyData:;
+ (void)trackDialogLynxError:duration:style:pageType:scene:errCode:;
+ (void)trackDialogContentLoadWithStyle:scene:loadType:;
@end
