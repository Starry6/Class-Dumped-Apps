@interface GEOMapAccessBuildingSection : NSObject
@property (nonatomic) {?=dd} centerCoordinate;
@property (nonatomic) double radius;
@property (nonatomic) ^{?=dd} coordinates;
@property (nonatomic) Q coordinateCount;
@property (nonatomic) double baseHeight;
@property (nonatomic) double height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)centerCoordinate;
- (void)dealloc;
- (double)radius;
- (double)height;
- (double)baseHeight;
- (id)coordinates;
- (unsigned long long)coordinateCount;
- (id)initWithFeature:sectionIndex:;
@end
