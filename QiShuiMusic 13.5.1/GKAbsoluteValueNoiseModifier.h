@interface GKAbsoluteValueNoiseModifier : GKNoiseModifier
- (id)init;
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
@end
