@interface AMapDistanceResult : AMapSearchObject
@property (nonatomic) q originID;
@property (nonatomic) q destID;
@property (nonatomic) q distance;
@property (nonatomic) q duration;
@property (nonatomic) NSString info;
@property (nonatomic) q code;
- (long long)distance;
- (id)init;
- (void)setDistance:;
- (void)setInfo:;
- (long long)code;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)info;
- (void)setCode:;
- (long long)duration;
- (long long)destID;
- (void)setDestID:;
- (void)setOriginID:;
- (long long)originID;
+ (id)ajo_mapping;
@end
