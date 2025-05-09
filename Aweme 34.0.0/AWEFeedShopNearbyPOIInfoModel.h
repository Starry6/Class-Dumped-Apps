@interface AWEFeedShopNearbyPOIInfoModel : MTLModel
@property (nonatomic) NSString nearbyPoiId;
@property (nonatomic) NSString nearbyPoiName;
@property (nonatomic) NSString cost;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString typeName;
@property (nonatomic) NSString distance;
@property (nonatomic) AWEAddressModel addressInfo;
@property (nonatomic) AWEPOITypeModel backendType;
@property (nonatomic) AWEURLModel headImg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBackendType:;
- (id)backendType;
- (id)nearbyPoiId;
- (void)setNearbyPoiId:;
- (id)nearbyPoiName;
- (void)setNearbyPoiName:;
- (void)setAddressInfo:;
- (id)headImg;
- (void)setHeadImg:;
- (void)setDistance:;
- (id)typeName;
- (id)icon;
- (id)distance;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)cost;
- (id)addressInfo;
- (void)setTypeName:;
- (void)setCost:;
+ (BOOL)automaticallyDefaultMapping;
@end
