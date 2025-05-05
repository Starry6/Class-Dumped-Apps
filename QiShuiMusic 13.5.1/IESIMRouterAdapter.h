@interface IESIMRouterAdapter : NSObject
+ (id)IESIMRouterClassMethodWithSEL:;
+ (id)allowURLStrings;
+ (void)hookCanOpenURLString;
+ (void)hookCanRetriveViewController;
+ (void)hookViewControllerForURLString;
+ (void)registerRouterSchemesBeforeTransferWithURLString:;
+ (void)setAllowURLStrings:;
+ (id)validateURLString:;
+ (void)setup;
@end
