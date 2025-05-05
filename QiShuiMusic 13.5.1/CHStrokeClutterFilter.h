@interface CHStrokeClutterFilter : NSObject
@property (nonatomic) q highDensityStrokeCount;
- (id)debugQuickLookObject;
- (id)init;
- (BOOL)isEmpty;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithCanvasHeatmap:stroke2ItemMapping:item2StrokeMapping:;
- (id)clutterFilterByAddingStrokes:removingStrokeIdentifiers:affectedStrokeIdentifiers:;
- (BOOL)isHighDensityStroke:;
- (long long)highDensityStrokeCount;
- (id)strokeIDsWithinRectangleRegion:;
@end
