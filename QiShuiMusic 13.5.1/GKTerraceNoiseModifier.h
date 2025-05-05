@interface GKTerraceNoiseModifier : GKNoiseModifier
- (id)init;
- (void)dealloc;
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithInputModuleCount:;
- (id)initWithPeakInputValues:terracesInverted:;
@end
