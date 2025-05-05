@interface IESECGoodsPOIDetailModel : MTLModel
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString poiName;
@property (nonatomic) NSNumber distance;
@property (nonatomic) NSString distanceDesc;
@property (nonatomic) NSString address;
@property (nonatomic) NSString poiPhone;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)poiName;
- (id)distanceDesc;
- (id)poiID;
- (id)poiPhone;
- (void)setDistanceDesc:;
- (void)setPoiID:;
- (void)setPoiName:;
- (void)setPoiPhone:;
- (id)distance;
- (void)setDistance:;
- (void)setAddress:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)address;
+ (id)JSONKeyPathsByPropertyKey;
@end
