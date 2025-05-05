@interface GEOMapItemAdditionalPlaceInfo : NSObject
@property (nonatomic) <GEOMapItem> mapItem;
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger placeType;
@property (nonatomic) double areaInMeters;
@property (nonatomic) {?=dd} coordinate;
@property (nonatomic) GEOMapRegion mapRegion;
- (id)mapItem;
- (int)placeType;
- (id)mapRegion;
- (id)initWithPlace:;
- (id)initWithMapItem:;
- (void).cxx_destruct;
- (id)coordinate;
- (id)name;
- (double)areaInMeters;
- (id)initWithName:placeType:areaInMeters:;
@end
