@interface GEOVenueComponentIdentifier : NSObject
@property (nonatomic) BOOL hasBuildingID;
@property (nonatomic) Q buildingID;
@property (nonatomic) <GEOVenueFloorInfo> floorInfo;
@property (nonatomic) NSArray sectionIDs;
@property (nonatomic) BOOL hasUnitID;
@property (nonatomic) Q unitID;
@property (nonatomic) BOOL hasFixtureID;
@property (nonatomic) Q fixtureID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sectionIDs;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)unitID;
- (unsigned long long)buildingID;
- (BOOL)_hasBuildingID;
- (id)floorInfo;
- (BOOL)_hasUnitID;
- (BOOL)_hasFixtureID;
- (unsigned long long)fixtureID;
- (id)initWithBuildingID:;
- (id)initWithBuildingID:floorInfo:;
- (id)initWithBuildingID:floorInfo:unitID:;
- (id)initWithBuildingID:floorInfo:fixtureID:;
- (id)initWithVenueIdentifier:;
@end
