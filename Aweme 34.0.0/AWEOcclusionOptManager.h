@interface AWEOcclusionOptManager : NSObject
+ (unsigned long long)videoZoomTypeWithModel:;
+ (BOOL)shouldHideBottomBarWithModel:;
+ (BOOL)shouldOcclusionWithModel:;
+ (id)galileoStrategyWithModel:handleType:;
+ (void)trackOcclusionOptStrategy:;
+ (void)resetOcclusionOptStrategyBuryPoint:;
@end
