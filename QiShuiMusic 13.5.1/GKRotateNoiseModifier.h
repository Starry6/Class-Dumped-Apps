@interface GKRotateNoiseModifier : GKNoiseModifier
- (id)init;
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithInputModuleCount:;
- (id)initWithRadians:;
@end
