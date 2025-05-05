@interface AMapLocationShareSearchRequest : AMapShareSearchBaseRequest
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) NSString name;
- (id)transferAddress;
- (void)setName:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)name;
@end
