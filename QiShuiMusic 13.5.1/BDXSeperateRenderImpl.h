@interface BDXSeperateRenderImpl : NSObject
+ (void)preRenderWithConfig:completion:;
+ (id)createContextWithConfig:;
+ (id)createContextWithConfig:enableUIOperationQueue:;
+ (id)globalPropsWithConfig:;
+ (id)preRenderWithConfig:;
+ (void)reportMonitorWithConfig:duration:status:;
@end
