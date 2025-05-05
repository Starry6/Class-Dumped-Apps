@interface IESECRouterIntercept : NSObject
+ (id)interceptMap;
+ (void)registerRouterInterceptBlock:forPath:;
+ (BOOL)transferTo:withTransfer:;
@end
