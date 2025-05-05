@interface ARSkipTileBounds : NSObject
- (id)initWithCoordinate:;
- (BOOL)isInside:;
+ (double)_normalizeLongitude:;
@end
