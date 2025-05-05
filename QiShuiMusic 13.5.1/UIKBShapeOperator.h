@interface UIKBShapeOperator : NSObject
@property (nonatomic) double scale;
- (void)setScale:;
- (double)scale;
- (id)_scaleRange:factor:;
- (id)_scaleRect:factor:;
- (id)rectByScalingRect:factor:;
- (id)shapeByScalingShape:factor:;
- (id)geometryByScalingShapeGeometry:factor:;
- (id)shapesByScalingShapes:factor:;
- (id)shapesByElaboratingShapes:insideShape:count:;
- (id)shapesByCenteringShapes:insideRect:;
- (id)offsetForCenteringShapes:insideRect:;
- (id)shapesByCenteringShapesPreservingLayout:insideRect:;
- (id)shapesByHorizontallyCenteringShapesPreservingLayout:insideRect:;
- (id)shapesByVerticallyCenteringShapesPreservingLayout:insideRect:;
- (id)shapesByCenteringShapesPreservingLayout:insideRect:horizontal:vertical:;
- (id)shapesByRepositioningShapes:withOffset:;
- (id)shapesByResizingShapes:withOffset:;
- (id)shapesByInsettingShapes:withInsets:;
+ (id)operatorWithScale:;
@end
