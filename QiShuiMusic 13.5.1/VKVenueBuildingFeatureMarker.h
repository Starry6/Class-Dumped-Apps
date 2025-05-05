@interface VKVenueBuildingFeatureMarker : VKMarker
@property (nonatomic) Q buildingId;
@property (nonatomic) Q businessId;
@property (nonatomic) NSArray floorOrdinals;
@property (nonatomic) NSDictionary shortFloorNames;
@property (nonatomic) NSDictionary floorNames;
- (unsigned long long)buildingId;
- (id)nearestFramingPositionToLocation:;
- (id)initWithVenueBuilding:localize:;
- (id)venueBuildingFeatureMarker;
- (unsigned long long)businessId;
- (id)floorNames;
- (id)shortFloorNames;
- (id)floorOrdinals;
@end
