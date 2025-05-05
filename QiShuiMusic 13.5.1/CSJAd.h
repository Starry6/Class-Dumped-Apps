@interface CSJAd : BUDynamicPlugin
- (void)callNativePhoneWithParam:callback:webView:controller:;
- (void)getAddressWithParam:callback:webView:controller:;
+ (unsigned long long)instanceType;
@end
