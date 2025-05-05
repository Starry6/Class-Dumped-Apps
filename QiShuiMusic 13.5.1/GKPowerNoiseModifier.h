@interface GKPowerNoiseModifier : GKNoiseModifier
- (id)init;
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
@end
