@interface AMapTip : AMapSearchObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) NSString adcode;
@property (nonatomic) NSString district;
@property (nonatomic) NSString address;
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) NSString typecode;
- (BOOL)ajo_validateValue:forKey:error:;
- (id)adcode;
- (void)setAdcode:;
- (void)setTypecode:;
- (id)typecode;
- (id)init;
- (void)setName:;
- (id)uid;
- (void)setUid:;
- (void)setAddress:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)address;
- (id)name;
- (void)setDistrict:;
- (id)district;
+ (id)ajo_mapping;
@end
