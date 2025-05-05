@interface GEOSpatialEventLookupParameters : NSObject
@property (nonatomic) {?=dd} coordinate;
@property (nonatomic) double radius;
@property (nonatomic) NSArray categories;
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) NSInteger maxResultCount;
- (id)dateInterval;
- (id)init;
- (double)radius;
- (void).cxx_destruct;
- (id)coordinate;
- (id)categories;
- (int)maxResultCount;
- (id)initWithCoordinate:radius:categories:dateInterval:;
- (id)initWithCoordinate:radius:categories:dateInterval:maxResultCount:;
@end
