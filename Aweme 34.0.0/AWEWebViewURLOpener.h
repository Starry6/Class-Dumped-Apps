@interface AWEWebViewURLOpener : NSObject
+ (id)registeredParamsMap;
+ (id)webViewControllerWithParamsDictionary:originURL:;
+ (id)attachMegaObjectToURLIfNeeded:URLString:;
@end
