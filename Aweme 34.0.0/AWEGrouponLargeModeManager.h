@interface AWEGrouponLargeModeManager : NSObject
+ (BOOL)showLargeMode;
+ (id)largeModeSizeWithFrame:isLargeMode:;
+ (id)updateLargeModeAttributesWithModel:isLargeMode:;
+ (double)largeModeSizeWithFont:isLargeMode:;
+ (BOOL)isCollectListLargeMode;
+ (double)currentScaleForBigFontAdapt:;
@end
