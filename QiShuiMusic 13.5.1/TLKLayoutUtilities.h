@interface TLKLayoutUtilities : NSObject
+ (BOOL)isWideScreen;
+ (double)flooredValue:inView:;
+ (double)ceilingValue:inView:;
+ (id)idealImageSizeWithSize:fittingSize:;
+ (void)requireIntrinsicSizeForView:;
+ (id)controlsInView:;
+ (double)deviceScaledFlooredValue:;
+ (id)deviceScaledRoundedInsets:;
+ (void)setDynamicBaselineAlignmentsForLabel:top:bottom:;
+ (id)maxThumbnailSizeIsCompactWidth:;
+ (BOOL)widthIsCompact:;
+ (double)deviceScaledRoundedValue:;
+ (BOOL)isSuperLargeAccessibilitySize;
+ (double)contentHeightOfTableView:forWidth:maxHeight:;
+ (id)deviceScaledRoundedRect:;
+ (id)minimumButtonSize;
+ (void)requireIntrinsicSizeForView:withPriority:;
+ (void)applyRowBoundedSizingToImageView:isCompactWidth:;
+ (BOOL)isLTR;
+ (double)scaledValueForValue:withFont:;
+ (void)applyMinimumSizeTouchInsetsForControlsInView:;
+ (double)roundedValue:inView:;
+ (id)maxThumbnailSize;
@end
