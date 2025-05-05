@interface BDASifContainerService : NSObject
+ (id)addCommonSchemeParamsWithUrl:config:;
+ (id)addLifecycleDelegate:currentTime:;
+ (void)addLynxContextWithConfig:context:;
+ (id)addMonitorInterceptor:;
+ (id)addPageHostWithUrl:config:;
+ (void)addWebContextWithConfig:context:;
+ (id)createBDXContextWithConfig:;
+ (id)createContainerViewWithConfig:;
+ (id)createContainerWithConfig:;
+ (id)getAllMethodsInstances:;
+ (id)getClientSecWKConfiguration:;
@end
