@interface AWEShareImageTokenHandlerManager : NSObject
- (void)parseActivityToken:carrierType:sourceFrom:Completion:;
- (void)toastIfNeed:;
- (void)transferToWebViewWithSchema:needToast:;
+ (id)sharedInstance;
@end
