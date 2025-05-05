@interface GKRidgedNoiseSource : GKCoherentNoiseSource
- (id)init;
- (double)valueAt:;
- (id)cloneModule;
- (id)initWithFrequency:octaveCount:lacunarity:seed:;
+ (id)ridgedNoiseSourceWithFrequency:octaveCount:lacunarity:seed:;
@end
