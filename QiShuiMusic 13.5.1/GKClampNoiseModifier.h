@interface GKClampNoiseModifier : GKNoiseModifier
- (id)init;
- (id)initWithLowerBound:upperBound:;
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithInputModuleCount:;
@end
