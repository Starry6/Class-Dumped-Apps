@interface AWEJSBridgeHandlerRegister : NSObject
- (id)aAWEDYThirdPartyAppIdManagerCommonAdapter;
+ (void)registerJSBridgeHandler;
+ (id)findWebViewController:;
+ (Class)aAWEDYThirdPartyAppIdManagerCommonAdapterClass;
+ (void)trashCode;
+ (unsigned long long)bridgeAuthType;
+ (void)_requestWithModel:callbackId:jsBridge:;
+ (void)registerThemeValue:;
+ (void)_processFetchResultWithResponseModel:responseError:completionModel:completionError:callbackId:jsBridge:;
+ (BOOL)enableDeprcatedJSB;
+ (id)platformIdFromPlatformString:;
+ (void)trackRequest:;
@end
