@interface GEOSpatialPlaceLookupParameters : NSObject
@property (nonatomic) {?=dd} coordinate;
@property (nonatomic) double radius;
@property (nonatomic) NSArray categories;
@property (nonatomic) GEOMapRegion mapRegion;
@property (nonatomic) GEOPOICategoryFilter poiCategoryFilter;
@property (nonatomic) NSInteger maxResultCount;
- (id)init;
- (id)mapRegion;
- (double)radius;
- (void).cxx_destruct;
- (id)coordinate;
- (id)categories;
- (int)maxResultCount;
- (id)initWithCoordinate:radius:categories:;
- (id)initWithCoordinate:radius:categories:maxResultCount:;
- (id)initWithCoordinate:radius:poiCategoryFilter:;
- (id)initWithMapRegion:poiCategoryFilter:;
- (id)poiCategoryFilter;
@end
