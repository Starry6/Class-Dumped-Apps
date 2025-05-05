@interface GKScaleNoiseModifier : GKNoiseModifier
- (id)init;
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithInputModuleCount:;
- (id)initWithFactor:;
@end
