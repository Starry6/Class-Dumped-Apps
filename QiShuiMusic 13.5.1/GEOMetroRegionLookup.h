@interface GEOMetroRegionLookup : NSObject
- (id)lookupRegionWithLocation:;
- (id)lookupRegionWithLocation:countryCodeHint:;
- (id)_lookupRegionWithLocation:countryCode:;
@end
