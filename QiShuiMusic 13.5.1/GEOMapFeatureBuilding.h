@interface GEOMapFeatureBuilding : NSObject
@property (nonatomic) NSArray sections;
@property (nonatomic) Q buildingID;
@property (nonatomic) NSInteger tileSetStyle;
- (id)sections;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFeature:;
- (unsigned long long)buildingID;
- (int)tileSetStyle;
- (id)initWithDaVinciTile:buildingOffset:;
@end
