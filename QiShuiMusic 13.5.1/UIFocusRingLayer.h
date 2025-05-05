@interface UIFocusRingLayer : CAShapeLayer
- (void)_updateWithTintColor:;
+ (id)focusLayerForUserInterfaceStyle:;
+ (id)parentLayerForUserInterfaceStyle:;
+ (id)selectedLayerForUserInterfaceStyle:;
+ (id)selectedParentLayerForUserInterfaceStyle:;
@end
