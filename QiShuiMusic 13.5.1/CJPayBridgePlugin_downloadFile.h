@interface CJPayBridgePlugin_downloadFile : TTBridgePlugin
- (void)downloadFileWithParam:callback:engine:controller:;
- (BOOL)p_allowDownload:;
- (void)p_share:callBack:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
