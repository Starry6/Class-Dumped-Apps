@interface AMapNearbyUserInfo : AMapSearchObject
@property (nonatomic) NSString userID;
@property (nonatomic) AMapGeoPoint location;
@property (nonatomic) double distance;
@property (nonatomic) double updatetime;
- (BOOL)ajo_validateValue:forKey:error:;
- (void)setUpdatetime:;
- (double)updatetime;
- (double)distance;
- (id)userID;
- (id)init;
- (void)setDistance:;
- (id)location;
- (void)setLocation:;
- (void).cxx_destruct;
- (void)setUserID:;
+ (id)ajo_mapping;
@end
