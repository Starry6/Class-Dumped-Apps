@interface CPCompoundGraphicMaker : NSObject
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)initWithGraphicsIn:ofClass:;
- (BOOL)findClusterLevel;
- (void)addGroupInfoWithIndex:bounds:;
- (void)makeCompoundGraphicFromShapesAtIndex:count:;
- (void)coalesceShapeGroups;
- (BOOL)makeCompoundGraphicsFromShapeGroups;
- (BOOL)groupOverlappingGraphics;
- (BOOL)makeCompoundGraphics;
+ (BOOL)makeCompoundGraphicsInZonesOf:;
@end
