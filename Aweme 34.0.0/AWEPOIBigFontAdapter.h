@interface AWEPOIBigFontAdapter : NSObject
+ (BOOL)enablePoiBigFontAdapt;
+ (BOOL)enableCollectListBigFontAdapt;
+ (id)poi_adaptiveFontOfSizeForBigFontAdapt:weight:isLargeMode:;
+ (double)poi_adaptiveFontSize:isLargeMode:;
+ (double)poi_currentScaleForBigFontAdapt;
+ (double)poi_currentScaleForBigFontAdapt:;
+ (id)poi_fontOfSizeForBigFontAdapt:weight:isLargeMode:;
+ (id)poi_fontForBigFontAdapt:weight:isLargeMode:;
+ (id)poi_fontOfSizeForBigFontAdapt:weight:;
+ (id)poi_adaptiveFontOfSizeForBigFontAdapt:weight:;
@end
