@interface IPARegion : NSObject
- (id)init;
- (BOOL)isEmpty;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithRect:;
- (id)description;
- (id)bounds;
- (id)mutableCopyWithZone:;
- (unsigned long long)count;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)intersectsRect:;
- (id)initWithRegion:;
- (double)area;
- (BOOL)intersectsRegion:;
- (BOOL)isEqualToRegion:;
- (void)enumerateRects:;
- (BOOL)includesRect:;
- (BOOL)includesRegion:;
- (id)regionByAddingRect:;
- (id)regionByAddingRegion:;
- (id)regionByRemovingRect:;
- (id)regionByRemovingRegion:;
- (id)regionByClippingToRect:;
- (id)regionByClippingToRegion:;
- (id)regionByExcludingRect:;
- (id)regionByExcludingRegion:;
- (id)regionByTranslatingBy:;
- (id)regionByGrowingBy:;
- (id)regionByGrowingBy:inRect:;
- (id)regionByShrinkingBy:;
- (id)regionByShrinkingBy:inRect:;
- (id)regionByApplyingOrientation:imageSize:;
- (id)regionByFlippingInRect:;
- (id)initWithRectArray:;
- (id)regionByAddingRectArray:;
- (id)regionByRemovingRectArray:;
- (id)regionByClippingToRectArray:;
- (id)regionByScalingBy:;
- (id)regionByRoundingUp;
- (id)regionByRoundingDown;
- (id)regionByApplyingAffineTransform:;
+ (id)region;
+ (id)regionWithRect:;
+ (id)regionWithRegion:;
+ (id)regionWithRectArray:;
@end
