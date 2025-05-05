@interface AMapTransit : AMapSearchObject
@property (nonatomic) double cost;
@property (nonatomic) q duration;
@property (nonatomic) BOOL nightflag;
@property (nonatomic) q walkingDistance;
@property (nonatomic) NSArray segments;
@property (nonatomic) q distance;
- (long long)walkingDistance;
- (BOOL)nightflag;
- (void)setNightflag:;
- (void)setWalkingDistance:;
- (long long)distance;
- (id)segments;
- (void)setDistance:;
- (double)cost;
- (void)setSegments:;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)duration;
- (void)setCost:;
+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
@end
