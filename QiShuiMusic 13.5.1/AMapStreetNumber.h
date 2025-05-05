@interface AMapStreetNumber : AMapSearchObject
@property (nonatomic) NSString street;
@property (nonatomic) NSString number;
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) q distance;
@property (nonatomic) NSString direction;
- (BOOL)ajo_validateValue:forKey:error:;
- (long long)distance;
- (id)direction;
- (id)init;
- (void)setDirection:;
- (id)number;
- (void)setDistance:;
- (id)location;
- (void)setNumber:;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)street;
- (void)setStreet:;
+ (id)ajo_mapping;
@end
