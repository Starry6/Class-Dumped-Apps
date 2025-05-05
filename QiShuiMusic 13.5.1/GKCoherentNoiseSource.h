@interface GKCoherentNoiseSource : GKNoiseSource
@property (nonatomic) double frequency;
@property (nonatomic) q octaveCount;
@property (nonatomic) double lacunarity;
@property (nonatomic) NSInteger seed;
- (int)seed;
- (double)frequency;
- (void)setFrequency:;
- (void)setSeed:;
- (double)valueAt:;
- (id)cloneModule;
- (long long)octaveCount;
- (void)setOctaveCount:;
- (double)lacunarity;
- (void)setLacunarity:;
@end
