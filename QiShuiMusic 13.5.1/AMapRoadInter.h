@interface AMapRoadInter : AMapSearchObject
@property (nonatomic) q distance;
@property (nonatomic) NSString direction;
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) NSString firstId;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString secondId;
@property (nonatomic) NSString secondName;
- (BOOL)ajo_validateValue:forKey:error:;
- (id)firstId;
- (id)secondId;
- (void)setFirstId:;
- (void)setSecondId:;
- (void)setSecondName:;
- (long long)distance;
- (id)direction;
- (id)init;
- (void)setDirection:;
- (void)setFirstName:;
- (void)setDistance:;
- (id)firstName;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)secondName;
+ (id)ajo_mapping;
@end
