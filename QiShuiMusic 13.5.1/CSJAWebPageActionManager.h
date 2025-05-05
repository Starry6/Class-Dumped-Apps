@interface CSJAWebPageActionManager : NSObject
- (BOOL)handleActionWithModel:context:completionBlock:;
- (void)openBUWebViewControllerURL:model:context:;
+ (id)sharedManager;
@end
