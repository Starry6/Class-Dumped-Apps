@interface GKTurbulenceNoiseModifier : GKNoiseModifier
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithInputModuleCount:;
- (id)initWithFrequency:power:roughness:seed:;
@end
