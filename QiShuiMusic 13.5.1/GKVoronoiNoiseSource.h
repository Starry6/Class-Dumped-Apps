@interface GKVoronoiNoiseSource : GKNoiseSource
@property (nonatomic) double frequency;
@property (nonatomic) double displacement;
@property (nonatomic) BOOL distanceEnabled;
@property (nonatomic) NSInteger seed;
- (int)seed;
- (id)init;
- (double)frequency;
- (void)setFrequency:;
- (void)setSeed:;
- (void)setDisplacement:;
- (double)valueAt:;
- (double)displacement;
- (id)cloneModule;
- (id)initWithFrequency:displacement:distanceEnabled:seed:;
- (BOOL)isDistanceEnabled;
- (void)setDistanceEnabled:;
+ (id)voronoiNoiseWithFrequency:displacement:distanceEnabled:seed:;
@end
