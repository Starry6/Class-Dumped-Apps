@interface IESIMRouterAlert : NSObject
+ (void)showDeepLinkDisabledAlertWithURLString:;
+ (void)showInvalidURLSchemeAlertWithURLString:;
@end
