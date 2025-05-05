@interface ICDocCamFilterViewControllerInvisibleRootView : UIView
- (id)accessibilityLabel;
- (BOOL)pointInside:withEvent:;
- (long long)accessibilityContainerType;
- (id)hitTest:withEvent:;
@end
