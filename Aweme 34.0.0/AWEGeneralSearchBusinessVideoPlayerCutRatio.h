@interface AWEGeneralSearchBusinessVideoPlayerCutRatio : NSObject
+ (BOOL)drawQualityCornerOpt;
+ (id)getCutRatioConfigWithContainerWidth:cardModel:;
+ (id)videoAreaCutWithContainerWidth:cardModel:;
+ (BOOL)isNeedCustomVideoScaleModeWithCardModel:;
+ (id)videoAreaOptimizeWithContainerWidth:cardModel:;
+ (BOOL)isNeedAdjustLayoutWithCardModel:;
@end
