@interface SFToggleBackgroundView : UIView
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tintColorDidChange;
+ (Class)layerClass;
@end
