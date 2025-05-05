@interface AMapNavigationShareSearchRequest : AMapShareSearchBaseRequest
@property (nonatomic) q strategy;
@property (nonatomic) AMapGeoPoint startCoordinate;
@property (nonatomic) AMapGeoPoint destinationCoordinate;
- (id)transferAddress;
- (void)setDestinationCoordinate:;
- (id)init;
- (long long)strategy;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)startCoordinate;
- (void)setStartCoordinate:;
- (id)destinationCoordinate;
@end
