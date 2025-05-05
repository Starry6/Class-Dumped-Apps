@interface AMapRouteShareSearchRequest : AMapShareSearchBaseRequest
@property (nonatomic) q strategy;
@property (nonatomic) q type;
@property (nonatomic) AMapGeoPoint startCoordinate;
@property (nonatomic) AMapGeoPoint destinationCoordinate;
@property (nonatomic) NSString startName;
@property (nonatomic) NSString destinationName;
- (id)transferAddress;
- (void)setDestinationCoordinate:;
- (void)setStartName:;
- (id)startName;
- (id)init;
- (long long)strategy;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)destinationName;
- (void)setDestinationName:;
- (id)startCoordinate;
- (void)setStartCoordinate:;
- (id)destinationCoordinate;
@end
