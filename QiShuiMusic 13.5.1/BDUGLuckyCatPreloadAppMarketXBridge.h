@interface BDUGLuckyCatPreloadAppMarketXBridge : BDUGLuckyXBridgeMethod
@property (nonatomic) NSDate preloadStartTime;
- (Class)paramModelClass;
- (void)callWithParamModel:completionHandler:;
- (void)invokeCallbackBlock:status:;
- (id)preloadStartTime;
- (void)setPreloadStartTime:;
- (id)trackParamsWithAppleID:;
- (void).cxx_destruct;
- (id)methodName;
@end
