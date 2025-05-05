@interface GEOMapFeatureBuildingSection : NSObject
@property (nonatomic) ^{?=dd} coordinates;
@property (nonatomic) Q coordinateCount;
@property (nonatomic) double baseHeight;
@property (nonatomic) double height;
@property (nonatomic) double terrainElevation;
@property (nonatomic) double topHeight;
- (void)dealloc;
- (double)height;
- (void).cxx_destruct;
- (double)baseHeight;
- (id)coordinates;
- (unsigned long long)coordinateCount;
- (id)initWithFeature:sectionIndex:;
- (id)initWithDaVinciTile:sectionIndex:;
- (double)terrainElevation;
- (double)topHeight;
@end
