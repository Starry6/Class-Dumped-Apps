@interface CSJ_App : BUDynamicPlugin
- (void)appInfoWithParam:callback:webView:controller:;
- (void)configWithParam:callback:webView:controller:;
- (void)copyToClipboardWithParam:callback:webView:controller:;
- (void)isAppInstalledWithParam:callback:webView:controller:;
+ (id)appInfoDictionary;
@end
