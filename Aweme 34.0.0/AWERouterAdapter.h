@interface AWERouterAdapter : NSObject
+ (id)validateURLString:;
+ (void)markDidRegisterWithURLString:;
+ (void)registerRouterSchemesBeforeTransferWithURLString:;
+ (id)allowURLStrings;
+ (void)hookCanOpenURLString;
+ (void)hookCanRetriveViewController;
+ (void)hookViewControllerForURLString;
+ (id)AWERouterClassMethodWithSEL:;
+ (void)setAllowURLStrings:;
+ (BOOL)schemeTransformedValidateEnable;
+ (void)setSchemeTransformedValidateEnable:;
+ (void)setup;
@end
