@interface AWERegionManager : NSObject
+ (id)localRegion;
+ (void)setUpRegionIfNeeded;
+ (BOOL)isRegion:;
+ (BOOL)isInRegions:;
+ (id)currentRegion;
+ (id)region;
@end
