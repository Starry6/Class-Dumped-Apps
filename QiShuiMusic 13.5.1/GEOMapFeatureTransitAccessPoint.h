@interface GEOMapFeatureTransitAccessPoint : NSObject
@property (nonatomic) ^v feature;
@property (nonatomic) {?=dd} coordinate;
@property (nonatomic) BOOL isEntrance;
@property (nonatomic) BOOL isExit;
@property (nonatomic) double radiusMeters;
- (id)feature;
- (void)dealloc;
- (void).cxx_destruct;
- (id)coordinate;
- (id).cxx_construct;
- (id)initWithFeature:;
- (BOOL)isEntrance;
- (BOOL)isExit;
- (double)radiusMeters;
@end
