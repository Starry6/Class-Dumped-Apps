@interface AWESearchBridgeRegister : HTSService
+ (id)findWebViewController:;
+ (BOOL)showSharePanelWithParams:image:;
+ (void)notifyReactWithParams:;
+ (id)findViewControllerOfClass:;
+ (id)findFirstRCTScrollViewInView:;
+ (BOOL)openSearchItemListWithParams:;
@end
