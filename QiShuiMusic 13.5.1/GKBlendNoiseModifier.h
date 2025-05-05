@interface GKBlendNoiseModifier : GKNoiseModifier
- (id)init;
- (double)valueAt:;
- (id)cloneModule;
- (int)requiredInputModuleCount;
- (id)initWithInputModuleCount:;
- (id)initWithSelectionRangeLowerBound:selectionRangeUpperBound:selectionBoundaryBlendDistance:;
@end
