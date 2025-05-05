@interface GEOSpatialLookupParameters : NSObject
@property (nonatomic) {?=dd} coordinate;
@property (nonatomic) double radius;
@property (nonatomic) NSArray categories;
- (double)radius;
- (void).cxx_destruct;
- (id)coordinate;
- (id)categories;
- (id)initWithCoordinate:radius:categories:;
@end
