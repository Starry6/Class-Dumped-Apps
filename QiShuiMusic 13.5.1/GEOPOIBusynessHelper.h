@interface GEOPOIBusynessHelper : NSObject
- (id)init;
+ (void)checkIsEnabledForLocation:radius:workQueue:result:;
+ (BOOL)_checkAvailablePOIForLocation:radius:minZoom:maxZoom:tiles:error:;
+ (id)dpClientVersionHashWithMCPOIBusynessVersion:;
+ (void)generateDPPOIBusynessForLocation:radii:workQueue:result:;
+ (id)_generateDPPOIBusynessForLocation:radii:minZoom:maxZoom:dpBusynessTiles:error:;
+ (id)_generateDPPOIBusynessForCoordinate:tileId:dpBusynessTileURL:dayOfWeek:hourOfDay:radii:minZoom:maxZoom:tileIds:error:;
@end
