@interface IESECLynxCardHeightCalculator : NSObject
+ (void)attachLynxViewToModelIfNeed:;
+ (void)calculateWithModel:;
+ (void)calculateWithModel:success:fail:;
+ (void)calculateWithModels:;
+ (void)getCachedHeightWithModel:;
+ (id)lynxHeightCacheKey:;
+ (void)registerBridges:toLynxView:;
+ (void)trackHeightCalculateResult:cost:type:model:errMsg:;
+ (void)updateHeightWithModel:;
@end
