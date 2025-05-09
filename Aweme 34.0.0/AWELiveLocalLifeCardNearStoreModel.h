@interface AWELiveLocalLifeCardNearStoreModel : MTLModel
@property (nonatomic) NSString distanceText;
@property (nonatomic) NSString poiTotalText;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSString isShowDistantModule;
@property (nonatomic) NSString distantKm;
@property (nonatomic) NSString applicableStore;
@property (nonatomic) NSString isStoreNameShow;
@property (nonatomic) NSString deliveryTime;
@property (nonatomic) NSString distanceInfoType;
@property (nonatomic) NSString poiTotalType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)poiName;
- (void)setPoiName:;
- (id)distanceText;
- (void)setDistanceText:;
- (void)setDeliveryTime:;
- (id)deliveryTime;
- (id)poiTotalText;
- (void)setPoiTotalText:;
- (id)isShowDistantModule;
- (void)setIsShowDistantModule:;
- (id)distantKm;
- (void)setDistantKm:;
- (id)applicableStore;
- (void)setApplicableStore:;
- (id)isStoreNameShow;
- (void)setIsStoreNameShow:;
- (id)distanceInfoType;
- (void)setDistanceInfoType:;
- (id)poiTotalType;
- (void)setPoiTotalType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
