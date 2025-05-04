@interface AWERTVJSBridgeRegister : NSObject
+ (void)registerJSBridgeHandler;
+ (void)registerSecurityVoipAlert;
+ (id)__showSecurityVoipAlert:headerImageURLString:message:highlights:confirmTitle:;
@end
