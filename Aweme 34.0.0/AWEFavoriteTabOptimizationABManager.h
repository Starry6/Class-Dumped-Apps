@interface AWEFavoriteTabOptimizationABManager : NSObject
+ (BOOL)enableFavoriteTabOptimization;
+ (BOOL)disableFavoriteLogger;
+ (unsigned long long)favoriteMigrateStrategy;
+ (unsigned long long)favoriteTabOptimizationType;
+ (BOOL)shouldAdjustContentOffsetManually;
+ (BOOL)shouldAutoAdjustContentOffset;
+ (unsigned long long)adjustContentOffsetType;
@end
