@interface AMapTrafficRoad : AMapSearchObject
@property (nonatomic) NSString name;
@property (nonatomic) q status;
@property (nonatomic) NSString direction;
@property (nonatomic) float angle;
@property (nonatomic) float speed;
@property (nonatomic) NSString polyline;
- (void)setStatus:;
- (id)direction;
- (void)setDirection:;
- (void)setName:;
- (void)setSpeed:;
- (float)speed;
- (void).cxx_destruct;
- (long long)status;
- (id)name;
- (float)angle;
- (void)setAngle:;
- (id)polyline;
- (void)setPolyline:;
+ (id)ajo_mapping;
@end
