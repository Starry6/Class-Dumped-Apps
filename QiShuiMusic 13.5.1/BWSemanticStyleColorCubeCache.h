@interface BWSemanticStyleColorCubeCache : NSObject
- (void)dealloc;
- (id)initWithColorLookupCache:;
- (id)filtersForSemanticStyle:sceneType:personSegmentationEnabled:maskVisualizationEnabled:filtersToCombine:;
@end
