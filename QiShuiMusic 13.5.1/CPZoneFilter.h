@interface CPZoneFilter : NSObject
- (id)initWithPage:;
- (void)filterZonesInZone:;
- (void)findBackgroundGraphicsInZone:;
- (void)findUsedGraphicsInZone:;
+ (void)filterZonesInPage:;
@end
