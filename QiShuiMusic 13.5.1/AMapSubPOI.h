@interface AMapSubPOI : AMapSearchObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) NSString sname;
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) NSString address;
@property (nonatomic) q distance;
@property (nonatomic) NSString subtype;
- (BOOL)ajo_validateValue:forKey:error:;
- (void)setSname:;
- (id)sname;
- (long long)distance;
- (id)subtype;
- (id)init;
- (void)setName:;
- (id)uid;
- (void)setDistance:;
- (void)setUid:;
- (void)setAddress:;
- (void)setSubtype:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)address;
- (id)name;
+ (id)ajo_mapping;
@end
