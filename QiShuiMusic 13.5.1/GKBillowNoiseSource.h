@interface GKBillowNoiseSource : GKCoherentNoiseSource
@property (nonatomic) double persistence;
- (double)persistence;
- (void)setPersistence:;
- (id)init;
- (double)valueAt:;
- (id)cloneModule;
- (id)initWithFrequency:octaveCount:persistence:lacunarity:seed:;
+ (id)billowNoiseSourceWithFrequency:octaveCount:persistence:lacunarity:seed:;
@end
