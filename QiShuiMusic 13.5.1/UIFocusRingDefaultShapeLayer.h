@interface UIFocusRingDefaultShapeLayer : UIFocusRingLayer
- (id)init;
+ (id)focusLayerForUserInterfaceStyle:;
+ (id)parentLayerForUserInterfaceStyle:;
+ (id)selectedLayerForUserInterfaceStyle:;
+ (id)selectedParentLayerForUserInterfaceStyle:;
@end
