@interface GKMoveNoiseModifier : GKNoiseModifier
- (id)init;
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithInputModuleCount:;
- (id)initWithDelta:;
@end
