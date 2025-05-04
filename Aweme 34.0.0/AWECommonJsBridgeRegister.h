@interface AWECommonJsBridgeRegister : NSObject
+ (void)addCommonJsHandler:forJSMethod:;
+ (id)handersForJSMethod:;
@end
