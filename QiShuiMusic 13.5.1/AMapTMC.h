@interface AMapTMC : AMapSearchObject
@property (nonatomic) q distance;
@property (nonatomic) NSString status;
@property (nonatomic) NSString polyline;
- (long long)distance;
- (void)setStatus:;
- (id)init;
- (void)setDistance:;
- (void).cxx_destruct;
- (id)status;
- (id)polyline;
- (void)setPolyline:;
+ (id)ajo_mapping;
@end
