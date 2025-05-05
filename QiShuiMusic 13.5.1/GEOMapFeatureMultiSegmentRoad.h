@interface GEOMapFeatureMultiSegmentRoad : GEOMapFeatureRoad
@property (nonatomic) NSArray roadSegments;
- (id)feature;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)tileKey;
- (id)copyWithZone:;
- (unsigned long long)roadID;
- (id)_junctionA;
- (id)_junctionB;
- (id)startFeature;
- (id)endFeature;
- (id)coordinates3d;
- (id)coordinatesDescription;
- (id)initWithRoadSegments:;
- (id)roadSegments;
@end
