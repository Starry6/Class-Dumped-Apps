@interface AWEPOIGoodsDetailPreviewManager : NSObject
@property (nonatomic) NSMutableDictionary previewDictionary;
- (BOOL)shouldPreventPauseVideoWhenGoodsDetailPopup;
- (void)startPreviewWithOpenUrl:context:;
- (void)endPreviewWithRouterParams:viewController:;
- (id)setupWithViewController:routerParams:;
- (void)startPreviewWithOpenUrl:feedManager:;
- (void)setPreviewDictionary:;
- (id)previewDictionary;
- (id)getInstanceManagerWithRouterParams:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
