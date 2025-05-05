@interface AMapDistrict : AMapSearchObject
@property (nonatomic) NSString adcode;
@property (nonatomic) NSString citycode;
@property (nonatomic) NSString name;
@property (nonatomic) NSString level;
@property (nonatomic) AMapGeoPoint center;
@property (nonatomic) NSArray districts;
@property (nonatomic) NSArray polylines;
- (BOOL)ajo_validateValue:forKey:error:;
- (id)adcode;
- (id)citycode;
- (id)districts;
- (id)polygonArrayWithString:;
- (void)setAdcode:;
- (void)setCitycode:;
- (void)setDistricts:;
- (void)setLevel:;
- (id)center;
- (id)init;
- (void)setCenter:;
- (void)setName:;
- (id)level;
- (id)polylines;
- (void).cxx_destruct;
- (id)name;
- (void)setPolylines:;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
