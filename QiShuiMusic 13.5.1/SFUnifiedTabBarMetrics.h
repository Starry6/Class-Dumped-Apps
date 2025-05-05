@interface SFUnifiedTabBarMetrics : SFUnifiedBarMetrics
@property (nonatomic) Q sizeClass;
@property (nonatomic) double insetToRevealNextItem;
@property (nonatomic) double maximumActiveItemWidth;
@property (nonatomic) double minimumActiveItemWidth;
@property (nonatomic) double minimumActiveItemWidthRatio;
@property (nonatomic) double minimumInactiveItemWidth;
- (void)setSizeClass:;
- (unsigned long long)sizeClass;
- (double)maximumItemSpacing;
- (double)minimumItemSpacing;
- (double)insetToRevealNextItem;
- (double)maximumActiveItemWidth;
- (double)minimumActiveItemWidth;
- (double)minimumActiveItemWidthRatio;
- (double)minimumInactiveItemWidth;
+ (double)minimumActiveItemWidthForSizeClass:;
+ (double)minimumInactiveItemWidthForSizeClass:;
@end
