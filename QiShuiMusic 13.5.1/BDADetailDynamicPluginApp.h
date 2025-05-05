@interface BDADetailDynamicPluginApp : BDADetailDynamicPlugin
- (void)appInfoWithParam:callback:webView:controller:;
- (void)configWithParam:callback:webView:controller:;
- (id)convertEventDictParams2Model:;
- (void)copyToClipboardWithParam:callback:webView:controller:;
- (void)downloadAppWithParam:callback:webView:controller:;
- (void)endImpressionWithParam:callback:webView:controller:;
- (void)getStatusBarInfoWithParam:callback:webView:controller:;
- (void)isAppInstalledWithParam:callback:webView:controller:;
- (void)preloadAppWithParam:callback:webView:controller:;
- (void)startImpressionWithParam:callback:webView:controller:;
@end
