@interface UGERouterCenter : NSObject
+ (void)clearAllRouters;
+ (BOOL)canOpenRouter:;
+ (void)openRouter:actionItem:params:context:completionHandler:;
+ (void)openRouter:params:context:completionHandler:;
+ (void)registerRouter:handler:;
+ (void)unregisterRouter:;
+ (id)errorWithCode:reason:;
@end
