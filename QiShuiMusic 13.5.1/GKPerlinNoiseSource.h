@interface GKPerlinNoiseSource : GKCoherentNoiseSource
@property (nonatomic) double persistence;
- (double)persistence;
- (void)setPersistence:;
- (id)init;
- (double)valueAt:;
- (id)cloneModule;
- (id)initWithFrequency:octaveCount:persistence:lacunarity:seed:;
+ (id)perlinNoiseSourceWithFrequency:octaveCount:persistence:lacunarity:seed:;
@end
