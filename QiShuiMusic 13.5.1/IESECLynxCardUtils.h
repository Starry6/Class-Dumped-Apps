@interface IESECLynxCardUtils : NSObject
+ (id)accessKeyWithSchema:;
+ (id)accessKeyWithURL:;
+ (id)createViewWithFrame:context:;
+ (id)defaultGlobalProps;
+ (id)defaultPrefixToAK;
+ (void)enableAnimaXWith:;
+ (BOOL)enableLynxCardMonitor;
+ (id)getPrefixAndAKWithURL:;
+ (id)hybridContextWithModel:;
+ (id)prefixWithSchema:;
+ (id)prefixWithURL:;
+ (id)resolveHybridSchema:;
+ (id)urlFromSchema:;
@end
