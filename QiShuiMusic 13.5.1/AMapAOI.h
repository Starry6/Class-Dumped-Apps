@interface AMapAOI : AMapSearchObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSString name;
@property (nonatomic) NSString adcode;
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) double area;
- (BOOL)ajo_validateValue:forKey:error:;
- (id)adcode;
- (void)setAdcode:;
- (id)init;
- (void)setName:;
- (id)uid;
- (void)setUid:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)name;
- (double)area;
- (void)setArea:;
+ (id)ajo_mapping;
@end
