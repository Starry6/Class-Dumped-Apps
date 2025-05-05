@interface GEOCoarseLocationData : NSObject
- (id)init;
- (id)initWithFileURL:tileKey:;
- (id)snappedLocationForLocation:addLocationNoise:;
- (void).cxx_destruct;
@end
