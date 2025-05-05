@interface GEOCoarseLocationProvider : NSObject
- (id)init;
- (void)_fetchBasicCoarseEquivalentForLocation:fallbackIsPermanent:addLocationNoise:callbackQueue:callback:;
- (void)fetchConsistentCoarseEquivalentForLocation:callbackQueue:callback:;
- (void)_fetchCoarseEquivalentForLocation:addLocationNoise:callbackQueue:callback:;
- (void).cxx_destruct;
- (void)_fetchRepresentativePointFromData:tileKey:location:addLocationNoise:callbackQueue:callback:;
- (void)fetchCoarseEquivalentForLocation:callbackQueue:callback:;
- (BOOL)_snapNonMercatorCoordinateIfNecessary:callbackQueue:callback:;
@end
