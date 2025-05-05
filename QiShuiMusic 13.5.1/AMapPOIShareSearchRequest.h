@interface AMapPOIShareSearchRequest : AMapShareSearchBaseRequest
@property (nonatomic) NSString uid;
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) NSString name;
@property (nonatomic) NSString address;
- (id)transferAddress;
- (void)setName:;
- (id)uid;
- (void)setUid:;
- (void)setAddress:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)address;
- (id)name;
@end
