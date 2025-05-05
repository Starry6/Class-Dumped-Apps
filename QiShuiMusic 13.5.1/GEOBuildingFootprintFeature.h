@interface GEOBuildingFootprintFeature : NSObject
- (id)feature;
- (void).cxx_destruct;
- (id)get;
- (id)init:withVectorTile:;
- (unsigned long long)extrusionOffset;
- (unsigned long long)baseOffset;
- (BOOL)hasLandmark;
- (BOOL)isForTransit;
@end
