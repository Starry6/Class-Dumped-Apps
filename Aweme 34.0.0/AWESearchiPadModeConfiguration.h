@interface AWESearchiPadModeConfiguration : NSObject
+ (BOOL)isSearchNeedWaterFallLayout;
+ (double)getSuitableScreenWidth:;
+ (double)bannerWidth;
+ (long long)defaultColumnNum;
+ (double)defaultItemGap;
+ (id)padMultipleUIConfig;
+ (double)duxGridGutterWithView:;
+ (double)duxGridMarginWithView:;
+ (long long)columnNumWithView:;
+ (id)padMultipleColumnCofig;
+ (long long)defaultColumnNumDowngrade:;
+ (double)cellWidthWithView:;
+ (BOOL)isContainerSizeChanged:toBreakPoint:;
+ (double)defaultMargin;
+ (BOOL)isLandscape;
+ (double)defaultColumnWidth;
@end
