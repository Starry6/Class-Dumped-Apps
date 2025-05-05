@interface CJPayBridgePlugin_Route : TTBridgePlugin
- (void)closeWebviewWithParam:callback:engine:controller:;
- (void)goH5WithParam:callback:engine:controller:;
- (void)p_setCloseType:type:;
- (BOOL)removeAllWebVCWith:fromVC:;
- (void)setWebviewInfoWithParam:callback:engine:controller:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
