@interface GEOSpatialPlaceLookupResultItem : NSObject
@property (nonatomic) NSArray mapItems;
@property (nonatomic) GEOMapRegion boundingRegion;
- (void).cxx_destruct;
- (id)initWithMapItems:boundingRegion:;
- (id)mapItems;
- (id)boundingRegion;
@end
