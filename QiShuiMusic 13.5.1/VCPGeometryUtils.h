@interface VCPGeometryUtils : NSObject
+ (id)normalizedRectForRect:inBoundsOfSize:;
+ (id)normalizedRectForRect:inBounds:;
+ (id)rectFromMappingNormalizedRect:toBoundsOfSize:;
+ (id)rectFromMappingNormalizedRect:toBounds:;
+ (id)pointFromNormalizedPoint:inBounds:;
@end
