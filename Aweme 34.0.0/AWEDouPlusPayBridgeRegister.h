@interface AWEDouPlusPayBridgeRegister : NSObject
+ (void)registerJSBridgeHandler;
+ (void)handleDpShowResultJSBWithParams:jsBridge:;
+ (void)handleOrderResultWithParams:;
+ (long long)callbackCodeWithResultType:;
+ (void)handleTorchOrderPaySuccess:queryParams:response:jsBridge:;
+ (void)handleOrderPaySuccess:queryParams:originParams:;
+ (void)registerJSBridgeForCJPay;
@end
