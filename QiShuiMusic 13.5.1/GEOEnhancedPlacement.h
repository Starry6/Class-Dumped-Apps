@interface GEOEnhancedPlacement : NSObject
@property (nonatomic) NSArray buildingIds;
@property (nonatomic) NSNumber elevationInMeters;
@property (nonatomic) NSNumber buildingHeightInMeters;
@property (nonatomic) NSNumber buildingFaceAzimuth;
- (void).cxx_destruct;
- (id)initWithBuildingIds:elevationInMeters:buildingHeightInMeters:buildingFaceAzimuth:;
- (id)initWithGEOPDEnhancedPlacement:;
- (id)buildingIds;
- (id)elevationInMeters;
- (id)buildingHeightInMeters;
- (id)buildingFaceAzimuth;
@end
