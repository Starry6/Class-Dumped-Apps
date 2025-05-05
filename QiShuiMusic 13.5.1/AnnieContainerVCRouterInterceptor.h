@interface AnnieContainerVCRouterInterceptor : NSObject
@property (nonatomic) BDXThreadSafeArray interceptors;
- (BOOL)customHandleWithParams:;
- (id)interceptors;
- (void)registerContainerVCRouterInterceptor:;
- (void)setInterceptors:;
- (void)unregisterContainerVCRouterInterceptor:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)customHandleWithParams:;
+ (void)registerContainerVCRouterInterceptor:;
+ (void)unregisterContainerVCRouterInterceptor:;
+ (id)sharedInstance;
@end
